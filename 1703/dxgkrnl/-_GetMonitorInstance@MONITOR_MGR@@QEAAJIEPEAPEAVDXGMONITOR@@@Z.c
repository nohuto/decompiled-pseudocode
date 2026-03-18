/*
 * XREFs of ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C
 * Callers:
 *     ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008987C (-_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorGetMonitorOrientationsFromTarget @ 0x1C0099B24 (MonitorGetMonitorOrientationsFromTarget.c)
 *     MonitorHandleInternalIOCtrl @ 0x1C00A85BC (MonitorHandleInternalIOCtrl.c)
 *     MonitorIsMonitorConnected @ 0x1C00A9484 (MonitorIsMonitorConnected.c)
 *     MonitorGetEdidBaseBlockPtr @ 0x1C00AB5C0 (MonitorGetEdidBaseBlockPtr.c)
 *     MonitorGetPreferredScaleFactor @ 0x1C00AC06C (MonitorGetPreferredScaleFactor.c)
 *     MonitorGetDeviceObject @ 0x1C00AC2E0 (MonitorGetDeviceObject.c)
 *     MonitorGetMonitorHandle @ 0x1C00AC68C (MonitorGetMonitorHandle.c)
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C00AC7FC (MonitorGetMonitorDeviceInterfaceName.c)
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C00E9A70 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     MonitorGetHDRParamsFromTarget @ 0x1C00F84E4 (MonitorGetHDRParamsFromTarget.c)
 *     MonitorGetLinkInfo @ 0x1C00F8644 (MonitorGetLinkInfo.c)
 *     MonitorGetMonitorEldInformation @ 0x1C0105750 (MonitorGetMonitorEldInformation.c)
 *     MonitorGetNativeFlags @ 0x1C0105B7C (MonitorGetNativeFlags.c)
 *     MonitorGetMonitorDescriptorIDs @ 0x1C0105C74 (MonitorGetMonitorDescriptorIDs.c)
 *     ?_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115624 (-_CreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAPEAVDXGMONITOR@@PEAU_DXGK_DI.c)
 *     ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115778 (-_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEX.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115888 (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C011953C (MonitorCreatePhysicalMonitor.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C011B22C (MonitorNotifyDeviceNodeReady.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C011C7D0 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     ?RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E22A4 (-RebuildMonitorModeListCacheHelper@@YAJPEAVDXGADAPTER@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E2990 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 *     ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E2CE4 (-_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01E2F28 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 *     MonitorDisableMonitorVirtualModeSupport @ 0x1C01E3850 (MonitorDisableMonitorVirtualModeSupport.c)
 *     MonitorEnableDisableAdvancedColor @ 0x1C01E39F4 (MonitorEnableDisableAdvancedColor.c)
 *     MonitorEnableDisableTargetAsHMD @ 0x1C01E3B54 (MonitorEnableDisableTargetAsHMD.c)
 *     MonitorIsAudioSupportedInEdid @ 0x1C01E3DEC (MonitorIsAudioSupportedInEdid.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C01E3F3C (MonitorIsMonitorVirtualModeDisabled.c)
 *     ?GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01E5100 (-GetAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEAIPEAPEAU_DXGK_TARGETMODE_DETAIL_.c)
 *     ?ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIMING@@@Z @ 0x1C01E5640 (-ReleaseAdditionalTiming@DXGK_MONITOR_INTERFACE_V2_IMPL@@KAJQEAXIPEBU_DXGK_TARGETMODE_DETAIL_TIM.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C01E7060 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInstance(struct _FAST_MUTEX *this, __int64 a2, __int64 a3, ULONG **a4)
{
  __int64 v4; // rsi
  char v6; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  ULONG *p_Contention; // rcx
  ULONG *i; // rax
  unsigned int v13; // edi
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax

  v4 = (unsigned int)a2;
  v6 = a3;
  if ( !a4 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this, a2, a3, 0LL);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( (_DWORD)v4 == -1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v17);
  }
  *a4 = 0LL;
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v18 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v18);
  }
  KeAcquireGuardedMutex(this + 3);
  p_Contention = &this[2].Contention;
  for ( i = *(ULONG **)&this[2].Contention; i != p_Contention && i; i = *(ULONG **)i )
  {
    if ( i[7] == (_DWORD)v4 )
    {
      if ( v6 && i[94] != 1 )
        i = (ULONG *)*((_QWORD *)i + 48);
      if ( i )
      {
        *a4 = i;
        v13 = 0;
        goto LABEL_16;
      }
      break;
    }
  }
  v15 = WdLogNewEntry5_WdTrace(p_Contention, v8, v9, v10);
  v13 = -1073741275;
  *(_QWORD *)(v15 + 24) = v4;
  *(_QWORD *)(v15 + 32) = this;
LABEL_16:
  if ( this == (struct _FAST_MUTEX *)-168LL )
  {
    v19 = WdLogNewEntry5_WdAssertion(p_Contention, v8, v9, v10);
    WdLogEvent5_WdAssertion(v19);
  }
  KeReleaseGuardedMutex(this + 3);
  return v13;
}
