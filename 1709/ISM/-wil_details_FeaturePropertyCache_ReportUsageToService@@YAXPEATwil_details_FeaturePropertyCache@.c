/*
 * XREFs of ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x18000B894
 * Callers:
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x18000F3B8 (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     ?Initialize@DWMInputRouter@@IEAAJXZ @ 0x18001789C (-Initialize@DWMInputRouter@@IEAAJXZ.c)
 *     ?NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z @ 0x18003E8A4 (-NavigationEnable@ControllerProcessor@@QEAAJIUtagRECT@@UtagPOINT@@_N2@Z.c)
 *     ?ShouldAttachDevice@HeatProcessor@@UEAA_NPEAUDeviceInfo@@@Z @ 0x180047FD0 (-ShouldAttachDevice@HeatProcessor@@UEAA_NPEAUDeviceInfo@@@Z.c)
 *     ?RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@@Z @ 0x180048630 (-RegisterForSystemContext@ISMHeatFrameworkHost@@UEAAJW4HeatSystemContextInputType@@@Z.c)
 *     ?DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z @ 0x18004AF88 (-DownLevelInput@MPCMouseProcessor@@AEAAXPEBUMouseProcessorState@@PEAUInputInfo@@KK_N@Z.c)
 *     ?PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18004B7A0 (-PopulateTargetingData@MPCMouseProcessor@@UEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z.c)
 *     ?Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18004E770 (-Process3DInput@MPCSixDofProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     ?PopulateTargetingData@MPCSixDofProcessor@@EEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@Z @ 0x18004F3F0 (-PopulateTargetingData@MPCSixDofProcessor@@EEAAJPEAUMPCHolographicInputContext@@PEAUInputInfo@@@.c)
 *     ?ComputeControllerPoses@SpatialInteractionController@SpatialInteractionDevices@@AEAAXAEBUSPATIAL_GRAPH_DYNAMIC_NODE_POSE@@0AEBUMatrix4x4@Numerics@Foundation@Windows@@1@Z @ 0x1800C57F0 (-ComputeControllerPoses@SpatialInteractionController@SpatialInteractionDevices@@AEAAXAEBUSPATIAL.c)
 * Callees:
 *     ?wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeaturePropertyCache@@IW4wil_details_ServiceReportingKind@@I_K@Z @ 0x18000B650 (-wil_details_FeaturePropertyCache_ReportUsageToServiceDirect@@YAHPEATwil_details_FeatureProperty.c)
 *     _guard_dispatch_icall_nop @ 0x1800CC390 (_guard_dispatch_icall_nop.c)
 */

void __fastcall wil_details_FeaturePropertyCache_ReportUsageToService(
        volatile signed __int32 *a1,
        unsigned int a2,
        const struct FEATURE_LOGGED_TRAITS *a3,
        int a4,
        int a5)
{
  int v8; // r8d

  if ( a5 )
  {
    switch ( a5 )
    {
      case 1:
        v8 = a4 == 0 ? 4 : 0;
        goto LABEL_17;
      case 2:
        v8 = a4 != 0 ? 1 : 5;
        goto LABEL_17;
      case 3:
        v8 = a4 != 0 ? 2 : 6;
        goto LABEL_17;
      case 4:
        v8 = a4 != 0 ? 3 : 7;
        goto LABEL_17;
      case 5:
        v8 = a4 != 0 ? 8 : 10;
        goto LABEL_17;
      case 6:
        v8 = a4 != 0 ? 9 : 11;
        goto LABEL_17;
    }
    if ( (unsigned __int8)(a5 - 100) <= 0x31u )
    {
      v8 = (unsigned __int8)(a5 - 100) + (a4 != 0 ? 100 : 150);
      goto LABEL_17;
    }
  }
  v8 = 255;
LABEL_17:
  if ( (unsigned int)wil_details_FeaturePropertyCache_ReportUsageToServiceDirect(a1, a2, v8) )
  {
    if ( g_wil_details_pfnFeatureLoggingHook )
      g_wil_details_pfnFeatureLoggingHook(a2, a3, 0LL, a4, (const enum wil_ReportingKind *)&a5, 0LL, 0, 1uLL);
  }
}
