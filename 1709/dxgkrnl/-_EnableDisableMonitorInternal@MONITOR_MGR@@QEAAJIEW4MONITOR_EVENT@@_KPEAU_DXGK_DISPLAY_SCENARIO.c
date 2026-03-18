/*
 * XREFs of ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0104228
 * Callers:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00B0F08 (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z @ 0x1C0036DE4 (-_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00B0DD4 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D634 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitorInternal(
        __int64 a1,
        unsigned int a2,
        char a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6)
{
  char v6; // r14
  __int64 v7; // rsi
  __int64 v11; // rcx
  __int64 *v12; // rdi
  __int64 v13; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // r14
  __int64 v20; // rax
  struct _ERESOURCE *v21; // r14
  __int64 v22; // rax
  __int64 v23; // rax
  char v24; // [rsp+78h] [rbp+20h]

  v6 = 0;
  v7 = a2;
  v24 = 0;
  if ( a4 - 1 > 1 )
  {
    v15 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v15);
  }
  if ( a1 == -168 )
  {
    v16 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v16);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  v12 = *(__int64 **)(a1 + 128);
  if ( v12 != (__int64 *)(a1 + 128) && v12 )
  {
    do
    {
      if ( (_DWORD)v7 == -1 || *((_DWORD *)v12 + 7) == (_DWORD)v7 )
      {
        v24 = 1;
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(v12 + 35), 1u);
        if ( a4 == 1 )
          DXGMONITOR::_ChangeLIDStatus((DXGMONITOR *)v12, a3);
        else
          *((_DWORD *)v12 + 6) = v12[3] & 0xFFFFFFDF | (a3 == 0 ? 0x20 : 0);
        ExReleaseResourceLite((PERESOURCE)(v12 + 35));
        KeLeaveCriticalRegion();
        if ( *((_DWORD *)v12 + 104) != 1 )
        {
          v17 = v12[53];
          if ( v17 )
          {
            if ( *(_DWORD *)(v17 + 416) != 1 )
            {
              v18 = WdLogNewEntry5_WdAssertion(v11);
              WdLogEvent5_WdAssertion(v18);
            }
            v19 = v12[53];
            if ( !v19 )
            {
              v20 = WdLogNewEntry5_WdAssertion(v11);
              WdLogEvent5_WdAssertion(v20);
            }
            KeEnterCriticalRegion();
            v21 = (struct _ERESOURCE *)(v19 + 280);
            ExAcquireResourceExclusiveLite(v21, 1u);
            if ( a4 == 1 )
              DXGMONITOR::_ChangeLIDStatus((DXGMONITOR *)v12[53], a3);
            else
              *(_DWORD *)(v12[53] + 24) = *(_DWORD *)(v12[53] + 24) & 0xFFFFFFDF | (a3 == 0 ? 0x20 : 0);
            ExReleaseResourceLite(v21);
            KeLeaveCriticalRegion();
          }
        }
      }
      v12 = (__int64 *)*v12;
    }
    while ( v12 != (__int64 *)(a1 + 128) && v12 );
    v6 = v24;
  }
  if ( a1 == -168 )
  {
    v22 = WdLogNewEntry5_WdAssertion(v11);
    WdLogEvent5_WdAssertion(v22);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  if ( v6 || (_DWORD)v7 == -1 || a4 == 2 )
  {
    MONITOR_MGR::_IssueMonitorEvent(a1, (unsigned int)v7, a4, a5, 0, a6);
    MONITOR_MGR::_LogMonitorPresentEvent(a1, (a3 != 0) + 9, v7, 0, 0LL);
  }
  else
  {
    v23 = WdLogNewEntry5_WdError(v13);
    *(_QWORD *)(v23 + 24) = v7;
    *(_QWORD *)(v23 + 32) = a1;
    WdLogEvent5_WdError(v23);
  }
  return 0LL;
}
