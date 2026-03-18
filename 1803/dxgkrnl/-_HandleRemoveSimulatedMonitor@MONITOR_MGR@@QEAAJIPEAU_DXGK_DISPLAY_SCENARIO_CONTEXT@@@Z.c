/*
 * XREFs of ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022C234
 * Callers:
 *     MonitorDestroySimulatedMonitor @ 0x1C022DA54 (MonitorDestroySimulatedMonitor.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C022AE80 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C022B030 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C022C498 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022C658 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C022D100 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C0235898 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
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
  struct DXGMONITOR **v9; // rbx
  __int64 v10; // rax
  unsigned int v11; // ebp
  __int64 v12; // rax
  __int64 v13; // rcx
  struct DXGMONITOR *v14; // rdx
  __int64 v15; // rax
  struct DXGMONITOR *v16; // rax
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  PVOID P; // [rsp+68h] [rbp+20h] BYREF

  v3 = a2;
  if ( a2 == -1 )
  {
    v6 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v6);
  }
  P = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v3, 0, (struct DXGMONITOR **)&P);
  if ( MonitorInstance < 0 )
  {
    if ( P )
    {
      v19 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v19);
    }
    if ( MonitorInstance != -1073741275 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v20);
    }
    v21 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v21 + 24) = v3;
    *(_QWORD *)(v21 + 32) = this;
    WdLogEvent5_WdError(v21);
  }
  else
  {
    v9 = (struct DXGMONITOR **)P;
    if ( !P )
    {
      v10 = WdLogNewEntry5_WdAssertion(v7);
      WdLogEvent5_WdAssertion(v10);
    }
    v11 = *((_DWORD *)v9 + 108);
    if ( v11 == 1 )
    {
      v12 = WdLogNewEntry5_WdError(v7);
      *(_QWORD *)(v12 + 24) = v3;
      WdLogEvent5_WdError(v12);
      return (unsigned int)-1073741275;
    }
    else
    {
      MONITOR_MGR::_RemoveMonitorFromList((MONITOR_MGR *)this, (struct DXGMONITOR *)v9);
      v14 = v9[55];
      if ( v14 )
      {
        if ( *((_DWORD *)v14 + 108) != 1 )
        {
          v15 = WdLogNewEntry5_WdAssertion(v13);
          WdLogEvent5_WdAssertion(v15);
          v14 = v9[55];
        }
        MONITOR_MGR::_InsertMonitorToList((MONITOR_MGR *)this, v14);
        if ( MONITOR_MGR::_UsingCCDNameForTTM || v9[10] )
          DXGMONITOR::_CreateTtmDevice(v9[55]);
      }
      v16 = v9[55];
      if ( v16 )
        v11 = *((_DWORD *)v9 + 108);
      MONITOR_MGR::_IssueMonitorEvent(this, *((unsigned int *)v9 + 11), 0LL, (v16 != 0LL) + 2LL, v11, a3);
      v9[55] = 0LL;
      if ( *((_DWORD *)v9 + 108) == 2 )
        MONITOR_MGR::_DeleteTargetFromPersistencyRegistry((MONITOR_MGR *)this, (unsigned int)v3, v17, v18);
      return (unsigned int)MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, v9);
    }
  }
  return (unsigned int)MonitorInstance;
}
