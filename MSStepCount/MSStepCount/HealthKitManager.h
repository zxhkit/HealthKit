//
//  HealthKitManager.h
//  MSStepCount
//
//  Created by rookie on 2018/2/27.
//  Copyright © 2018年 zxh. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HealthKitManager : NSObject

///健康单例
+ (instancetype)sharedInstance;

///检查是否支持获取健康数据
- (void)authorizeHealthKit:(void(^)(BOOL success, NSError *error))compltion;

///获取步数
- (void)getStepCount:(void(^)(NSString *stepValue, NSError *error))completion;

///获取睡眠
- (void)getSleepCount:(void(^)(NSString *sleepValue, NSError *error))completion;

@end
