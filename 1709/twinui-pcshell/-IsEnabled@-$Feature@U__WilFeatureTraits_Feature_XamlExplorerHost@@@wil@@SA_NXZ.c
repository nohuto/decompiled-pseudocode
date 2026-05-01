/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@SA_NXZ @ 0x1800DF5B0
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001F064 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800DF998 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_XamlExplorerHost@@@wil@@CA-A.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::IsEnabled()
{
  __int16 v1; // [rsp+44h] [rbp+Ch]
  int v2; // [rsp+48h] [rbp+10h] BYREF
  __int16 v3; // [rsp+4Ch] [rbp+14h]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::GetCachedFeatureEnabledState();
  LOBYTE(v1) = 0;
  v2 = 0;
  v3 = v1;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_XamlExplorerHost>::GetFeaturePropertyCache'::`2'::data,
    0x70A74Cu,
    (const struct FEATURE_LOGGED_TRAITS *)&v2,
    0,
    3);
  return 0;
}
