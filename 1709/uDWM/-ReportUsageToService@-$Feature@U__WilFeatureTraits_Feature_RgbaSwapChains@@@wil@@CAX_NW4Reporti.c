/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180033DF0
 * Callers:
 *     ??0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z @ 0x180033B00 (--0CDWMDisplay@@AEAA@PEAVCDWMDXGIAdapter@@AEBUDXGIOutputInfo@@@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180033E64 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x18003F6B0 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CA-AW4.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  int v3; // [rsp+68h] [rbp+18h] BYREF
  __int64 v4; // [rsp+70h] [rbp+20h]
  int v5; // [rsp+78h] [rbp+28h] BYREF
  __int16 v6; // [rsp+7Ch] [rbp+2Ch]

  v4 = a3;
  LOBYTE(v3) = a2;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetCachedFeatureEnabledState();
  v3 = 3;
  BYTE4(v4) = 0;
  v6 = WORD2(v4);
  LODWORD(v4) = 0;
  v5 = 0;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       &`wil::Feature<__WilFeatureTraits_Feature_RgbaSwapChains>::GetFeaturePropertyCache'::`2'::data,
                       a2,
                       6LL) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0xB3D7A1u,
        (const struct FEATURE_LOGGED_TRAITS *)&v5,
        0LL,
        0,
        (const enum wil_ReportingKind *)&v3,
        0LL,
        0,
        1uLL);
  }
}
