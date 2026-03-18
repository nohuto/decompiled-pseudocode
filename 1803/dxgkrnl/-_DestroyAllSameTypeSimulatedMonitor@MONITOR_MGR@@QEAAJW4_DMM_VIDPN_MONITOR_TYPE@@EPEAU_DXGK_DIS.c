/*
 * XREFs of ?_DestroyAllSameTypeSimulatedMonitor@MONITOR_MGR@@QEAAJW4_DMM_VIDPN_MONITOR_TYPE@@EPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BAD34
 * Callers:
 *     MonitorDestroyAllSameTypeSimulatedMonitor @ 0x1C00DBA90 (MonitorDestroyAllSameTypeSimulatedMonitor.c)
 *     MonitorAdapterPowerChange @ 0x1C022D4BC (MonitorAdapterPowerChange.c)
 * Callees:
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00BAA4C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z @ 0x1C0213FCC (-DmmIsTargetInClientVidPnTopology@@YAJQEAXIPEAE@Z.c)
 *     ?_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z @ 0x1C022B030 (-_DestroySimulatedMonitor@MONITOR_MGR@@QEAAJPEAVDXGMONITOR@@@Z.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022C658 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 *     ?_CreateTtmDevice@DXGMONITOR@@QEAAJXZ @ 0x1C0235898 (-_CreateTtmDevice@DXGMONITOR@@QEAAJXZ.c)
 */

__int64 __fastcall MONITOR_MGR::_DestroyAllSameTypeSimulatedMonitor(__int64 a1, int a2, char a3, __int64 a4)
{
  __int64 v4; // r15
  __int64 v8; // rcx
  __int64 v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rbx
  __int64 *v12; // rdi
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 *v15; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 *v22; // rax
  __int64 **v23; // rcx
  __int64 **v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rcx
  _QWORD *v28; // rax
  bool v29; // zf
  __int64 *v30; // rcx
  __int64 *v31; // rdi
  unsigned int v32; // ebx
  int v33; // eax
  __int64 *v34; // [rsp+30h] [rbp-10h] BYREF
  __int64 **v35; // [rsp+38h] [rbp-8h]
  unsigned __int8 v36; // [rsp+88h] [rbp+48h] BYREF
  __int64 v37; // [rsp+98h] [rbp+58h]

  v37 = a4;
  v4 = a4;
  if ( a2 == 1 )
  {
    v17 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v17);
  }
  v35 = &v34;
  v34 = (__int64 *)&v34;
  if ( a1 == -168 )
  {
    v18 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v18);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  if ( a1 == -168 )
  {
    v19 = WdLogNewEntry5_WdAssertion(v8);
    WdLogEvent5_WdAssertion(v19);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  v9 = a1 + 128;
  v10 = *(_QWORD *)(a1 + 128);
  if ( v10 != a1 + 128 )
  {
    v11 = v10 - 16;
    if ( !v10 )
      v11 = 0LL;
    if ( v11 )
    {
      do
      {
        v12 = (__int64 *)(v11 + 16);
        v13 = *(_QWORD *)(v11 + 16);
        if ( v13 == v9 )
        {
          v14 = 0LL;
        }
        else
        {
          v14 = v13 - 16;
          if ( !v13 )
            v14 = 0LL;
        }
        if ( a2 == *(_DWORD *)(v11 + 432) )
        {
          if ( !a3
            || (v20 = *(_QWORD *)(a1 + 8),
                v21 = *(_DWORD *)(v11 + 44),
                v36 = 0,
                DmmIsTargetInClientVidPnTopology(*(void *const *)(v20 + 16), v21, &v36) >= 0)
            && !v36 )
          {
            v22 = (__int64 *)*v12;
            if ( *(__int64 **)(*v12 + 8) != v12 || (v23 = *(__int64 ***)(v11 + 24), *v23 != v12) )
              __fastfail(3u);
            *v23 = v22;
            v22[1] = (__int64)v23;
            v24 = v35;
            if ( *v35 != (__int64 *)&v34 )
              __fastfail(3u);
            *(_QWORD *)(v11 + 24) = v35;
            *v12 = (__int64)&v34;
            *v24 = v12;
            v35 = (__int64 **)(v11 + 16);
            v25 = *(_QWORD *)(v11 + 440);
            if ( v25 )
            {
              if ( *(_DWORD *)(v25 + 432) != 1 )
              {
                v26 = WdLogNewEntry5_WdAssertion(&v34);
                WdLogEvent5_WdAssertion(v26);
                v25 = *(_QWORD *)(v11 + 440);
              }
              v27 = *(_QWORD *)v9;
              v28 = (_QWORD *)(v25 + 16);
              if ( *(_QWORD *)(*(_QWORD *)v9 + 8LL) != v9 )
                __fastfail(3u);
              v29 = MONITOR_MGR::_UsingCCDNameForTTM == 0;
              *v28 = v27;
              v28[1] = v9;
              *(_QWORD *)(v27 + 8) = v28;
              *(_QWORD *)v9 = v28;
              if ( !v29 || *(_QWORD *)(v11 + 80) )
                DXGMONITOR::_CreateTtmDevice(*(DXGMONITOR **)(v11 + 440));
            }
            else
            {
              --*(_DWORD *)(a1 + 120);
            }
          }
        }
        v11 = v14;
      }
      while ( v14 );
      v4 = v37;
    }
  }
  while ( 1 )
  {
    v15 = v34;
    if ( v34 == (__int64 *)&v34 )
      break;
    if ( (__int64 **)v34[1] != &v34 || (v30 = (__int64 *)*v34, *(__int64 **)(*v34 + 8) != v34) )
      __fastfail(3u);
    v31 = v34 - 2;
    v34 = (__int64 *)*v34;
    v30[1] = (__int64)&v34;
    if ( v15 == (__int64 *)16 )
      break;
    v32 = *((_DWORD *)v31 + 11);
    MONITOR_MGR::_IssueMonitorEvent(a1, v32, 0LL, 2LL, *((_DWORD *)v31 + 108), v4);
    v31[55] = 0LL;
    v33 = MONITOR_MGR::_DestroySimulatedMonitor((MONITOR_MGR *)a1, v31);
    MONITOR_MGR::_LogMonitorPresentEvent(a1, 1073741826, v32, v33, 0LL);
  }
  return 0LL;
}
