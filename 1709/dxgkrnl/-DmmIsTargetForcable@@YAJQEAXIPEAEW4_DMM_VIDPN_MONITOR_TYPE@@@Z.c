/*
 * XREFs of ?DmmIsTargetForcable@@YAJQEAXIPEAEW4_DMM_VIDPN_MONITOR_TYPE@@@Z @ 0x1C00B05A0
 * Callers:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C00B0AB0 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     ?_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C010D428 (-_CreateBootPersistentMonitors@MONITOR_MGR@@QEAAJPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z.c)
 *     ?DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C3968 (-DisplayConfigHelperCreateSimulateMonitor@@YAJAEBU_LUID@@IW4_DMM_VIDPN_MONITOR_TYPE@@EPEAEPEAU_D.c)
 *     DxgkHandleForceProjectionMonitor @ 0x1C01C4FE0 (DxgkHandleForceProjectionMonitor.c)
 *     ?_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z @ 0x1C01FA7C4 (-_AddSecondaryPathToTopology@BTL_TOPOLOGY_CONSTRUCTOR@@AEAAJ_NAEBU_LUID@@I@Z.c)
 *     MonitorCreateSimulatedMonitor @ 0x1C01FDE0C (MonitorCreateSimulatedMonitor.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007CC0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0007D10 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0016710 (_guard_dispatch_icall_nop.c)
 *     ?IsTargetForcable@DMMVIDEOPRESENTTARGET@@QEBAEXZ @ 0x1C00B06E0 (-IsTargetForcable@DMMVIDEOPRESENTTARGET@@QEBAEXZ.c)
 */

__int64 __fastcall DmmIsTargetForcable(__int64 a1, unsigned int a2, unsigned __int8 *a3, int a4)
{
  __int64 v4; // rbp
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rdx
  unsigned __int8 IsTargetForcable; // al
  unsigned int v16; // esi
  void (__fastcall ***v17)(_QWORD, __int64); // rcx
  int v18; // ebx
  __int64 v20; // rax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rcx
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax

  v4 = a2;
  *a3 = 0;
  if ( !a1 )
  {
    v20 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v20 + 24) = 0LL;
LABEL_26:
    WdLogEvent5_WdError(v20);
    return 3223191554LL;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    v21 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v21);
  }
  v8 = *(_QWORD *)(a1 + 2304);
  if ( !v8 )
  {
    v20 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v20 + 24) = a1;
    goto LABEL_26;
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( !v9 )
  {
    v22 = WdLogNewEntry5_WdError(a1);
    *(_QWORD *)(v22 + 24) = a1;
    WdLogEvent5_WdError(v22);
    return 3223192373LL;
  }
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v9 + 40));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 80) + 72LL));
  v12 = *(_QWORD *)(v9 + 80);
  v13 = *(_QWORD *)(v12 + 24);
  if ( v13 == v12 + 24 )
  {
    v14 = 0LL;
  }
  else
  {
    v14 = v13 - 8;
    if ( !v14 )
    {
LABEL_28:
      v24 = WdLogNewEntry5_WdWarning(v10, v14, v11);
      *(_QWORD *)(v24 + 24) = v4;
      if ( !*(_QWORD *)(v9 + 8) )
      {
        v25 = WdLogNewEntry5_WdAssertion(v23);
        WdLogEvent5_WdAssertion(v25);
      }
      *(_QWORD *)(v24 + 32) = *(_QWORD *)(*(_QWORD *)(v9 + 8) + 16LL);
      WdLogEvent5_WdWarning(v24);
      v16 = -1071774971;
      goto LABEL_17;
    }
    do
    {
      if ( *(_DWORD *)(v14 + 24) == (_DWORD)v4 )
        break;
      v10 = *(_QWORD *)(v14 + 8);
      v14 = v10 - 8;
      if ( v10 == v12 + 24 )
        v14 = 0LL;
    }
    while ( v14 );
  }
  if ( !v14 )
    goto LABEL_28;
  if ( a4 == 5 )
    IsTargetForcable = *(_QWORD *)(v14 + 104) == 0LL;
  else
    IsTargetForcable = DMMVIDEOPRESENTTARGET::IsTargetForcable((DMMVIDEOPRESENTTARGET *)v14);
  *a3 = IsTargetForcable;
  v16 = 0;
LABEL_17:
  if ( v12 )
  {
    v17 = (void (__fastcall ***)(_QWORD, __int64))(v12 + 64);
    v18 = _InterlockedDecrement((volatile signed __int32 *)(v12 + 72));
    if ( v18 )
    {
      if ( v18 < 0 )
      {
        v26 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v26 + 24) = v18;
        WdLogEvent5_WdError(v26);
      }
    }
    else if ( v17 )
    {
      (**v17)(v17, 1LL);
    }
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v9 + 40));
  return v16;
}
