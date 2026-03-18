/*
 * XREFs of ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E9EEC
 * Callers:
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E9980 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorEnableDisableMonitor @ 0x1C01046BC (MonitorEnableDisableMonitor.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E2478 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 * Callees:
 *     memset @ 0x1C0015700 (memset.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00E9DB8 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0104D94 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitor(
        char *a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  int v14; // ebp
  unsigned int v15; // ebp
  unsigned int v16; // ebx
  char v17; // al
  char v18; // si
  __int64 v19; // r8
  __int64 v21; // rax
  _OWORD v22[2]; // [rsp+30h] [rbp-28h] BYREF

  if ( a4 != 8 && a4 != 2 )
    return 3221225485LL;
  memset(v22, 0, sizeof(v22));
  v13 = a1[1] & 1;
  v14 = 2 * (a1[2] & 1);
  DWORD1(v22[0]) = a4;
  *((_QWORD *)&v22[0] + 1) = a5;
  v15 = v22[0] & 0xFFFFFFF0 | a3 & 1 | (2 * (*a1 & 1 | (2 * (v13 | v14))));
  if ( a2 == -1 )
  {
    if ( a4 == 8 )
    {
      v16 = 0;
      a1[1] = a3 == 0;
    }
    else
    {
      if ( a4 != 2 )
      {
        v21 = WdLogNewEntry5_WdAssertion(a5, v10, v11, v12);
        WdLogEvent5_WdAssertion(v21);
      }
      v16 = 0;
      a1[2] = a3 == 0;
    }
    v17 = a1[1];
    if ( v17 || (v18 = 1, a1[2]) )
      v18 = 0;
    LODWORD(v22[0]) = v15 & 0xFFFFFF8F | (16 * (v18 & 1 | (2 * (v17 & 1 | (2 * (a1[2] & 1))))));
    MONITOR_MGR::_LogMonitorPresentEvent((__int64)a1, 14LL, 0xFFFFFFFFLL, 0LL, v22);
    if ( v18 != *a1 )
    {
      LOBYTE(v16) = v18 == 0;
      LOBYTE(v19) = v18;
      v16 = MONITOR_MGR::_EnableDisableMonitorInternal(a1, 0xFFFFFFFFLL, v19, 2LL, (int)v16, a6);
      *a1 = v18;
    }
    return v16;
  }
  else
  {
    LOBYTE(v11) = a3;
    return MONITOR_MGR::_EnableDisableMonitorInternal(a1, a2, v11, a4, a5, a6);
  }
}
