/*
 * XREFs of ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00EA100
 * Callers:
 *     MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C00A2AA0 (MonitorDestroyAllSameTypeSimulatedMonitor.c)
 *     MonitorAdapterPowerChange @ 0x1C0102804 (MonitorAdapterPowerChange.c)
 * Callees:
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00E9DB8 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C01091F8 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115208 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     DmmIsTargetInClientVidPnTopology @ 0x1C01D6464 (DmmIsTargetInClientVidPnTopology.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01E28E8 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v5; // r12
  int v6; // r15d
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  struct DXGMONITOR ***v16; // rbx
  struct DXGMONITOR ***v17; // r14
  struct DXGMONITOR *v18; // rdi
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rdx
  struct DXGMONITOR **v25; // rcx
  struct DXGMONITOR ****v26; // rax
  struct DXGMONITOR **v27; // rax
  struct DXGMONITOR **v28; // rax
  __int64 v29; // rax
  struct DXGMONITOR *v30; // rcx
  struct DXGMONITOR **v31; // rax
  bool v32; // zf
  struct DXGMONITOR *v33; // rax
  unsigned int v34; // ebx
  unsigned int v35; // eax
  struct DXGMONITOR *v36; // [rsp+30h] [rbp-10h] BYREF
  struct DXGMONITOR **v37; // [rsp+38h] [rbp-8h]
  char v38; // [rsp+78h] [rbp+38h] BYREF

  v5 = a3;
  v6 = a2;
  if ( (_DWORD)a2 == 1 )
  {
    v20 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v20);
  }
  v37 = &v36;
  v36 = (struct DXGMONITOR *)&v36;
  if ( a1 == -168 )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v21);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  if ( a1 == -168 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v22);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  v15 = a1 + 128;
  v16 = *(struct DXGMONITOR ****)(a1 + 128);
  if ( v16 != (struct DXGMONITOR ***)(a1 + 128) && v16 )
  {
    do
    {
      v17 = (struct DXGMONITOR ***)*v16;
      if ( *v16 == (struct DXGMONITOR **)v15 )
        v17 = 0LL;
      if ( v6 == *((_DWORD *)v16 + 94) )
      {
        if ( !v5
          || (v23 = *(_QWORD *)(a1 + 8),
              v24 = *((unsigned int *)v16 + 7),
              v38 = 0,
              (int)DmmIsTargetInClientVidPnTopology(*(_QWORD *)(v23 + 16), v24, &v38) >= 0)
          && !v38 )
        {
          v25 = *v16;
          v26 = (struct DXGMONITOR ****)v16[1];
          if ( (*v16)[1] != (struct DXGMONITOR *)v16 || *v26 != v16 )
            __fastfail(3u);
          *v26 = (struct DXGMONITOR ***)v25;
          v25[1] = (struct DXGMONITOR *)v26;
          v27 = v37;
          if ( *v37 != (struct DXGMONITOR *)&v36 )
            __fastfail(3u);
          v16[1] = v37;
          *v16 = &v36;
          *v27 = (struct DXGMONITOR *)v16;
          v37 = (struct DXGMONITOR **)v16;
          v28 = v16[48];
          if ( v28 )
          {
            if ( *((_DWORD *)v28 + 94) != 1 )
            {
              v29 = WdLogNewEntry5_WdAssertion(&v36, v12, v13, v14);
              WdLogEvent5_WdAssertion(v29);
            }
            v30 = *(struct DXGMONITOR **)v15;
            v31 = v16[48];
            if ( *(_QWORD *)(*(_QWORD *)v15 + 8LL) != v15 )
              __fastfail(3u);
            v32 = MONITOR_MGR::_UsingCCDNameForTTM == 0;
            *v31 = v30;
            v31[1] = (struct DXGMONITOR *)v15;
            *((_QWORD *)v30 + 1) = v31;
            *(_QWORD *)v15 = v31;
            if ( !v32 || v16[8] )
              DXGMONITOR::_CreateTtmDevice((DXGMONITOR *)v16[48]);
          }
          else
          {
            --*(_DWORD *)(a1 + 120);
          }
        }
      }
      v16 = v17;
    }
    while ( v17 );
  }
  while ( 1 )
  {
    v18 = v36;
    if ( v36 == (struct DXGMONITOR *)&v36 )
      break;
    v33 = *(struct DXGMONITOR **)v36;
    if ( *((struct DXGMONITOR ***)v36 + 1) != &v36 || *((struct DXGMONITOR **)v33 + 1) != v36 )
      __fastfail(3u);
    v36 = *(struct DXGMONITOR **)v36;
    *((_QWORD *)v33 + 1) = &v36;
    v34 = *((_DWORD *)v18 + 7);
    MONITOR_MGR::_IssueMonitorEvent(a1, v34, 0LL, 2LL, *((_DWORD *)v18 + 94), a4);
    *((_QWORD *)v18 + 48) = 0LL;
    v35 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)a1, v18);
    MONITOR_MGR::_LogMonitorPresentEvent(a1, 1073741826LL, v34, v35, 0LL);
  }
  return 0LL;
}
