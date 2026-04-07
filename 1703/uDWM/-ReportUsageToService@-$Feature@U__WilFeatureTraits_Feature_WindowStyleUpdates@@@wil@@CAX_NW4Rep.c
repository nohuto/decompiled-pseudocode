/*
 * XREFs of ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_WindowStyleUpdates@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180014F00
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow@@UEAAJXZ @ 0x180025B70 (-ValidateVisual@CTopLevelWindow@@UEAAJXZ.c)
 *     ?ShowWindow@CTopLevelWindow@@QEAAJ_N@Z @ 0x18002A610 (-ShowWindow@CTopLevelWindow@@QEAAJ_N@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x180014F74 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_WindowStyleUpdates@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180045BF4 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_WindowStyleUpdates@@@wil@@CA.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil::Feature<__WilFeatureTraits_Feature_WindowStyleUpdates>::ReportUsageToService(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int16 v3; // [rsp+54h] [rbp-Ch]
  int v4; // [rsp+78h] [rbp+18h] BYREF
  __int64 v5; // [rsp+80h] [rbp+20h] BYREF

  v5 = a3;
  LOBYTE(v4) = a2;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_WindowStyleUpdates>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_WindowStyleUpdates>::GetCachedFeatureEnabledState();
  LOBYTE(v3) = 3;
  WORD2(v5) = v3;
  LODWORD(v5) = 0;
  v4 = 3;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(
                       &`wil::Feature<__WilFeatureTraits_Feature_WindowStyleUpdates>::GetFeaturePropertyCache'::`2'::data,
                       a2,
                       2LL) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0x9A0B4Eu,
        (const struct FEATURE_LOGGED_TRAITS *)&v5,
        0LL,
        1,
        (const enum wil_ReportingKind *)&v4,
        0LL,
        0,
        1uLL);
  }
}
