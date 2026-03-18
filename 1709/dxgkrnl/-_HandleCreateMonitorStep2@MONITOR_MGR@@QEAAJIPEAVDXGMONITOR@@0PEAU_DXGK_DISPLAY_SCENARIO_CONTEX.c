/*
 * XREFs of ?_HandleCreateMonitorStep2@MONITOR_MGR@@QEAAJIPEAVDXGMONITOR@@0PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DBFC
 * Callers:
 *     ?_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010B884 (-_OnMonitorDeviceNodeReady@DXGMONITOR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010DD0C (-_HandleCreatePhysicalMonitor@MONITOR_MGR@@QEAAJIPEAU_DEVICE_OBJECT@@EEPEAU_DXGK_DISPLAY_SCENARI.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FCFEC (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 * Callees:
 *     ?_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ @ 0x1C0036EC4 (-_LeaveMonitorPendingState@MONITOR_MGR@@QEAAXXZ.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B09C0 (-_CleanUpFromSimulatedMonitor@MONITOR_MGR@@QEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C010C118 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D634 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FCFEC (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01FD0A8 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateMonitorStep2(
        struct _FAST_MUTEX *this,
        int a2,
        struct DXGMONITOR *a3,
        struct DXGMONITOR *a4,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a5)
{
  int v5; // ebp
  struct DXGMONITOR *v10; // r14
  bool v11; // r12
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v12; // r15
  unsigned int v13; // ecx
  __int64 v14; // rdx
  __int64 v16; // rax
  __int64 v17; // rax
  int v18; // eax
  __int64 v19; // rax
  struct DXGMONITOR *v20; // [rsp+70h] [rbp+18h] BYREF

  v5 = 0;
  if ( a2 == -1 )
  {
    v16 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v16);
  }
  v10 = 0LL;
  v11 = 0;
  if ( a3 )
  {
    if ( *((_DWORD *)a3 + 7) == a2 )
    {
      v11 = *((_DWORD *)a3 + 104) == 5;
    }
    else
    {
      if ( *((_DWORD *)a3 + 104) != 5 )
      {
        v17 = WdLogNewEntry5_WdAssertion(this);
        WdLogEvent5_WdAssertion(v17);
      }
      v10 = a3;
      a3 = 0LL;
    }
  }
  v12 = a5;
  if ( a4 )
  {
    *((_QWORD *)a4 + 58) = 0LL;
    v13 = a3 ? 3 : *((_BYTE *)a4 + 564) != 0 ? 4 : 1;
    MONITOR_MGR::_IssueMonitorEvent(
      this,
      *((_DWORD *)a4 + 7),
      (*((_DWORD *)a4 + 6) & 0x40) == 0 ? 7 : 0,
      v13,
      *((_DWORD *)a4 + 104),
      (__int64)v12);
    if ( *((_BYTE *)a4 + 456) )
    {
      *((_BYTE *)a4 + 456) = 0;
      MONITOR_MGR::_LeaveMonitorPendingState((MONITOR_MGR *)this);
    }
  }
  if ( a3 )
  {
    if ( *((_DWORD *)a3 + 104) == 1 )
      v18 = MONITOR_MGR::_DestroyPhysicalMonitor((MONITOR_MGR *)this, a3, v12);
    else
      v18 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, a3);
    v5 = v18;
  }
  if ( v10 )
  {
    MONITOR_MGR::_IssueMonitorEvent(this, *((_DWORD *)v10 + 7), 0, 2LL, *((_DWORD *)v10 + 104), (__int64)v12);
    v5 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, v10);
  }
  if ( v5 < 0 )
  {
    v19 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v19 + 32) = v5;
    *(_QWORD *)(v19 + 24) = a3;
    WdLogEvent5_WdError(v19);
  }
  if ( a4 )
  {
    if ( (int)MONITOR_MGR::_GetMonitorInstance(this, *((_DWORD *)a4 + 7), 0, (ULONG **)&v20) >= 0
      && MONITOR_MGR::_UsingCCDNameForTTM
      && v20 == a4 )
    {
      DXGMONITOR::_CreateTtmDevice(a4, v14);
    }
    if ( v11 && (*((_DWORD *)a4 + 6) & 2) != 0 )
      MONITOR_MGR::_CleanUpFromSimulatedMonitor((MONITOR_MGR *)this, v12);
  }
  return 0LL;
}
