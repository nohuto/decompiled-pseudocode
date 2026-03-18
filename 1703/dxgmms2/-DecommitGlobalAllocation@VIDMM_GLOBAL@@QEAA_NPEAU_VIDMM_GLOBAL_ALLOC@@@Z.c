/*
 * XREFs of ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0092834
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005C230 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C00955F4 (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00017C0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0001860 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0014430 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0055AEC (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C0055C08 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0056110 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0059580 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E40C (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

bool __fastcall VIDMM_GLOBAL::DecommitGlobalAllocation(VIDMM_GLOBAL *this, DXGFASTMUTEX **a2)
{
  bool v2; // bl
  __int64 v5; // rdx
  VIDMM_GLOBAL *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rdx
  __int64 v11; // r8
  DXGFASTMUTEX *v12; // rax
  bool v13; // bp
  struct _VIDMM_GLOBAL_ALLOC *i; // rsi
  VIDMM_GLOBAL *v15; // rcx
  __int64 v16; // rax
  char v18; // [rsp+20h] [rbp-78h]
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-58h] BYREF

  v2 = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  DXGFASTMUTEX::Acquire(a2[40]);
  if ( *((_WORD *)a2[65] + 2) == 2 && (*((_DWORD *)a2 + 23) & 2) != 0 )
  {
    if ( a2[17] )
    {
      VIDMM_GLOBAL::MarkGlobalAllocation(this, a2, 0LL, 0LL);
      v18 = 0;
      (*(void (__fastcall **)(DXGFASTMUTEX *, DXGFASTMUTEX **, _QWORD, _QWORD, char, _QWORD))(*(_QWORD *)a2[17] + 48LL))(
        a2[17],
        a2,
        0LL,
        0LL,
        v18,
        0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40], v10, v11);
      VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct _VIDMM_GLOBAL_ALLOC *)a2);
      DXGFASTMUTEX::Acquire(a2[40]);
    }
    else if ( !(unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)a2) )
    {
      v7 = WdLogNewEntry5_WdWarning(v6, v5);
      *(_QWORD *)(v7 + 24) = a2;
      WdLogEvent5_WdWarning(v7);
      goto LABEL_16;
    }
  }
  v12 = a2[65];
  v13 = *((_WORD *)v12 + 2) == 3;
  if ( *((_WORD *)v12 + 2) == 3 )
  {
    for ( i = a2[37]; i != (struct _VIDMM_GLOBAL_ALLOC *)(a2 + 37); i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
    {
      KeStackAttachProcess(**((PRKPROCESS **)i - 6), &ApcState);
      VIDMM_GLOBAL::UncommitLocalBackingStore(v15, (struct _VIDMM_GLOBAL_ALLOC *)((char *)i - 56), 1);
      KeUnstackDetachProcess(&ApcState);
    }
    VIDMM_GLOBAL::UncommitGlobalBackingStore(v6, (struct _VIDMM_GLOBAL_ALLOC *)a2, 0LL);
    v8 = _InterlockedExchangeAdd64(
           (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)a2[13] + 1) + 32LL) + 296LL),
           -(__int64)a2[1]);
  }
  else
  {
    v16 = WdLogNewEntry5_WdWarning(v6, v5);
    *(_QWORD *)(v16 + 24) = a2;
    WdLogEvent5_WdWarning(v16);
  }
  v2 = v13;
LABEL_16:
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40], v8, v9);
  return v2;
}
