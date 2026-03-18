/*
 * XREFs of ?_HandleCreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E2990
 * Callers:
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0114FFC (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01E34BC (MonitorCreateSimulatedMonitor.c)
 * Callees:
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C00E989C (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C01091F8 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z @ 0x1C0114F7C (-_GetEmergencySimulatedMonitor@MONITOR_MGR@@QEAAJPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115208 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01154D8 (-_RemoveMonitorFromList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C0115584 (-_InsertMonitorToList@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z @ 0x1C01E2370 (-_AddTargetIntoPersistencyRegistry@MONITOR_MGR@@QEBAJI@Z.c)
 *     ?_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01E2478 (-_CreateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01E28E8 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3@@Z @ 0x1C01E2F28 (-_MigrateSimulatedMonitor@MONITOR_MGR@@QEAAJIW4_DMM_VIDPN_MONITOR_TYPE@@PEAVDXGMONITOR@@PEAPEAV3.c)
 *     ?_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ @ 0x1C01E6F38 (-_DestroyTtmDevice@DXGMONITOR@@QEAAXXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_HandleCreateSimulatedMonitor(
        struct _FAST_MUTEX *a1,
        __int64 a2,
        __int64 a3,
        struct DXGMONITOR *a4,
        struct DXGMONITOR *a5,
        struct _DXGK_DISPLAY_SCENARIO_CONTEXT *a6)
{
  struct DXGMONITOR *v6; // r12
  struct DXGMONITOR *v7; // rbx
  unsigned int v8; // r14d
  unsigned int v9; // r15d
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  struct DXGMONITOR *v14; // rdi
  int MonitorInstance; // eax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  struct DXGMONITOR *v20; // rbp
  int v21; // r13d
  __int64 v22; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  int EmergencySimulatedMonitor; // eax
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  int v43; // r13d
  struct DXGMONITOR *v44; // rbx
  __int64 v45; // rax
  __int64 v46; // rax
  int v47; // edx
  __int64 v48; // r8
  __int64 v49; // r9
  __int64 v50; // r9
  struct _DXGK_DISPLAY_SCENARIO_CONTEXT *v51; // rbp
  __int64 v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r8
  __int64 v56; // r9
  struct DXGMONITOR *v57; // [rsp+30h] [rbp-38h] BYREF

  v6 = a5;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  if ( !a5 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( v9 == -1 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v12);
  }
  if ( v8 == 1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  a5 = 0LL;
  v14 = 0LL;
  v57 = 0LL;
  MonitorInstance = MONITOR_MGR::_GetMonitorInstance(a1, v9, 0LL, (ULONG **)&a5);
  v20 = a5;
  v21 = MonitorInstance;
  if ( MonitorInstance < 0 )
  {
    if ( a5 )
    {
      v30 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
      WdLogEvent5_WdAssertion(v30);
    }
    if ( v21 != -1073741275 )
    {
      v31 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
      WdLogEvent5_WdAssertion(v31);
    }
    EmergencySimulatedMonitor = MONITOR_MGR::_GetEmergencySimulatedMonitor(a1, &v57, v18, v19);
    if ( EmergencySimulatedMonitor < 0 )
    {
      if ( EmergencySimulatedMonitor != -1073741275 )
      {
        v37 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
        WdLogEvent5_WdAssertion(v37);
      }
      v14 = v57;
      if ( !v57 )
        goto LABEL_30;
    }
    else
    {
      v14 = v57;
      if ( v57 )
        goto LABEL_30;
    }
    v38 = WdLogNewEntry5_WdAssertion(v34, v33, v35, v36);
    WdLogEvent5_WdAssertion(v38);
    goto LABEL_30;
  }
  if ( !a5 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v17, v16, v18, v19);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( v8 == 5 )
    return 3223192973LL;
  if ( *((_DWORD *)v20 + 94) != 1 )
  {
    v26 = MONITOR_MGR::_MigrateSimulatedMonitor(a1, v9, v8, v7, v6);
    if ( v26 >= 0 )
    {
      if ( !*(_QWORD *)v6 )
      {
        v29 = WdLogNewEntry5_WdAssertion(v25, v24, v27, v28);
        WdLogEvent5_WdAssertion(v29);
      }
      MONITOR_MGR::_IssueMonitorEvent(a1, v9, 0LL, (const GUID *)3, v8, (__int64)a6);
    }
    return (unsigned int)v26;
  }
  MONITOR_MGR::_RemoveMonitorFromList(a1, v20, v18, v19);
LABEL_30:
  a5 = 0LL;
  if ( !v7 )
    v7 = v20;
  v43 = MONITOR_MGR::_CreateSimulatedMonitor((__int64)a1, v9, v8, v7, &a5, a6);
  if ( v43 >= 0 )
  {
    v44 = a5;
    if ( !a5 )
    {
      v45 = WdLogNewEntry5_WdAssertion(v40, v39, v41, v42);
      WdLogEvent5_WdAssertion(v45);
    }
    if ( v20 )
    {
      if ( *((_DWORD *)v20 + 94) != 1 )
      {
        v46 = WdLogNewEntry5_WdAssertion(v40, v39, v41, v42);
        WdLogEvent5_WdAssertion(v46);
      }
      *((_DWORD *)v44 + 6) ^= (*((_DWORD *)v20 + 6) ^ *((_DWORD *)v44 + 6)) & 2;
      v47 = *((_DWORD *)v44 + 6) ^ (*((_DWORD *)v20 + 6) ^ *((_DWORD *)v44 + 6)) & 4;
      *((_DWORD *)v44 + 6) = v47;
      *((_DWORD *)v44 + 6) = v47 ^ (*((_DWORD *)v20 + 6) ^ v47) & 0x20;
      *((_QWORD *)v44 + 48) = v20;
      DXGMONITOR::_DestroyTtmDevice(v20);
    }
    if ( v14 )
      MONITOR_MGR::_RemoveMonitorFromList(a1, v14, v41, v42);
    MONITOR_MGR::_InsertMonitorToList(a1, v44, v41, v42);
    if ( v8 == 2 )
      v43 = MONITOR_MGR::_AddTargetIntoPersistencyRegistry((MONITOR_MGR *)a1, v9, v48, v49);
    if ( *((_QWORD *)v44 + 48) )
      v50 = 3LL;
    else
      v50 = *((_BYTE *)v44 + 524) != 0 ? 4LL : 1LL;
    v51 = a6;
    MONITOR_MGR::_IssueMonitorEvent(
      a1,
      *((unsigned int *)v44 + 7),
      (*((_BYTE *)v44 + 24) & 0x40) == 0 ? 7 : 0,
      (const GUID *)v50,
      *((_DWORD *)v44 + 94),
      (__int64)a6);
    if ( v14 )
    {
      MONITOR_MGR::_IssueMonitorEvent(
        a1,
        *((unsigned int *)v14 + 7),
        0LL,
        (const GUID *)2,
        *((_DWORD *)v14 + 94),
        (__int64)v51);
      MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)a1, v14, v55, v56);
    }
    DXGMONITOR::_CreateTtmDevice(v44, v52, v53, v54);
    *(_QWORD *)v6 = v44;
  }
  return (unsigned int)v43;
}
