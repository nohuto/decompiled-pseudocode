/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MitLoopInversion@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800BAAF0
 * Callers:
 *     ?Run@CMit@@AEAAKXZ @ 0x18001DECC (-Run@CMit@@AEAAKXZ.c)
 *     ?InitializeCoreMessagingIocp@CMit@@CAXPEAX@Z @ 0x1800BAA90 (-InitializeCoreMessagingIocp@CMit@@CAXPEAX@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800BAD78 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_MitLoopInversion@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800BB000 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_MitLoopInversion@@@wil@@CA-A.c)
 */

__int64 __fastcall wil::Feature<__WilFeatureTraits_Feature_MitLoopInversion>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v4; // [rsp+54h] [rbp+1Ch]
  int v5; // [rsp+58h] [rbp+20h] BYREF
  __int16 v6; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v4) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_MitLoopInversion>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_MitLoopInversion>::GetCachedFeatureEnabledState();
  LOBYTE(v4) = 3;
  v5 = 0;
  v6 = v4;
  return wil_details_FeaturePropertyCache_ReportUsageToService(
           &`wil::Feature<__WilFeatureTraits_Feature_MitLoopInversion>::GetFeaturePropertyCache'::`2'::data,
           14324566LL,
           &v5,
           1LL,
           3);
}
