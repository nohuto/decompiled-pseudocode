/*
 * XREFs of ?_EnableDisableMonitorInternal@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0104D94
 * Callers:
 *     ?_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C00E9EEC (-_EnableDisableMonitor@MONITOR_MGR@@QEAAJIEW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT.c)
 * Callees:
 *     ?_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z @ 0x1C0045C4C (-_ChangeLIDStatus@DXGMONITOR@@QEAAXE@Z.c)
 *     ?_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_MONITOR_MGR_EXTRA_INFO@@@Z @ 0x1C00E9DB8 (-_LogMonitorPresentEvent@MONITOR_MGR@@QEAAXW4_DMM_MONITOR_PRESENCE_EVENT_TYPE@@IJPEAU_DXGK_DIAG_.c)
 *     ?_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0115208 (-_IssueMonitorEvent@MONITOR_MGR@@QEAAJIW4MONITOR_EVENT@@_KW4_DMM_VIDPN_MONITOR_TYPE@@PEAU_DXGK_D.c)
 */

__int64 __fastcall MONITOR_MGR::_EnableDisableMonitorInternal(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  char v6; // r14
  __int64 v7; // rsi
  unsigned int v8; // r15d
  char v9; // r13
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rax
  struct _ERESOURCE *v28; // r14
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rax
  char v34; // [rsp+78h] [rbp+20h]

  v6 = 0;
  v7 = (unsigned int)a2;
  v34 = 0;
  v8 = a4;
  v9 = a3;
  if ( (unsigned int)(a4 - 1) > 1 )
  {
    v22 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v22);
  }
  if ( a1 == -168 )
  {
    v23 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v23);
  }
  KeAcquireGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  v15 = *(__int64 **)(a1 + 128);
  if ( v15 != (__int64 *)(a1 + 128) && v15 )
  {
    do
    {
      if ( (_DWORD)v7 == -1 || *((_DWORD *)v15 + 7) == (_DWORD)v7 )
      {
        v34 = 1;
        KeEnterCriticalRegion();
        ExAcquireResourceExclusiveLite((PERESOURCE)(v15 + 30), 1u);
        if ( v8 == 1 )
        {
          LOBYTE(v16) = v9;
          DXGMONITOR::_ChangeLIDStatus((DXGMONITOR *)v15, v16, v17, v18);
        }
        else
        {
          *((_DWORD *)v15 + 6) = v15[3] & 0xFFFFFFDF | (v9 == 0 ? 0x20 : 0);
        }
        ExReleaseResourceLite((PERESOURCE)(v15 + 30));
        KeLeaveCriticalRegion();
        if ( *((_DWORD *)v15 + 94) != 1 )
        {
          v24 = v15[48];
          if ( v24 )
          {
            if ( *(_DWORD *)(v24 + 376) != 1 )
            {
              v25 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
              WdLogEvent5_WdAssertion(v25);
            }
            v26 = v15[48];
            if ( !v26 )
            {
              v27 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
              WdLogEvent5_WdAssertion(v27);
            }
            KeEnterCriticalRegion();
            v28 = (struct _ERESOURCE *)(v26 + 240);
            ExAcquireResourceExclusiveLite(v28, 1u);
            if ( v8 == 1 )
            {
              LOBYTE(v29) = v9;
              DXGMONITOR::_ChangeLIDStatus((DXGMONITOR *)v15[48], v29, v30, v31);
            }
            else
            {
              *(_DWORD *)(v15[48] + 24) = *(_DWORD *)(v15[48] + 24) & 0xFFFFFFDF | (v9 == 0 ? 0x20 : 0);
            }
            ExReleaseResourceLite(v28);
            KeLeaveCriticalRegion();
          }
        }
      }
      v15 = (__int64 *)*v15;
    }
    while ( v15 != (__int64 *)(a1 + 128) && v15 );
    v6 = v34;
  }
  if ( a1 == -168 )
  {
    v32 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
    WdLogEvent5_WdAssertion(v32);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 168));
  if ( v6 || (_DWORD)v7 == -1 || v8 == 2 )
  {
    MONITOR_MGR::_IssueMonitorEvent(a1, (unsigned int)v7, v8, a5, 0, a6);
    MONITOR_MGR::_LogMonitorPresentEvent(a1, (unsigned int)(v9 != 0) + 9, (unsigned int)v7, 0LL, 0LL);
  }
  else
  {
    v33 = WdLogNewEntry5_WdError(v20, v19);
    *(_QWORD *)(v33 + 24) = v7;
    *(_QWORD *)(v33 + 32) = a1;
    WdLogEvent5_WdError(v33);
  }
  return 0LL;
}
