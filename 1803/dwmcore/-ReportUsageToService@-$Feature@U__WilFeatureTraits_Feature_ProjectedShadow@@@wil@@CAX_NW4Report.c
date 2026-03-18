/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800BAC14
 * Callers:
 *     ??0CDrawingContext@@AEAA@PEAVCComposition@@@Z @ 0x18006E7D0 (--0CDrawingContext@@AEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800BA4FC (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CA-AW.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800BAD78 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_ProjectedShadow>::ReportUsageToService(
        __int64 a1,
        unsigned int a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ProjectedShadow>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_ProjectedShadow>::GetCachedFeatureEnabledState(
      a1,
      a2,
      (enum FEATURE_CHANGE_TIME)a3);
  LOBYTE(v4) = 0;
  v5 = 0;
  v6 = v4;
  return wil_details_FeaturePropertyCache_ReportUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_ProjectedShadow>::GetFeaturePropertyCache'::`2'::data,
           10769683LL,
           &v5,
           0LL,
           0);
}
