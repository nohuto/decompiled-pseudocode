/*
 * XREFs of ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C023B1DC
 * Callers:
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0235FAC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C023BFA0 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 * Callees:
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C0002748 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z @ 0x1C0046EEC (-_GetDisplayCoreFromMonitor@MONITOR_MGR@@SAPEAVADAPTER_DISPLAY@@PEAUHDXGMONITOR__@@@Z.c)
 *     ?DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z @ 0x1C0161128 (-DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_QueryDriverRecommendMonitorModes(D3DDDI_VIDEO_PRESENT_TARGET_ID *this)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  struct HDXGMONITOR__ *MonitorHandle; // rdi
  __int64 v5; // rax
  __int64 v6; // rcx
  struct ADAPTER_DISPLAY *DisplayCoreFromMonitor; // rsi
  __int64 v8; // r8
  __int64 v9; // rax
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdi
  _QWORD *v13; // rax
  _DXGKARG_RECOMMENDMONITORMODES v15; // [rsp+20h] [rbp-28h] BYREF

  if ( !*((_QWORD *)this + 4) )
  {
    v2 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v2);
  }
  MonitorHandle = MONITOR_MGR::_GetMonitorHandle((struct DXGMONITOR *)this);
  if ( !MonitorHandle )
  {
    v5 = WdLogNewEntry5_WdAssertion(v3);
    WdLogEvent5_WdAssertion(v5);
  }
  DisplayCoreFromMonitor = MONITOR_MGR::_GetDisplayCoreFromMonitor(MonitorHandle);
  if ( !DisplayCoreFromMonitor )
  {
    v9 = WdLogNewEntry5_WdAssertion(v6);
    WdLogEvent5_WdAssertion(v9);
  }
  v15.VideoPresentTargetId = this[11];
  v15.hMonitorSourceModeSet = (D3DKMDT_HMONITORSOURCEMODESET)MonitorHandle;
  v15.pMonitorSourceModeSetInterface = &DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DxgMonitorSourceModeSetInterfaceV1;
  v10 = ADAPTER_DISPLAY::DdiRecommendMonitorModes(DisplayCoreFromMonitor, &v15, v8);
  v12 = v10;
  if ( v10 < 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdError(v11);
    v13[3] = this;
    v13[4] = this[11];
    v13[5] = *((_QWORD *)DisplayCoreFromMonitor + 2);
    v13[6] = v12;
    WdLogEvent5_WdError(v13);
  }
  return (unsigned int)v12;
}
