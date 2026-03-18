/*
 * XREFs of ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC
 * Callers:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C00B0AB0 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     ?DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z @ 0x1C00B11F0 (-DxgkpGetAdapterDeviceDesc@@YAJU_LUID@@IPEAU_DISPLAYCONFIG_GET_DISPLAY_INFO@@@Z.c)
 *     ?_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z @ 0x1C00B2160 (-_FindAnchorAdaptersCallback@_ANCHOR_INFO@BTL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVDXGADAPTER@@PEAX@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00B3084 (IsVirtualizationDisabledForTarget.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00B4080 (DxgkDisplayConfigDeviceInfo.c)
 *     ?SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@PEAVSESSION_VIEW@@QEAXII_N5@Z @ 0x1C00B497C (-SetPointerShapeForDisplaySource@@YAJPEAVDISPLAY_SOURCE@@PEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_D.c)
 *     ?DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z @ 0x1C00B7698 (-DxgkSetPointerPosition@@YAJQEAXPEBU_DXGKARG_SETPOINTERPOSITION@@HH@Z.c)
 *     DpiPdoDispatchInternalIoctl @ 0x1C00B9E40 (DpiPdoDispatchInternalIoctl.c)
 *     DxgkQueryMonitorTypeLockHeld @ 0x1C00BA510 (DxgkQueryMonitorTypeLockHeld.c)
 *     ?DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TECHNOLOGY@@3PEAE4@Z @ 0x1C00D001C (-DmmGetTargetIdFromCcdMonitorId@@YAJQEAXPEBU_UNICODE_STRING@@IPEAIPEAW4_D3DKMDT_VIDEO_OUTPUT_TEC.c)
 *     ?BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSMODALITY@@GGI@Z @ 0x1C00D3870 (-BmlPreparePathOrderAndVidPn@@YAJPEAPEAUBML_VIDPN_PATH_ORDER@@PEAVDMMVIDPN@@PEBUD3DKMT_GETPATHSM.c)
 *     MonitorGetLinkInfo @ 0x1C00D6B34 (MonitorGetLinkInfo.c)
 *     DxgkGetMonitorInternalInfo @ 0x1C00D86D0 (DxgkGetMonitorInternalInfo.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C00E41A0 (MonitorGetMonitorDeviceInterfaceName.c)
 *     MonitorGetPreferredScaleFactor @ 0x1C00E4350 (MonitorGetPreferredScaleFactor.c)
 *     MonitorGetMonitorHandle @ 0x1C00E4564 (MonitorGetMonitorHandle.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00E4B54 (MonitorGetEdidBaseBlockPtr.c)
 *     ?AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_CDSJ@@_N@Z @ 0x1C00E5108 (-AugmentTopology@BTL_CDS_JOURNAL_TOPOLOGY_CONSTRUCTOR@@SAJPEAVCCD_TOPOLOGY@@PEAUD3DKMT_AUGMENT_C.c)
 *     MonitorIsMonitorConnected @ 0x1C00E5FD0 (MonitorIsMonitorConnected.c)
 *     MonitorGetDeviceObject @ 0x1C00F4340 (MonitorGetDeviceObject.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010485C (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C0104ED8 (MonitorCreatePhysicalMonitor.c)
 *     DpiPdoGetDeviceContainerIdFromDescriptor @ 0x1C0105044 (DpiPdoGetDeviceContainerIdFromDescriptor.c)
 *     MonitorGetContainerIDFromDescriptor @ 0x1C010534C (MonitorGetContainerIDFromDescriptor.c)
 *     MonitorGetMonitorDescriptorIDs @ 0x1C01054E0 (MonitorGetMonitorDescriptorIDs.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DAA4 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DBFC (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DD0C (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C011D180 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C0120768 (MonitorNotifyDeviceNodeReady.c)
 *     MonitorGetNativeFlags @ 0x1C01222D4 (MonitorGetNativeFlags.c)
 *     _lambda_36c2ba6a7cba07a048b6de3ef88fdf59_::operator() @ 0x1C01C2DFC (_lambda_36c2ba6a7cba07a048b6de3ef88fdf59_--operator().c)
 *     ?IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z @ 0x1C01D4268 (-IsAudioAvailableInEdid@DpiInternal@@YAHPEAXI@Z.c)
 *     ?_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z @ 0x1C01F9C90 (-_AddExternalPathsToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01FA7C4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     ?_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z @ 0x1C01FC31C (-_ExtendTopology@CDS_JOURNAL@@CAJPEAVCCD_TOPOLOGY@@AEBU_ENTRY@1@@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD150 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD4A4 (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD634 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01FD878 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C01FE1A0 (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorEnableDisableTargetAsHMD @ 0x1C01FE418 (MonitorEnableDisableTargetAsHMD.c)
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01FF760 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01FFCA0 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C0201980 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInstance(struct _FAST_MUTEX *this, unsigned int a2, char a3, ULONG **a4)
{
  __int64 v4; // rsi
  __int64 v8; // rdx
  ULONG *p_Contention; // rcx
  ULONG *i; // rax
  unsigned int v11; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax

  v4 = a2;
  if ( !a4 )
  {
    v14 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v14);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v15);
  }
  *a4 = 0LL;
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v16 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v16);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  for ( i = *(ULONG **)&this[2].Contention; i != p_Contention && i; i = *(ULONG **)i )
  {
    if ( i[7] == (_DWORD)v4 )
    {
      if ( a3 && i[104] != 1 )
        i = (ULONG *)*((_QWORD *)i + 53);
      if ( i )
      {
        *a4 = i;
        v11 = 0;
        goto LABEL_16;
      }
      break;
    }
  }
  v13 = WdLogNewEntry5_WdTrace(p_Contention, v8);
  v11 = -1073741275;
  *(_QWORD *)(v13 + 24) = v4;
  *(_QWORD *)(v13 + 32) = this;
LABEL_16:
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v17 = WdLogNewEntry5_WdAssertion(p_Contention);
    WdLogEvent5_WdAssertion(v17);
  }
  KeReleaseGuardedMutex(this + 3);
  return v11;
}
