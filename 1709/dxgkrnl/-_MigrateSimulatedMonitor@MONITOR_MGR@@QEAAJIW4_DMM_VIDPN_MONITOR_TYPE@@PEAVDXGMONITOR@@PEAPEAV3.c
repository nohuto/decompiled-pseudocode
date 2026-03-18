/*
 * XREFs of ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01FD878
 * Callers:
 *     ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01FD150 (-_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEA.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00B08DC (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01FCB30 (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01FCEF8 (-_DeleteTargetFromPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z @ 0x1C0202364 (-_CopyMonitorInformation@DXGMONITOR@@QEAAJPEBV1@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_MigrateSimulatedMonitor(
        struct _FAST_MUTEX *a1,
        unsigned int a2,
        int a3,
        const struct DXGMONITOR *a4,
        struct DXGMONITOR **a5)
{
  __int64 v5; // rbp
  __int64 v7; // rsi
  __int64 v9; // rax
  __int64 v10; // rcx
  int MonitorInstance; // ebx
  struct DXGMONITOR *v12; // rdi
  __int64 v13; // rax
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  struct DXGMONITOR *v19; // [rsp+20h] [rbp-28h] BYREF

  v5 = a3;
  v7 = a2;
  if ( a2 == -1 )
  {
    v9 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v9);
  }
  v19 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(a1, v7, 0, (ULONG **)&v19);
  if ( MonitorInstance < 0 )
    goto LABEL_18;
  v12 = v19;
  if ( !v19 )
  {
    v13 = WdLogNewEntry5_WdAssertion(v10);
    WdLogEvent5_WdAssertion(v13);
  }
  v14 = *((_DWORD *)v12 + 104);
  if ( v14 == 1 )
  {
    v17 = WdLogNewEntry5_WdError(v10);
    *(_QWORD *)(v17 + 24) = v7;
    WdLogEvent5_WdError(v17);
    MonitorInstance = -1073741637;
  }
  else
  {
    if ( v14 == (_DWORD)v5 )
    {
      v15 = WdLogNewEntry5_WdDmmEvent(v10);
      *(_QWORD *)(v15 + 24) = v7;
      *(_QWORD *)(v15 + 32) = v5;
      WdLogEvent5_WdDmmEvent(v15);
      MonitorInstance = 0;
    }
    else
    {
      v16 = WdLogNewEntry5_WdDmmEvent(v10);
      *(_QWORD *)(v16 + 24) = v7;
      *(_QWORD *)(v16 + 32) = v5;
      WdLogEvent5_WdDmmEvent(v16);
      if ( *((_DWORD *)v12 + 104) == 2 )
        MONITOR_MGR::_DeleteTargetFromPersistencyRegistry((MONITOR_MGR *)a1, (unsigned int)v7);
      *((_DWORD *)v12 + 104) = v5;
      if ( (_DWORD)v5 == 2 )
        MONITOR_MGR::_AddTargetIntoPersistencyRegistry((MONITOR_MGR *)a1, (unsigned int)v7);
    }
    if ( a4 )
      MonitorInstance = DXGMONITOR::_CopyMonitorInformation(v12, a4);
  }
  if ( MonitorInstance < 0 )
LABEL_18:
    *a5 = 0LL;
  else
    *a5 = v12;
  return (unsigned int)MonitorInstance;
}
