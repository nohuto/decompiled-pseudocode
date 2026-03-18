/*
 * XREFs of ?_HandleRemoveSimulatedMonitor@MONITOR_MGR@@QEAAJIPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E2CE4
 * Callers:
 *     MonitorDestroySimulatedMonitor @ 0x1C01E378C (MonitorDestroySimulatedMonitor.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C01091F8 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115208 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01154D8 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0115584 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01E2738 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01E28E8 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemoveSimulatedMonitor(
        struct _FAST_MUTEX *this,
        __int64 a2,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a3,
        __int64 a4)
{
  __int64 v4; // rsi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  int MonitorInstance; // ebx
  __int64 v11; // r8
  __int64 v12; // r9
  struct DXGMONITOR *v13; // rbx
  __int64 v14; // rax
  int v15; // ebp
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  struct DXGMONITOR *v33; // [rsp+68h] [rbp+20h] BYREF

  v4 = (unsigned int)a2;
  if ( (_DWORD)a2 == -1 )
  {
    v7 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v7);
  }
  v33 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, (unsigned int)v4, 0LL, (ULONG **)&v33);
  if ( MonitorInstance < 0 )
  {
    if ( v33 )
    {
      v29 = WdLogNewEntry5_WdAssertion(v9, v8, v11, v12);
      WdLogEvent5_WdAssertion(v29);
    }
    if ( MonitorInstance != -1073741275 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v9, v8, v11, v12);
      WdLogEvent5_WdAssertion(v30);
    }
    v31 = WdLogNewEntry5_WdError(v9, v8);
    *(_QWORD *)(v31 + 24) = v4;
    *(_QWORD *)(v31 + 32) = this;
    WdLogEvent5_WdError(v31);
  }
  else
  {
    v13 = v33;
    if ( !v33 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v9, v8, v11, v12);
      WdLogEvent5_WdAssertion(v14);
    }
    v15 = *((_DWORD *)v13 + 94);
    if ( v15 == 1 )
    {
      v16 = WdLogNewEntry5_WdError(v9, v8);
      *(_QWORD *)(v16 + 24) = v4;
      WdLogEvent5_WdError(v16);
      return (unsigned int)-1073741275;
    }
    else
    {
      MONITOR_MGR::_RemoveMonitorFromList(this, v13, v11, v12);
      v21 = *((_QWORD *)v13 + 48);
      if ( v21 )
      {
        if ( *(_DWORD *)(v21 + 376) != 1 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v18, v17, v19, v20);
          WdLogEvent5_WdAssertion(v22);
        }
        MONITOR_MGR::_InsertMonitorToList(this, *((struct DXGMONITOR **)v13 + 48), v19, v20);
        if ( MONITOR_MGR::_UsingCCDNameForTTM || *((_QWORD *)v13 + 8) )
          DXGMONITOR::_CreateTtmDevice(*((DXGMONITOR **)v13 + 48), v23, v24, v25);
      }
      v26 = *((unsigned int *)v13 + 7);
      if ( *((_QWORD *)v13 + 48) )
        MONITOR_MGR::_IssueMonitorEvent(this, v26, 0LL, (const GUID *)3, *((_DWORD *)v13 + 94), (__int64)a3);
      else
        MONITOR_MGR::_IssueMonitorEvent(this, v26, 0LL, (const GUID *)2, v15, (__int64)a3);
      *((_QWORD *)v13 + 48) = 0LL;
      if ( *((_DWORD *)v13 + 94) == 2 )
        MONITOR_MGR::_DeleteTargetFromPersistencyRegistry((MONITOR_MGR *)this, (unsigned int)v4, v27, v28);
      return (unsigned int)MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)this, v13, v27, v28);
    }
  }
  return (unsigned int)MonitorInstance;
}
