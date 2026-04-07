/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18003525C
 * Callers:
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180035208 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_RgbaSwapChains@@@wil@@CAX_NW4Reporti.c)
 *     ?ReportUsageToService@?$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind@2@_K@Z @ 0x180085D84 (-ReportUsageToService@-$Feature@U__WilFeatureTraits_Feature_TabShell@@@wil@@CAX_NW4ReportingKind.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1800352F8 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        __int64 a4,
        int a5)
{
  unsigned int v6; // edi
  unsigned int v7; // ebx

  v6 = a2;
  if ( a5 )
  {
    switch ( a5 )
    {
      case 1:
        v7 = 4;
        break;
      case 2:
        v7 = 5;
        break;
      case 3:
        v7 = 6;
        break;
      case 4:
        v7 = 7;
        break;
      case 5:
        v7 = 10;
        break;
      case 6:
        v7 = 11;
        break;
      default:
        if ( (unsigned __int8)(a5 - 100) > 0x31u )
          v7 = 255;
        else
          v7 = (unsigned __int8)(a5 - 100) + 150;
        break;
    }
    if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(a1, a2, v7, 0LL, 1LL)
      && g_wil_details_pfnFeatureLoggingHook )
    {
      g_wil_details_pfnFeatureLoggingHook(v6, a3, 0LL, 0, (const enum wil_ReportingKind *)&a5, 0LL, 0, 1uLL);
    }
    if ( g_wil_details_queueBackgroundSRUMUsageReporting )
    {
      if ( v7 - 100 <= 0x31 )
        g_wil_details_queueBackgroundSRUMUsageReporting(v6, v7, 1u);
    }
  }
}
