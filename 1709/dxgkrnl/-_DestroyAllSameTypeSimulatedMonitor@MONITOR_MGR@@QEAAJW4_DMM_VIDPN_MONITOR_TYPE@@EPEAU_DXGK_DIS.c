/*
 * XREFs of ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B110C
 * Callers:
 *     MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C00F6190 (MonitorDestroyAllSameTypeSimulatedMonitor.c)
 *     MonitorAdapterPowerChange @ 0x1C0101C8C (MonitorAdapterPowerChange.c)
 * Callees:
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00B0DD4 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C010C118 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D634 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C01ED724 (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C01FD0A8 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 */

__int64 __fastcall MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v8; // rcx
  __int64 v9; // rdi
  unsigned int *v10; // rbx
  unsigned int *v11; // r14
  struct DXGMONITOR *v12; // rdi
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // edx
  unsigned int *v19; // rax
  unsigned int **v20; // rcx
  struct DXGMONITOR **v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rcx
  _QWORD *v25; // rax
  bool v26; // zf
  __int64 v27; // rax
  unsigned int v28; // ebx
  int v29; // eax
  struct DXGMONITOR *v30; // [rsp+30h] [rbp-10h] BYREF
  struct DXGMONITOR **v31; // [rsp+38h] [rbp-8h]
  unsigned __int8 v32; // [rsp+78h] [rbp+38h] BYREF

  if ( a2 == 1 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v14);
  }
  v31 = &v30;
  v30 = (struct DXGMONITOR *)&v30;
  if ( a1 == -168 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v15);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  if ( a1 == -168 )
  {
    v16 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v16);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  v9 = a1 + 128;
  v10 = *(unsigned int **)(a1 + 128);
  if ( v10 != (unsigned int *)(a1 + 128) && v10 )
  {
    do
    {
      v11 = *(unsigned int **)v10;
      if ( *(_QWORD *)v10 == v9 )
        v11 = 0LL;
      if ( a2 == v10[104] )
      {
        if ( !a3
          || (v17 = *(_QWORD *)(a1 + 8),
              v18 = v10[7],
              v32 = 0,
              DmmIsTargetInClientVidPnTopology(*(void *const *)(v17 + 16), v18, &v32) >= 0)
          && !v32 )
        {
          v19 = *(unsigned int **)v10;
          if ( *(unsigned int **)(*(_QWORD *)v10 + 8LL) != v10
            || (v20 = (unsigned int **)*((_QWORD *)v10 + 1), *v20 != v10) )
          {
            __fastfail(3u);
          }
          *v20 = v19;
          *((_QWORD *)v19 + 1) = v20;
          v21 = v31;
          if ( *v31 != (struct DXGMONITOR *)&v30 )
            __fastfail(3u);
          *((_QWORD *)v10 + 1) = v31;
          *(_QWORD *)v10 = &v30;
          *v21 = (struct DXGMONITOR *)v10;
          v31 = (struct DXGMONITOR **)v10;
          v22 = *((_QWORD *)v10 + 53);
          if ( v22 )
          {
            if ( *(_DWORD *)(v22 + 416) != 1 )
            {
              v23 = WdLogNewEntry5_WdAssertion(&v30);
              WdLogEvent5_WdAssertion(v23);
            }
            v24 = *(_QWORD *)v9;
            v25 = (_QWORD *)*((_QWORD *)v10 + 53);
            if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
              __fastfail(3u);
            v26 = MONITOR_MGR::_UsingCCDNameForTTM == 0;
            *v25 = v24;
            v25[1] = v9;
            *(_QWORD *)(v24 + 8) = v25;
            *(_QWORD *)v9 = v25;
            if ( !v26 || *((_QWORD *)v10 + 8) )
              DXGMONITOR::_CreateTtmDevice(*((DXGMONITOR **)v10 + 53));
          }
          else
          {
            --*(_DWORD *)(a1 + 120);
          }
        }
      }
      v10 = v11;
    }
    while ( v11 );
  }
  while ( 1 )
  {
    v12 = v30;
    if ( v30 == (struct DXGMONITOR *)&v30 )
      break;
    if ( *((struct DXGMONITOR ***)v30 + 1) != &v30
      || (v27 = *(_QWORD *)v30, *(struct DXGMONITOR **)(*(_QWORD *)v30 + 8LL) != v30) )
    {
      __fastfail(3u);
    }
    v30 = *(struct DXGMONITOR **)v30;
    *(_QWORD *)(v27 + 8) = &v30;
    v28 = *((_DWORD *)v12 + 7);
    MONITOR_MGR::_IssueMonitorEvent(a1, v28, 0LL, 2LL, *((_DWORD *)v12 + 104), a4);
    *((_QWORD *)v12 + 53) = 0LL;
    v29 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)a1, v12);
    MONITOR_MGR::_LogMonitorPresentEvent(a1, 1073741826, v28, v29, 0LL);
  }
  return 0LL;
}
