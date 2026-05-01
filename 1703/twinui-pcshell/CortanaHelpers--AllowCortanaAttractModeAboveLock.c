/*
 * XREFs of CortanaHelpers::AllowCortanaAttractModeAboveLock @ 0x1800C222C
 * Callers:
 *     ?OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1800C4DE4 (-OnTargetedMessage@CortanaDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_CortanaOnLockOutProcModel@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18009E028 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_CortanaOnLockOutProcModel@@@.c)
 */

char CortanaHelpers::AllowCortanaAttractModeAboveLock()
{
  __int16 v1; // [rsp+34h] [rbp-14h]
  int v2; // [rsp+50h] [rbp+8h] BYREF
  __int16 v3; // [rsp+54h] [rbp+Ch]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_CortanaOnLockOutProcModel>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_CortanaOnLockOutProcModel>::GetCachedFeatureEnabledState();
  LOBYTE(v1) = 3;
  v2 = 0;
  v3 = v1;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_CortanaOnLockOutProcModel>::GetFeaturePropertyCache'::`2'::data,
    0x8CBDCDu,
    (const struct FEATURE_LOGGED_TRAITS *)&v2,
    1,
    3);
  return 0;
}
