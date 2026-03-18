/*
 * XREFs of ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022C098
 * Callers:
 *     MonitorRemovePhysicalMonitor @ 0x1C022EE88 (MonitorRemovePhysicalMonitor.c)
 * Callees:
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z @ 0x1C0046E04 (-_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00BA738 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022AF74 (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022C658 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C022D100 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemovePhysicalMonitor(
        struct _FAST_MUTEX *this,
        unsigned int a2,
        char a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  char v4; // r15
  __int64 v5; // rdi
  __int64 v8; // rax
  int v9; // r12d
  __int64 v10; // rcx
  int MonitorInstance; // ebp
  __int64 v12; // rax
  DXGMONITOR *v14; // rbx
  __int64 v15; // rax
  __int64 v16; // r14
  _QWORD *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  DXGMONITOR *v20; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  v5 = a2;
  if ( a2 == -1 )
  {
    v8 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v8);
  }
  v20 = 0LL;
  v9 = 0;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v5, 0, &v20);
  if ( MonitorInstance < 0 )
  {
    v12 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v12 + 24) = v5;
    *(_QWORD *)(v12 + 32) = this;
    WdLogEvent5_WdError(v12);
    return (unsigned int)MonitorInstance;
  }
  v14 = v20;
  if ( !v20 )
  {
    v15 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v15);
  }
  v16 = 2LL;
  if ( (*((_DWORD *)v14 + 10) & 2) != 0 )
  {
    DXGMONITOR::_ChangeLIDStatus(v14, 0);
    if ( a3 )
      return 0LL;
  }
  if ( *((_DWORD *)v14 + 108) == 1 )
  {
    MonitorInstance = MONITOR_MGR::_RemoveMonitorFromList((MONITOR_MGR *)this, v14);
  }
  else
  {
    v9 = *((_DWORD *)v14 + 108);
    v17 = (_QWORD *)((char *)v14 + 440);
    v14 = (DXGMONITOR *)*((_QWORD *)v14 + 55);
    *v17 = 0LL;
    if ( !v14 )
    {
      v18 = WdLogNewEntry5_WdError(v10);
      *(_QWORD *)(v18 + 24) = v5;
      *(_QWORD *)(v18 + 32) = this;
      WdLogEvent5_WdError(v18);
      return 3221226021LL;
    }
    v4 = 1;
  }
  if ( MonitorInstance < 0 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( v4 )
  {
    v16 = 3LL;
  }
  else if ( *((_DWORD *)v14 + 145) )
  {
    v16 = 5LL;
    goto LABEL_20;
  }
  if ( !v4 )
LABEL_20:
    v9 = 1;
  MONITOR_MGR::_IssueMonitorEvent(this, *((unsigned int *)v14 + 11), 0LL, v16, v9, a4);
  return MONITOR_MGR::_DestroyPhysicalMonitor((MONITOR_MGR *)this, v14, a4);
}
