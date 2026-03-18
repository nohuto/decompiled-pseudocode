/*
 * XREFs of ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD4A4
 * Callers:
 *     MonitorRemovePhysicalMonitor @ 0x1C01FE948 (MonitorRemovePhysicalMonitor.c)
 * Callees:
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z @ 0x1C0036DE4 (-_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D634 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C010D958 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FCFEC (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemovePhysicalMonitor(
        struct _FAST_MUTEX *this,
        unsigned int a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  char v4; // r15
  __int64 v5; // rdi
  __int64 v9; // rax
  int v10; // r12d
  __int64 v11; // rcx
  int MonitorInstance; // r14d
  __int64 v13; // rax
  DXGMONITOR *v15; // rbx
  __int64 v16; // rax
  int v17; // ebp
  _QWORD *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // eax
  DXGMONITOR *v22; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  v5 = a2;
  if ( a2 == -1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v9);
  }
  v22 = 0LL;
  v10 = 0;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v5, 0, (ULONG **)&v22);
  if ( MonitorInstance < 0 )
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = v5;
    *(_QWORD *)(v13 + 32) = this;
    WdLogEvent5_WdError(v13);
    return (unsigned int)MonitorInstance;
  }
  v15 = v22;
  if ( !v22 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v16);
  }
  if ( (*((_DWORD *)v15 + 6) & 2) != 0 )
  {
    DXGMONITOR::_ChangeLIDStatus(v15, 0);
    if ( a3 )
      return 0LL;
  }
  v17 = 1;
  if ( *((_DWORD *)v15 + 104) == 1 )
  {
    MonitorInstance = MONITOR_MGR::_RemoveMonitorFromList(this, (struct DXGMONITOR ***)v15);
  }
  else
  {
    v10 = *((_DWORD *)v15 + 104);
    v18 = (_QWORD *)((char *)v15 + 424);
    v15 = (DXGMONITOR *)*((_QWORD *)v15 + 53);
    *v18 = 0LL;
    if ( !v15 )
    {
      v19 = WdLogNewEntry5_WdError(v11);
      *(_QWORD *)(v19 + 24) = v5;
      *(_QWORD *)(v19 + 32) = this;
      WdLogEvent5_WdError(v19);
      return 3221226021LL;
    }
    v4 = 1;
  }
  if ( MonitorInstance < 0 )
  {
    v20 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v20);
  }
  if ( v4 )
  {
    v17 = v10;
    v21 = 3;
  }
  else
  {
    v21 = *((_BYTE *)v15 + 564) != 0 ? 5 : 2;
  }
  MONITOR_MGR::_IssueMonitorEvent(this, *((_DWORD *)v15 + 7), 0, v21, v17, (__int64)a4);
  return MONITOR_MGR::_DestroyPhysicalMonitor(this, v15, a4);
}
