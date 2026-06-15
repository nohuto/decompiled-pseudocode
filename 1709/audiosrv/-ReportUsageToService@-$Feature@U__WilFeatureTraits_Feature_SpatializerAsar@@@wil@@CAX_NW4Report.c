/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SpatializerAsar@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18009B88C
 * Callers:
 *     ?InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4SYSTEM_AUDIO_STREAM_TYPE@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@4KPEBUtWAVEFORMATEX@@5_J6PEBGPEBU5@PEBUSPATIAL_STREAM_PROPERTIES@@6_NPEAPEAUSYSTEM_AUDIO_STREAM_DESCRIPTOR@@PEAPEAUAUDIO_DEVICE_MODE_DESCRIPTOR@@@Z @ 0x18000B350 (-InitializeStreamAndModeDescriptors@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4S.c)
 *     ?IsAppPinningEnabled@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ @ 0x18002EEE4 (-IsAppPinningEnabled@CSpatialAudioResourceManager@Sarm@@AEAA_NXZ.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18008D328 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_SpatializerAsar@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18009A6E0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_SpatializerAsar@@@wil@@CA-AW.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_SpatializerAsar>::ReportUsageToService(
        __int64 a1,
        int a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp+1Ch]
  int v4; // [rsp+58h] [rbp+20h] BYREF
  __int16 v5; // [rsp+5Ch] [rbp+24h]

  HIBYTE(v3) = BYTE5(a3);
  if ( (`wil::Feature<__WilFeatureTraits_Feature_SpatializerAsar>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_SpatializerAsar>::GetCachedFeatureEnabledState(a1, a2, a3);
  LOBYTE(v3) = 3;
  v4 = 0;
  v5 = v3;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_SpatializerAsar>::GetFeaturePropertyCache'::`2'::data,
    0x936ECCu,
    (const struct FEATURE_LOGGED_TRAITS *)&v4,
    1,
    3);
}
