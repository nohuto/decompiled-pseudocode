/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_DocumentFocus@@@wil@@SA_NXZ @ 0x1800CB410
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18001E2E8 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_DocumentFocus@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800CB858 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_DocumentFocus@@@wil@@CA-AW4w.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_DocumentFocus>::IsEnabled()
{
  __int16 v1; // [rsp+34h] [rbp-14h]
  int v2; // [rsp+50h] [rbp+8h] BYREF
  __int16 v3; // [rsp+54h] [rbp+Ch]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_DocumentFocus>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_DocumentFocus>::GetCachedFeatureEnabledState();
  LOBYTE(v1) = 1;
  v2 = 0;
  v3 = v1;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_DocumentFocus>::GetFeaturePropertyCache'::`2'::data,
    0x38EE6Bu,
    (const struct FEATURE_LOGGED_TRAITS *)&v2,
    0,
    3);
  return 0;
}
