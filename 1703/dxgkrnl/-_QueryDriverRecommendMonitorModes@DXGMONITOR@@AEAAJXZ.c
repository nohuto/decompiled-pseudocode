/*
 * XREFs of ?_QueryDriverRecommendMonitorModes@DXGMONITOR@@AEAAJXZ @ 0x1C0106FB4
 * Callers:
 *     ?_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z @ 0x1C0108DA4 (-_UpdateEDIDBaseBlock@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@E@Z.c)
 *     ?_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01092BC (-_InitializeMonitor@DXGMONITOR@@AEAAJIPEAU_DEVICE_OBJECT@@EEW4_DMM_VIDPN_MONITOR_TYPE@@PEAV1@PEA.c)
 * Callees:
 *     ?_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z @ 0x1C0003B34 (-_GetMonitorHandle@MONITOR_MGR@@SAPEAUHDXGMONITOR__@@PEAVDXGMONITOR@@@Z.c)
 *     ?_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z @ 0x1C000D2AC (-_GetMonitorFromHandle@MONITOR_MGR@@SAJPEAUHDXGMONITOR__@@PEAPEAVDXGMONITOR@@@Z.c)
 *     ?DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z @ 0x1C0117728 (-DdiRecommendMonitorModes@ADAPTER_DISPLAY@@QEAAJPEAU_DXGKARG_RECOMMENDMONITORMODES@@@Z.c)
 */

__int64 __fastcall DXGMONITOR::_QueryDriverRecommendMonitorModes(
        D3DDDI_VIDEO_PRESENT_TARGET_ID *this,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rdx
  __int64 v6; // rcx
  struct HDXGMONITOR__ *MonitorHandle; // rsi
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  struct DXGMONITOR *v14; // rbx
  ADAPTER_DISPLAY *v15; // rbp
  int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  _DXGKARG_RECOMMENDMONITORMODES v33; // [rsp+20h] [rbp-28h] BYREF
  struct DXGMONITOR *v34; // [rsp+50h] [rbp+8h] BYREF

  if ( !*((_QWORD *)this + 2) )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v21);
  }
  MonitorHandle = MONITOR_MGR::_GetMonitorHandle((struct DXGMONITOR *)this, a2, a3, a4);
  if ( !MonitorHandle )
  {
    v22 = WdLogNewEntry5_WdAssertion(v6, v5, v8, v9);
    WdLogEvent5_WdAssertion(v22);
    v27 = WdLogNewEntry5_WdAssertion(v24, v23, v25, v26);
    WdLogEvent5_WdAssertion(v27);
  }
  v34 = 0LL;
  MONITOR_MGR::_GetMonitorFromHandle(MonitorHandle, &v34, v8, v9);
  v14 = v34;
  if ( !v34 )
  {
    v28 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v28);
  }
  if ( !*((_QWORD *)v14 + 2) )
  {
    v29 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v29);
  }
  if ( !*(_QWORD *)(*((_QWORD *)v14 + 2) + 8LL) )
  {
    v30 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v30);
  }
  v15 = *(ADAPTER_DISPLAY **)(*((_QWORD *)v14 + 2) + 8LL);
  if ( !v15 )
  {
    v31 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
    WdLogEvent5_WdAssertion(v31);
  }
  v33.VideoPresentTargetId = this[7];
  v33.hMonitorSourceModeSet = (D3DKMDT_HMONITORSOURCEMODESET)MonitorHandle;
  v33.pMonitorSourceModeSetInterface = &DXGK_MONITORSOURCEMODESET_INTERFACE_V1_IMPL::DxgMonitorSourceModeSetInterfaceV1;
  v16 = ADAPTER_DISPLAY::DdiRecommendMonitorModes(v15, &v33);
  v19 = v16;
  if ( v16 < 0 )
  {
    v32 = (_QWORD *)WdLogNewEntry5_WdError(v18, v17);
    v32[3] = this;
    v32[4] = this[7];
    v32[5] = *((_QWORD *)v15 + 2);
    v32[6] = v19;
    WdLogEvent5_WdError(v32);
  }
  return (unsigned int)v19;
}
