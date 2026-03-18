/*
 * XREFs of KiInitializeVelocity @ 0x1408B2700
 * Callers:
 *     KeInitSystem @ 0x1408B21CC (KeInitSystem.c)
 * Callees:
 *     wil_details_FeaturePropertyCache_ReportUsageToService @ 0x1401787F0 (wil_details_FeaturePropertyCache_ReportUsageToService.c)
 */

_UNKNOWN **KiInitializeVelocity()
{
  _UNKNOWN **result; // rax

  wil_details_FeaturePropertyCache_ReportUsageToService(
    (int)&Feature_SchedulerAssistReflectPriority__private_propertyCache,
    0xCE8A22u,
    (__int64)&Feature_SchedulerAssistForegroundBoostBias_logged_traits,
    0,
    3);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (int)&Feature_SchedulerAssistPreemptionPriorityKick__private_propertyCache,
    0xD245DCu,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    3);
  KiVelocityFlags |= 2u;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (int)&Feature_SchedulerAssistThreadFlag__private_propertyCache,
    0xCE8A33u,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    3);
  KiVelocityFlags |= 4u;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (int)&Feature_SchedulerAssistForegroundBoostBias__private_propertyCache,
    0xDDFB0Eu,
    (__int64)&Feature_SchedulerAssistForegroundBoostBias_logged_traits,
    0,
    3);
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (int)&Feature_SchedulerAssistEnableBAM__private_propertyCache,
    0xDE148Cu,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    3);
  KiVelocityFlags |= 0x10u;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (int)&Feature_SchedulerAssistSpinLock__private_propertyCache,
    0xDEC5D6u,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    3);
  KiVelocityFlags |= 0x20u;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (int)&Feature_SchedulerAssistHRTimer__private_propertyCache,
    0xDF826Fu,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    3);
  KiVelocityFlags |= 0x40u;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (int)&Feature_SchedulerAggressiveForegroundBoost__private_propertyCache,
    0xDEF75Cu,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    3);
  KiForegroundBoostTicks = 1;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (int)&Feature_SchedulerAssistAllowRealTime__private_propertyCache,
    0xE4A238u,
    (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
    1u,
    3);
  KiVelocityFlags |= 0x80u;
  result = wil_details_FeaturePropertyCache_ReportUsageToService(
             (int)&Feature_OneShotHRTimer__private_propertyCache,
             0xCA48F5u,
             (__int64)&Feature_SchedulerAssistHRTimer_logged_traits,
             1u,
             3);
  KiVelocityFlags |= 0x100u;
  return result;
}
