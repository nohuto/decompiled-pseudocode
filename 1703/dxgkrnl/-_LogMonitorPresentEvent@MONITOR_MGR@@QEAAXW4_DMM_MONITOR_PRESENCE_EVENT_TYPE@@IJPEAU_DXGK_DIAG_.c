/*
 * XREFs of ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00E9DB8
 * Callers:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E9EEC (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 *     ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EA100 (-_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DIS.c)
 *     ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0104D94 (-_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0114FFC (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorCreatePhysicalMonitor @ 0x1C011953C (MonitorCreatePhysicalMonitor.c)
 *     MonitorNotifyDeviceNodeReady @ 0x1C011B22C (MonitorNotifyDeviceNodeReady.c)
 *     ?_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z @ 0x1C011C7D0 (-_HandleMonitorPnPNotification@MONITOR_MGR@@SAJPEAX0@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01E34BC (MonitorCreateSimulatedMonitor.c)
 *     MonitorDestroySimulatedMonitor @ 0x1C01E378C (MonitorDestroySimulatedMonitor.c)
 *     MonitorRemovePhysicalMonitor @ 0x1C01E42D4 (MonitorRemovePhysicalMonitor.c)
 *     ?_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z @ 0x1C01E7060 (-_PnPTargetDeviceChangeNotification@DXGMONITOR@@CAJPEAX0@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0013FB0 (__security_check_cookie.c)
 *     memset @ 0x1C0015700 (memset.c)
 *     DxgkWriteDiagEntry @ 0x1C00F2CA0 (DxgkWriteDiagEntry.c)
 */

__int64 __fastcall MONITOR_MGR::_LogMonitorPresentEvent(__int64 a1, __int64 a2, __int64 a3, __int64 a4, _OWORD *a5)
{
  int v5; // r12d
  unsigned int v6; // r15d
  unsigned int v7; // r14d
  unsigned int v9; // r8d
  __int64 v10; // rbx
  __int128 v11; // xmm1
  __int64 v13; // rax
  __int64 v14; // [rsp+20h] [rbp-61h]
  _OWORD v15[6]; // [rsp+30h] [rbp-51h] BYREF

  v5 = a4;
  v6 = a3;
  v7 = a2;
  if ( (int)a2 > 1073741826 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  v9 = *(_DWORD *)(a1 + 280);
  v10 = 3LL * (v9 % 0x14);
  *(_DWORD *)(a1 + 8 * v10 + 296) = v9;
  *(_DWORD *)(a1 + 8 * v10 + 288) = v7;
  *(_DWORD *)(a1 + 8 * v10 + 292) = v6;
  *(_DWORD *)(a1 + 8 * v10 + 300) = v5;
  v14 = MEMORY[0xFFFFF78000000320];
  *(_QWORD *)(a1 + 8 * v10 + 304) = v14 * KeQueryTimeIncrement();
  ++*(_DWORD *)(a1 + 280);
  memset(v15, 0, sizeof(v15));
  v15[0] = 0x6000000008uLL;
  memset(&v15[1], 0, 28);
  *(_QWORD *)&v15[3] = __PAIR64__(v6, v7);
  DWORD2(v15[3]) = v5;
  if ( a5 )
  {
    v11 = a5[1];
    v15[4] = *a5;
    v15[5] = v11;
  }
  return DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v15);
}
