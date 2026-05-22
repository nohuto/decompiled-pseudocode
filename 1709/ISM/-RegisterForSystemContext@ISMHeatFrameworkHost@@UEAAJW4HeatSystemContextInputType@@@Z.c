/*
 * XREFs of ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@@Z @ 0x180048630
 * Callers:
 *     ??_EISMHeatFrameworkHost@@MEAAPEAXI@Z @ 0x18004846C (--_EISMHeatFrameworkHost@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000B894 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180048728 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Input_HeatSystemContext@@@wi.c)
 */

__int64 ISMHeatFrameworkHost::RegisterForSystemContext()
{
  __int16 v1; // [rsp+54h] [rbp+1Ch]
  int v2; // [rsp+58h] [rbp+20h] BYREF
  __int16 v3; // [rsp+5Ch] [rbp+24h]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_Input_HeatSystemContext>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_Input_HeatSystemContext>::GetCachedFeatureEnabledState();
  LOBYTE(v1) = 0;
  v2 = 0;
  v3 = v1;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_Input_HeatSystemContext>::GetFeaturePropertyCache'::`2'::data,
    0xB3542Cu,
    (const struct FEATURE_LOGGED_TRAITS *)&v2,
    0,
    3);
  return 0LL;
}
