/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_EyeTracking@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18018C364
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_EyeTracking@@@wil@@SA_NXZ @ 0x18018BD00 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_EyeTracking@@@wil@@SA_NXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180060A94 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_EyeTracking@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18018B174 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_EyeTracking@@@wil@@CA-AW4wil.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_EyeTracking>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v3; // [rsp+20h] [rbp-18h]
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_EyeTracking>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_EyeTracking>::GetCachedFeatureEnabledState(a1);
  LOBYTE(v4) = 3;
  v5 = 0;
  v6 = v4;
  LODWORD(v3) = 3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_EyeTracking>::GetFeaturePropertyCache'::`2'::data,
    0xA84E1Fu,
    (const struct FEATURE_LOGGED_TRAITS *)&v5,
    (struct wil_details_RecordUsageResult *)1,
    v3);
}
