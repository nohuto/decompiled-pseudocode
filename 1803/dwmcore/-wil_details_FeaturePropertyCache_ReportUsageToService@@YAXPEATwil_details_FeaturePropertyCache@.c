/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1800BAD78
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_MitLoopInversion@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800BAAF0 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_MitLoopInversion@@@wil@@CAX_NW4Repor.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800BAB4C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_SuperWetInk@@@wil@@CAX_NW4ReportingK.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800BABBC (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4Reporti.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800BAC14 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ProjectedShadow@@@wil@@CAX_NW4Report.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800BAC6C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DepthSorting@@@wil@@CAX_NW4Reporting.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800BACC4 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_ForceNRE@@@wil@@CAX_NW4ReportingKind.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x1800BAD1C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_DwmHintingPpm@@@wil@@CAX_NW4Reportin.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x18014AB2C (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_StereoscopicUwp@@@wil@@CAX_NW4Report.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800BAE58 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        int a4,
        int a5)
{
  unsigned int v7; // esi
  unsigned int v8; // ebx

  v7 = a2;
  if ( a5 )
  {
    switch ( a5 )
    {
      case 1:
        v8 = a4 == 0 ? 4 : 0;
        break;
      case 2:
        v8 = a4 != 0 ? 1 : 5;
        break;
      case 3:
        v8 = a4 != 0 ? 2 : 6;
        break;
      case 4:
        v8 = a4 != 0 ? 3 : 7;
        break;
      case 5:
        v8 = a4 != 0 ? 8 : 10;
        break;
      case 6:
        v8 = a4 != 0 ? 9 : 11;
        break;
      default:
        if ( (unsigned __int8)(a5 - 100) > 0x31u )
          v8 = 255;
        else
          v8 = (unsigned __int8)(a5 - 100) + (a4 != 0 ? 100 : 150);
        break;
    }
    if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(a1, a2, v8, 0LL, 1LL)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(v7, a3, 0LL, a4, (const enum wil_ReportingKind *)&a5, 0LL, 0, 1uLL);
    }
    if ( g_wil_details_queueBackgroundSRUMUsageReporting && (v8 - 100 <= 0x31 || !v8) )
      g_wil_details_queueBackgroundSRUMUsageReporting(v7, v8, 1u);
  }
}
