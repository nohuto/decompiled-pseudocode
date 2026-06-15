/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180007208
 * Callers:
 *     AudioServerIsFormatSupported @ 0x18001F5A0 (AudioServerIsFormatSupported.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180006E80 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18000736C (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_Audio_MultiChannelRenderAtte.c)
 *     _guard_dispatch_icall_nop @ 0x180036BB0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::ReportUsageToService(
        char a1,
        unsigned __int8 a2,
        __int64 a3)
{
  unsigned int v4; // r8d
  int v5; // [rsp+70h] [rbp+20h] BYREF
  __int64 v6; // [rsp+80h] [rbp+30h]
  int v7; // [rsp+88h] [rbp+38h] BYREF
  __int16 v8; // [rsp+8Ch] [rbp+3Ch]

  v6 = a3;
  LOBYTE(v5) = a1;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetCachedFeatureEnabledState();
  LODWORD(v6) = 0;
  v7 = 0;
  v5 = a2;
  v4 = 3;
  BYTE4(v6) = 3;
  v8 = WORD2(v6);
  if ( a2 )
  {
    switch ( a2 )
    {
      case 1u:
        v4 = 0;
        break;
      case 2u:
        v4 = 1;
        break;
      case 3u:
        v4 = 2;
        break;
      default:
        if ( a2 != 4 )
        {
          if ( a2 == 5 )
          {
            v4 = 8;
          }
          else if ( a2 == 6 )
          {
            v4 = 9;
          }
          else if ( (unsigned __int8)(a2 - 100) > 0x31u )
          {
            v4 = 255;
          }
          else
          {
            v4 = (unsigned __int8)(a2 - 100) + 100;
          }
        }
        break;
    }
    if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                         (union wil_details_FeaturePropertyCache *)&`wil::Feature<__WilFeatureTraits_Feature_Audio_MultiChannelRenderAttempted>::GetFeaturePropertyCache'::`2'::data,
                         0xB487B0u,
                         v4) )
    {
      if ( g_wil_details_pfnFeatureLoggingHook )
        g_wil_details_pfnFeatureLoggingHook(
          0xB487B0u,
          (const struct FEATURE_LOGGED_TRAITS *)&v7,
          0LL,
          1,
          (const enum wil_ReportingKind *)&v5,
          0LL,
          0,
          1uLL);
    }
  }
}
