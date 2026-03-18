/*
 * XREFs of IsInternalVideoOutput @ 0x1C00083E4
 * Callers:
 *     DpIndicateChildStatus @ 0x1C0011220 (DpIndicateChildStatus.c)
 *     ?DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z @ 0x1C00B5648 (-DmmGetEmergentSimulatedTarget@@YAJQEAXPEAI@Z.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z @ 0x1C00B626C (-ConvertPathModalityToDisplayConfig@@YAJPEAUD3DKMT_GETPATHSMODALITY@@_N1PEAU_QDC_CONTEXT@@@Z.c)
 *     DpiGdoDispatchInternalIoctl @ 0x1C00B80B0 (DpiGdoDispatchInternalIoctl.c)
 *     DxgkGetAllMonitorDevicesFromSessionView @ 0x1C00B85E8 (DxgkGetAllMonitorDevicesFromSessionView.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00D3870 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     BmlCompareSourceModes @ 0x1C00D4E3C (BmlCompareSourceModes.c)
 *     ?LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z @ 0x1C00D9FF4 (-LoadTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEAVCCD_TOPOLOGY@@@Z.c)
 *     ?SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z @ 0x1C00DA308 (-SaveTopology@TOPOLOGY_SET_DESCRIPTOR@CCD_STORE@@QEAAJPEBVCCD_TOPOLOGY@@_N@Z.c)
 *     ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00DCE00 (-MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION@@@Z @ 0x1C00E2B88 (-UpdateGdiInfoForVidPnSource@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIHPEAU_GDIINFO@@PEAU_DPI_INFORMATION.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0102AA4 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@AEBUMONITORSCOUNT_CALLBACK_CONTEXT@@@Z @ 0x1C01037AC (-GetLaptopSpecialCaseFlags@@YAIAEBVCCD_TOPOLOGY@@AEBU_LUID@@IW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@.c)
 *     DxgkPowerOnOffMonitor @ 0x1C0103C58 (DxgkPowerOnOffMonitor.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0105044 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     DpiPdoHandleChildConnectionChange @ 0x1C0107824 (DpiPdoHandleChildConnectionChange.c)
 *     DpiPdoAddPdo @ 0x1C0107994 (DpiPdoAddPdo.c)
 *     DpiPdoGetDeviceDescriptor @ 0x1C0107E68 (DpiPdoGetDeviceDescriptor.c)
 *     ?_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ @ 0x1C01095B0 (-_CheckPortraitFirstMonitor@DXGMONITOR@@AEAAJXZ.c)
 *     ?_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ @ 0x1C010A5A8 (-_PrepareDefaultMonitorConfiguration@DXGMONITOR@@AEAAXXZ.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C0110304 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 *     DpiFdoEnumChildDevices @ 0x1C011ED3C (DpiFdoEnumChildDevices.c)
 *     DpiFdoCreateChildDescriptor @ 0x1C011F010 (DpiFdoCreateChildDescriptor.c)
 *     ?AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z @ 0x1C012113C (-AddEdid@EDIDCACHE@@QEAAXPEAVDXGADAPTER@@IPEBEW4_D3DKMDT_MONITOR_CAPABILITIES_ORIGIN@@@Z.c)
 *     DpiPdoHandleQueryCapabilities @ 0x1C01213B0 (DpiPdoHandleQueryCapabilities.c)
 *     ?UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z @ 0x1C01D877C (-UpdateGdiInfoForVidPnSource@Win81@@YAJPEBU_DXGDMM_INTERFACE@@QEAXIIHPEAU_DPI_INFORMATION@@@Z.c)
 *     DpiFdoHandleTargetConnectionState @ 0x1C01DE4A4 (DpiFdoHandleTargetConnectionState.c)
 *     ?FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@PEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@2@Z @ 0x1C01F2FB4 (-FindFirstAvailableTarget@DMMVIDPNTOPOLOGY@@QEBAJIW4_D3DKMDT_VIDEO_PRESENT_TARGET_SUBSET_TYPE@@P.c)
 *     ?_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z @ 0x1C01FAFA0 (-_ConstructClone@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_N@Z.c)
 *     ?_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z @ 0x1C01FB08C (-_ConstructDefault@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJAEAI@Z.c)
 *     ?_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA?AW4MultiScreenDefaultShellTopology@@XZ @ 0x1C01FB944 (-_DetermineDefaultTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAA-AW4MultiScreenDefaultShellTopology@@XZ.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FCC38 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     <none>
 */

bool __fastcall IsInternalVideoOutput(int a1)
{
  return a1 == 0x80000000 || a1 == 11 || a1 == 13;
}
