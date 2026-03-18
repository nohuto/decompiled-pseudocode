/*
 * XREFs of ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022B0D8
 * Callers:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00BAB80 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z @ 0x1C0046E04 (-_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00BAA4C (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C022C658 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitorInternal(
        __int64 a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  __int64 v6; // rbp
  char v10; // di
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  DXGMONITOR *v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rax
  char v25; // [rsp+78h] [rbp+20h]

  v6 = a2;
  v25 = 0;
  v10 = 0;
  if ( a4 - 1 > 1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( a1 == -168 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v12);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  v14 = *(_QWORD *)(a1 + 128);
  if ( v14 != a1 + 128 )
  {
    v15 = v14 - 16;
    if ( !v14 )
      v15 = 0LL;
    if ( v15 )
    {
      do
      {
        if ( (_DWORD)v6 == -1 || *(_DWORD *)(v15 + 44) == (_DWORD)v6 )
        {
          v25 = 1;
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(v15 + 296), 1u);
          if ( a4 == 1 )
            DXGMONITOR::_ChangeLIDStatus((DXGMONITOR *)v15, a3);
          else
            *(_DWORD *)(v15 + 40) = *(_DWORD *)(v15 + 40) & 0xFFFFFFDF | (a3 == 0 ? 0x20 : 0);
          ExReleaseResourceLite((PERESOURCE)(v15 + 296));
          KeLeaveCriticalRegion();
          if ( *(_DWORD *)(v15 + 432) != 1 )
          {
            v16 = *(_QWORD *)(v15 + 440);
            if ( v16 )
            {
              if ( *(_DWORD *)(v16 + 432) != 1 )
              {
                v17 = WdLogNewEntry5_WdAssertion(v13);
                WdLogEvent5_WdAssertion(v17);
                v16 = *(_QWORD *)(v15 + 440);
              }
              if ( !v16 )
              {
                v18 = WdLogNewEntry5_WdAssertion(v13);
                WdLogEvent5_WdAssertion(v18);
              }
              KeEnterCriticalRegion();
              ExAcquireResourceExclusiveLite((PERESOURCE)(v16 + 296), 1u);
              v19 = *(DXGMONITOR **)(v15 + 440);
              if ( a4 == 1 )
                DXGMONITOR::_ChangeLIDStatus(v19, a3);
              else
                *((_DWORD *)v19 + 10) = *((_DWORD *)v19 + 10) & 0xFFFFFFDF | (a3 == 0 ? 0x20 : 0);
              ExReleaseResourceLite((PERESOURCE)(v16 + 296));
              KeLeaveCriticalRegion();
            }
          }
        }
        v20 = *(_QWORD *)(v15 + 16);
        if ( v20 == a1 + 128 )
          break;
        v15 = v20 - 16;
        if ( !v20 )
          v15 = 0LL;
      }
      while ( v15 );
      v10 = v25;
    }
    else
    {
      v10 = 0;
    }
  }
  if ( a1 == -168 )
  {
    v21 = WdLogNewEntry5_WdAssertion(v13);
    WdLogEvent5_WdAssertion(v21);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  if ( v10 || (_DWORD)v6 == -1 || a4 == 2 )
  {
    MONITOR_MGR::_IssueMonitorEvent(a1, (unsigned int)v6, a4, a5, 0, a6);
    MONITOR_MGR::_LogMonitorPresentEvent(a1, (a3 != 0) + 9, v6, 0, 0LL);
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v22);
    *(_QWORD *)(v23 + 24) = v6;
    *(_QWORD *)(v23 + 32) = a1;
    WdLogEvent5_WdError(v23);
  }
  return 0LL;
}
