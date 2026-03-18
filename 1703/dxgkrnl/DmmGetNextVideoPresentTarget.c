/*
 * XREFs of DmmGetNextVideoPresentTarget @ 0x1C00E9720
 * Callers:
 *     ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C00E9A70 (-_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@.c)
 *     MonitorRebuildMonitorModeListCache @ 0x1C01E4234 (MonitorRebuildMonitorModeListCache.c)
 * Callees:
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B908 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C000B960 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00152E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DmmGetNextVideoPresentTarget(__int64 a1, __int64 a2, _DWORD *a3)
{
  int v4; // esi
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rbp
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  _QWORD *v15; // rdi
  __int64 v16; // rdi
  unsigned int v17; // r15d
  __int64 v18; // rdi
  __int64 v19; // rcx
  __int64 v20; // rdx
  void (__fastcall ***v21)(_QWORD, __int64); // rcx
  int v22; // ebx
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax

  v4 = a2;
  if ( !a3 )
  {
    v25 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v25 + 24) = 0LL;
    WdLogEvent5_WdError(v25);
    return 3221225485LL;
  }
  *a3 = -1;
  if ( !a1 )
  {
    v26 = WdLogNewEntry5_WdError(0LL, a2);
    *(_QWORD *)(v26 + 24) = 0LL;
    WdLogEvent5_WdError(v26);
    return 3223191554LL;
  }
  if ( KeGetCurrentThread() != *(struct _KTHREAD **)(a1 + 160)
    && !ExIsResourceAcquiredSharedLite(*(PERESOURCE *)(a1 + 144)) )
  {
    v27 = WdLogNewEntry5_WdAssertion(a1, a2, v6, v7);
    WdLogEvent5_WdAssertion(v27);
  }
  v8 = *(_QWORD *)(a1 + 2280);
  if ( !v8 )
  {
    v28 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v28 + 24) = a1;
    WdLogEvent5_WdError(v28);
    return 3223191554LL;
  }
  v9 = *(_QWORD *)(v8 + 88);
  if ( !v9 )
  {
    v29 = WdLogNewEntry5_WdError(a1, a2);
    *(_QWORD *)(v29 + 24) = a1;
    WdLogEvent5_WdError(v29);
    return 3223192373LL;
  }
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(v9 + 40));
  _InterlockedIncrement((volatile signed __int32 *)(*(_QWORD *)(v9 + 80) + 72LL));
  v14 = *(_QWORD *)(v9 + 80);
  if ( v4 != -1 )
  {
    v15 = (_QWORD *)(v14 + 24);
    if ( (_QWORD *)*v15 == v15 )
    {
      v17 = 0;
      v16 = 0LL;
    }
    else
    {
      v16 = *v15 - 8LL;
      if ( !v16 )
      {
        v17 = 0;
LABEL_38:
        v30 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
        WdLogEvent5_WdAssertion(v30);
LABEL_18:
        v19 = *(_QWORD *)(v16 + 8);
        v20 = v19 - 8;
        if ( v19 == v14 + 24 )
          v20 = 0LL;
        goto LABEL_20;
      }
      v17 = 0;
      while ( *(_DWORD *)(v16 + 24) != v4 )
      {
        v18 = *(_QWORD *)(v16 + 8);
        if ( v18 == v14 + 24 )
          v16 = 0LL;
        else
          v16 = v18 - 8;
        if ( !v16 )
          goto LABEL_38;
      }
    }
    if ( v16 )
      goto LABEL_18;
    goto LABEL_38;
  }
  v24 = *(_QWORD *)(v14 + 24);
  v17 = 0;
  if ( v24 == v14 + 24 )
    v20 = 0LL;
  else
    v20 = v24 - 8;
LABEL_20:
  if ( v20 )
    *a3 = *(_DWORD *)(v20 + 24);
  else
    v17 = -1073741275;
  if ( v14 )
  {
    v21 = (void (__fastcall ***)(_QWORD, __int64))(v14 + 64);
    v22 = _InterlockedDecrement((volatile signed __int32 *)(v14 + 72));
    if ( v22 )
    {
      if ( v22 < 0 )
      {
        v31 = WdLogNewEntry5_WdError(v21, v20);
        *(_QWORD *)(v31 + 24) = v22;
        WdLogEvent5_WdError(v31);
      }
    }
    else if ( v21 )
    {
      (**v21)(v21, 1LL);
    }
  }
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(v9 + 40), v20, v12, v13);
  return v17;
}
