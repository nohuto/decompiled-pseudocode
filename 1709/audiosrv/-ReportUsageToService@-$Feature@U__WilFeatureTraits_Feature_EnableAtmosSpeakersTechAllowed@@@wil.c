/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllowed@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800CF8D4
 * Callers:
 *     ?RegistryGates@CSpatialAudioTechnologies@@SAXXZ @ 0x1800CF868 (-RegistryGates@CSpatialAudioTechnologies@@SAXXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008D328 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllowed@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x1800CE744 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllow.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllowed>::ReportUsageToService(
        __int64 a1,
        int a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllowed>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllowed>::GetCachedFeatureEnabledState(a1, a2, a3);
  LOBYTE(v3) = 0;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_EnableAtmosSpeakersTechAllowed>::GetFeaturePropertyCache'::`2'::data,
    0x9C34DBu,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    0,
    3);
}
