/*
 * XREFs of ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD634
 * Callers:
 *     MonitorDestroySimulatedMonitor @ 0x1C01FE0DC (MonitorDestroySimulatedMonitor.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C010C118 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D634 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C010D958 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C010DA04 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01FCEF8 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01FD0A8 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemoveSimulatedMonitor(
        struct _FAST_MUTEX *this,
        unsigned int a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3)
{
  __int64 v3; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  int MonitorInstance; // ebx
  struct DXGMONITOR *v9; // rbx
  __int64 v10; // rax
  int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  unsigned int v17; // edx
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  struct DXGMONITOR *v22; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  if ( a2 == -1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  v22 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v3, 0, (ULONG **)&v22);
  if ( MonitorInstance < 0 )
  {
    if ( v22 )
    {
      v18 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v18);
    }
    if ( MonitorInstance != -1073741275 )
    {
      v19 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v19);
    }
    v20 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v20 + 24) = v3;
    *(_QWORD *)(v20 + 32) = this;
    WdLogEvent5_WdError(v20);
  }
  else
  {
    v9 = v22;
    if ( !v22 )
    {
      v10 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v10);
    }
    v11 = *((_DWORD *)v9 + 104);
    if ( v11 == 1 )
    {
      v12 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v12 + 24) = v3;
      WdLogEvent5_WdError(v12);
      return (unsigned int)-1073741275;
    }
    else
    {
      MONITOR_MGR::_RemoveMonitorFromList(this, (struct DXGMONITOR ***)v9);
      v14 = *((_QWORD *)v9 + 53);
      if ( v14 )
      {
        if ( *(_DWORD *)(v14 + 416) != 1 )
        {
          v15 = WdLogNewEntry5_WdAssertion(v13);
          WdLogEvent5_WdAssertion(v15);
        }
        MONITOR_MGR::_InsertMonitorToList(this, *((struct DXGMONITOR **)v9 + 53));
        if ( MONITOR_MGR::_UsingCCDNameForTTM || *((_QWORD *)v9 + 8) )
          DXGMONITOR::_CreateTtmDevice(*((DXGMONITOR **)v9 + 53), v16);
      }
      v17 = *((_DWORD *)v9 + 7);
      if ( *((_QWORD *)v9 + 53) )
        MONITOR_MGR::_IssueMonitorEvent(this, v17, 0, 3LL, *((_DWORD *)v9 + 104), (__int64)a3);
      else
        MONITOR_MGR::_IssueMonitorEvent(this, v17, 0, 2LL, v11, (__int64)a3);
      *((_QWORD *)v9 + 53) = 0LL;
      if ( *((_DWORD *)v9 + 104) == 2 )
        MONITOR_MGR::_DeleteTargetFromPersistencyRegistry((MONITOR_MGR *)this, (unsigned int)v3);
      return (unsigned int)MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, v9);
    }
  }
  return (unsigned int)MonitorInstance;
}
