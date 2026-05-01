/*
 * XREFs of ?ShouldHandleFrameworkViewTypeChange@HolographicPositioner@@UEAAHPEAUIApplicationView@@W4FRAMEWORK_VIEW_TYPE@@@Z @ 0x1800FBCF0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800DF850 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_HolographicUserExperiences@@.c)
 */

__int64 HolographicPositioner::ShouldHandleFrameworkViewTypeChange()
{
  int v1; // [rsp+30h] [rbp-18h] BYREF
  __int16 v2; // [rsp+34h] [rbp-14h]
  __int16 v3; // [rsp+6Ch] [rbp+24h]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetCachedFeatureEnabledState();
  LOBYTE(v3) = 3;
  v1 = 0;
  v2 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_HolographicUserExperiences>::GetFeaturePropertyCache'::`2'::data,
    0x88518Bu,
    (const struct FEATURE_LOGGED_TRAITS *)&v1,
    1,
    3);
  return 1LL;
}
