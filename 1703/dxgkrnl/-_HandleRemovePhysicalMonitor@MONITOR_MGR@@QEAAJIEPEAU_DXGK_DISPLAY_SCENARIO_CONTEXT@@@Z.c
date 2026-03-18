/*
 * XREFs of ?_HandleRemovePhysicalMonitor@MONITOR_MGR@@QEAAJIEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C008987C
 * Callers:
 *     MonitorRemovePhysicalMonitor @ 0x1C01E42D4 (MonitorRemovePhysicalMonitor.c)
 * Callees:
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z @ 0x1C0045C4C (-_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115208 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01154D8 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E282C (-_DestroyPhysicalMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleRemovePhysicalMonitor(
        MONITOR_MGR *this,
        __int64 a2,
        __int64 a3,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a4)
{
  char v4; // r15
  __int64 v5; // rdi
  char v7; // bp
  __int64 v9; // rax
  int v10; // r12d
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int MonitorInstance; // r14d
  __int64 v16; // rax
  DXGMONITOR *v18; // rbx
  __int64 v19; // rax
  int v20; // ebp
  _QWORD *v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // r9
  DXGMONITOR *v25; // [rsp+30h] [rbp-38h] BYREF

  v4 = 0;
  v5 = (unsigned int)a2;
  v7 = a3;
  if ( (_DWORD)a2 == -1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    WdLogEvent5_WdAssertion(v9);
  }
  v25 = 0LL;
  v10 = 0;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v5, 0, &v25);
  if ( MonitorInstance < 0 )
  {
    v16 = WdLogNewEntry5_WdError(v12, v11);
    *(_QWORD *)(v16 + 24) = v5;
    *(_QWORD *)(v16 + 32) = this;
    WdLogEvent5_WdError(v16);
    return (unsigned int)MonitorInstance;
  }
  v18 = v25;
  if ( !v25 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v19);
  }
  if ( (*((_DWORD *)v18 + 6) & 2) != 0 )
  {
    DXGMONITOR::_ChangeLIDStatus(v18, 0LL, v13, v14);
    if ( v7 )
      return 0LL;
  }
  v20 = 1;
  if ( *((_DWORD *)v18 + 94) == 1 )
  {
    MonitorInstance = MONITOR_MGR::_RemoveMonitorFromList(this, v18);
  }
  else
  {
    v10 = *((_DWORD *)v18 + 94);
    v21 = (_QWORD *)((char *)v18 + 384);
    v18 = (DXGMONITOR *)*((_QWORD *)v18 + 48);
    *v21 = 0LL;
    if ( !v18 )
    {
      v22 = WdLogNewEntry5_WdError(v12, v11);
      *(_QWORD *)(v22 + 24) = v5;
      *(_QWORD *)(v22 + 32) = this;
      WdLogEvent5_WdError(v22);
      return 3221226021LL;
    }
    v4 = 1;
  }
  if ( MonitorInstance < 0 )
  {
    v23 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v23);
  }
  v24 = 3LL;
  if ( v4 )
    v20 = v10;
  else
    v24 = (-(__int64)(*((_BYTE *)v18 + 524) != 0) & 3) + 2;
  MONITOR_MGR::_IssueMonitorEvent(this, *((unsigned int *)v18 + 7), 0LL, v24, v20, a4);
  return MONITOR_MGR::_DestroyPhysicalMonitor(this, v18, a4);
}
