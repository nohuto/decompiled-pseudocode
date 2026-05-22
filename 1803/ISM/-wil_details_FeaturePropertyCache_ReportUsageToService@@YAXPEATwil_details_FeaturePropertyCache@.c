/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000FE74
 * Callers:
 *     ?HitTest@OneCoreUAPInputHost@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z @ 0x180004590 (-HitTest@OneCoreUAPInputHost@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@@Z.c)
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180013B2C (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ?ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@@@Z @ 0x18001436C (-ProcessInputMessage@Win32kInterop@@AEAAXW4_CannonicalDeviceType@@AEBU_InputMessageNotification@.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x1800331AC (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z.c)
 *     ?ShouldAttachDevice@HeatProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x1800395B0 (-ShouldAttachDevice@HeatProcessor@@UEAA_NPEAUDeviceInfo@@@Z.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x180039C20 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSyst.c)
 *     ?UnregisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSystemContextClient@@@Z @ 0x180039DB0 (-UnregisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@PEAUIHeatSy.c)
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003CC50 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PopulateTargetingData@MPCSixDofProcessor@@EEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18003D9E0 (-PopulateTargetingData@MPCSixDofProcessor@@EEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z @ 0x180080700 (-OnPointerInputDown@DWMInputRouter@@IEAAXIKW4InputType@@PEAUHMONITOR__@@UtagPOINT@@@Z.c)
 *     ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x180097CAC (-DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x1800985D0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18000FC14 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall_nop @ 0x1800E3230 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        volatile signed __int32 *a1,
        unsigned int a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        int a4,
        unsigned int a5)
{
  __int64 v7; // r9
  int v9; // ebx

  v7 = a5;
  switch ( a5 )
  {
    case 0u:
      goto LABEL_16;
    case 1u:
      v9 = a4 == 0 ? 4 : 0;
      goto LABEL_17;
    case 2u:
      v9 = a4 != 0 ? 1 : 5;
      goto LABEL_17;
    case 3u:
      v9 = a4 != 0 ? 2 : 6;
      goto LABEL_17;
    case 4u:
      v9 = a4 != 0 ? 3 : 7;
      goto LABEL_17;
    case 5u:
      v9 = a4 != 0 ? 8 : 10;
      goto LABEL_17;
    case 6u:
      v9 = a4 != 0 ? 9 : 11;
      goto LABEL_17;
  }
  if ( (unsigned __int8)(a5 - 100) > 0x31u )
  {
LABEL_16:
    v9 = 255;
    goto LABEL_17;
  }
  LOBYTE(v7) = a5 - 100;
  v9 = (unsigned __int8)(a5 - 100) + (a4 != 0 ? 100 : 150);
LABEL_17:
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(a1, a2, v9, v7, 1u)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    g_wil_details_pfnFeatureLoggingHook(a2, a3, 0LL, a4, (const enum wil_ReportingKind *)&a5, 0LL, 0, 1uLL);
  }
  if ( g_wil_details_queueBackgroundSRUMUsageReporting && (!v9 || (unsigned int)(v9 - 100) <= 0x31) )
    g_wil_details_queueBackgroundSRUMUsageReporting(a2, v9, 1u);
}
