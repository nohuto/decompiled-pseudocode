/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x1C00671C8
 * Callers:
 *     DrvSetDisplayConfig @ 0x1C00662E0 (DrvSetDisplayConfig.c)
 *     ?Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck@@YAHXZ @ 0x1C006719C (-Feature_BrokeredDisplays_ModeChanges__private_IsEnabledPreCheck@@YAHXZ.c)
 *     ?IsSupported@DispBrokerClient@DispBroker@@SA_NXZ @ 0x1C00DC104 (-IsSupported@DispBrokerClient@DispBroker@@SA_NXZ.c)
 *     xxxUserSetDisplayConfig @ 0x1C00DDDC0 (xxxUserSetDisplayConfig.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x1C0067218 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall_nop @ 0x1C00AB7F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        __int64 a1,
        __int64 a2,
        const struct FEATURE_LOGGED_TRAITS *a3)
{
  unsigned int v4; // ebx
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = 3;
  v4 = a2;
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(a1, a2, 6LL) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(v4, a3, 0LL, 0, (const enum wil_ReportingKind *)&v5, 0LL, 0, 1uLL);
  }
}
