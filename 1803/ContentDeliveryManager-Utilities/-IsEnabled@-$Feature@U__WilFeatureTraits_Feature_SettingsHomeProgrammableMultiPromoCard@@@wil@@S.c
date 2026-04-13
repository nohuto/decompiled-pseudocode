/*
 * XREFs of ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_SettingsHomeProgrammableMultiPromoCard@@@wil@@SA_NXZ @ 0x180032720
 * Callers:
 *     <none>
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180007E94 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SettingsHomeProgrammableMultiPromoCard@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180039100 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SettingsHomeProgrammableMult.c)
 */

char wil::Feature<__WilFeatureTraits_Feature_SettingsHomeProgrammableMultiPromoCard>::IsEnabled()
{
  __int16 v1; // [rsp+44h] [rbp+Ch]
  int v2; // [rsp+48h] [rbp+10h] BYREF
  __int16 v3; // [rsp+4Ch] [rbp+14h]

  if ( (`wil::Feature<__WilFeatureTraits_Feature_SettingsHomeProgrammableMultiPromoCard>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SettingsHomeProgrammableMultiPromoCard>::GetCachedFeatureEnabledState();
  LOBYTE(v1) = 0;
  v2 = 0;
  v3 = v1;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_SettingsHomeProgrammableMultiPromoCard>::GetFeaturePropertyCache'::`2'::data,
    0xC4F6ADu,
    (const struct FEATURE_LOGGED_TRAITS *)&v2,
    0,
    3u);
  return 0;
}
