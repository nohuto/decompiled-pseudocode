/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_SilentInstalledApps@@@wil@@SA_NXZ @ 0x18002F680
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800078C4 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SilentInstalledApps@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180036234 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SilentInstalledApps@@@wil@@C.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_SilentInstalledApps>::IsEnabled()
{
  __int16 v1; // [rsp+34h] [rbp+Ch]
  int v2; // [rsp+38h] [rbp+10h] BYREF
  __int16 v3; // [rsp+3Ch] [rbp+14h]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_SilentInstalledApps>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SilentInstalledApps>::GetCachedFeatureEnabledState();
  LOBYTE(v1) = 3;
  v2 = 0;
  v3 = v1;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_SilentInstalledApps>::GetFeaturePropertyCache'::`2'::data,
    0x7A7721u,
    (const struct FEATURE_LOGGED_TRAITS *)&v2,
    3);
  return 1;
}
