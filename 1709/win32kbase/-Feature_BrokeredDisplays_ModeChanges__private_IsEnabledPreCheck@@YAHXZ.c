/*
 * XREFs of ?Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck@@YAHXZ @ 0x1C006719C
 * Callers:
 *     DrvSetDisplayConfigValidateParams @ 0x1C00ABC7C (DrvSetDisplayConfigValidateParams.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00671C8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck(void)
{
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &Feature_BrokeredDisplays_ModeChanges__private_propertyCache,
    10733637LL,
    &unk_1C01608E8);
  return 1LL;
}
