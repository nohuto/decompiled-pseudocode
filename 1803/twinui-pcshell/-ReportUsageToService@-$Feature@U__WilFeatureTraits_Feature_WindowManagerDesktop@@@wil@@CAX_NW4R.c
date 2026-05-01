/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018C52C
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@SA_NXZ @ 0x18018BD80 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@SA_NXZ.c)
 *     ?IsFeature_WindowManagerDesktopDisabled@@YA_NXZ @ 0x18018BDD0 (-IsFeature_WindowManagerDesktopDisabled@@YA_NXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180060A94 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18018B6A4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowManagerDesktop@@@wil@@.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_WindowManagerDesktop>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // [rsp+20h] [rbp-18h]
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_WindowManagerDesktop>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_WindowManagerDesktop>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v4) = 1;
  v5 = 0;
  v6 = v4;
  LODWORD(v3) = 3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_WindowManagerDesktop>::GetFeaturePropertyCache'::`2'::data,
    0xD5457Bu,
    (const struct FEATURE_LOGGED_TRAITS *)&v5,
    0LL,
    v3);
}
