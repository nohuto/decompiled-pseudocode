/*
 * XREFs of ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C0109620
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C010BEA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010C1DC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C000BB44 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z @ 0x1C00140D4 (-_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z @ 0x1C010630C (-DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_QueryDriverRecommendMonitorModes(D3DDDI_VIDEO_PRESENT_TARGET_ID *this)
{
  __int64 v2; // rcx
  struct HDXGMONITOR__ *MonitorHandle; // rdi
  __int64 v4; // rcx
  struct ADAPTER_DISPLAY *DisplayCoreFromMonitor; // rsi
  __int64 v6; // r8
  int v7; // eax
  __int64 v8; // rcx
  __int64 v9; // rdi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax
  _DXGKARG_RECOMMENDMONITORMODES v15; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_QWORD *)this + 2) )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v11);
  }
  MonitorHandle = MONITOR_MGR::_GetMonitorHandle((struct DXGMONITOR *)this);
  if ( !MonitorHandle )
  {
    v12 = WdLogNewEntry5_WdAssertion(v2);
    WdLogEvent5_WdAssertion(v12);
  }
  DisplayCoreFromMonitor = MONITOR_MGR::_GetDisplayCoreFromMonitor(MonitorHandle);
  if ( !DisplayCoreFromMonitor )
  {
    v13 = WdLogNewEntry5_WdAssertion(v4);
    WdLogEvent5_WdAssertion(v13);
  }
  v15.VideoPresentTargetId = this[7];
  v15.hMonitorSourceModeSet = (D3DKMDT_HMONITORSOURCEMODESET)MonitorHandle;
  v15.pMonitorSourceModeSetInterface = &DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DxgMonitorSourceModeSetInterfaceV1;
  v7 = ADAPTER_DISPLAY::DdiRecommendMonitorModes(DisplayCoreFromMonitor, &v15, v6);
  v9 = v7;
  if ( v7 < 0 )
  {
    v14 = (_QWORD *)WdLogNewEntry5_WdError(v8);
    v14[3] = this;
    v14[4] = this[7];
    v14[5] = *((_QWORD *)DisplayCoreFromMonitor + 2);
    v14[6] = v9;
    WdLogEvent5_WdError(v14);
  }
  return (unsigned int)v9;
}
