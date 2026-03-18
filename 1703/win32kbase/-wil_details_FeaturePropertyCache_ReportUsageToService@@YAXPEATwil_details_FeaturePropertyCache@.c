/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00D5B24
 * Callers:
 *     ?EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z @ 0x1C00D59F4 (-EnsureConnected@DispBrokerClient@DispBroker@@AEAAJ_N@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00A20B0 (_guard_dispatch_icall_nop.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C00D5B94 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     ?wil_details_MapReportingKind@@YA?AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z @ 0x1C00D5C5C (-wil_details_MapReportingKind@@YA-AW4wil_details_ServiceReportingKind@@W4wil_ReportingKind@@H@Z.c)
 */

void wil_details_FeaturePropertyCache_ReportUsageToService()
{
  unsigned int v0; // eax
  __int64 v1; // rdx
  __int64 v2; // rcx
  int v3; // [rsp+78h] [rbp+20h] BYREF

  v3 = 3;
  v0 = wil_details_MapReportingKind();
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(v2, v1, v0) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(
        0x7BE415u,
        (const struct FEATURE_LOGGED_TRAITS *)&unk_1C016C41C,
        0LL,
        0,
        (const enum wil_ReportingKind *)&v3,
        0LL,
        0,
        1uLL);
  }
}
