/*
 * XREFs of ?DecommitGlobalAllocation@VIDMM_GLOBAL@@QEAA_NPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C009A168
 * Callers:
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005F630 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     ?TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3DKMT_TRIMPROCESSCOMMITMENT_FLAGS@@_KPEA_K@Z @ 0x1C009D790 (-TrimOfferCommitmentInternal@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUDXGDECOMMITITERATOR@@T_D3.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0002440 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00024F4 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0016910 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 *     ?UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z @ 0x1C0058648 (-UncommitLocalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@_N@Z.c)
 *     ?UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1C00587C0 (-UncommitGlobalBackingStore@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z @ 0x1C0058D60 (-MarkGlobalAllocation@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@PEA_K1@Z.c)
 *     ?WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005C818 (-WaitForAllPagingEngines@VIDMM_GLOBAL@@QEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00611B0 (-DiscardOfferedAllocation@VIDMM_GLOBAL@@QEAAHPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 */

bool __fastcall VIDMM_GLOBAL::DecommitGlobalAllocation(VIDMM_GLOBAL *this, DXGFASTMUTEX **a2)
{
  bool v2; // bl
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // rcx
  bool v12; // r15
  struct _VIDMM_GLOBAL_ALLOC *i; // rsi
  __int64 v14; // rax
  struct _KAPC_STATE ApcState; // [rsp+40h] [rbp-68h] BYREF

  v2 = 0;
  if ( g_IsInternalReleaseOrDbg )
    *(_QWORD *)(WdLogNewEntry5_WdTrace(this) + 24) = a2;
  DXGFASTMUTEX::Acquire(a2[40]);
  if ( *((_WORD *)a2[63] + 2) == 2 && (*((_DWORD *)a2 + 23) & 2) != 0 )
  {
    if ( a2[17] )
    {
      VIDMM_GLOBAL::MarkGlobalAllocation(this, a2, 0LL, 0LL);
      (*(void (__fastcall **)(DXGFASTMUTEX *, DXGFASTMUTEX **, _QWORD, _QWORD, _BYTE, _QWORD))(*(_QWORD *)a2[17] + 48LL))(
        a2[17],
        a2,
        0LL,
        0LL,
        0,
        0LL);
      DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40], v9, v10);
      VIDMM_GLOBAL::WaitForAllPagingEngines(this, (struct _VIDMM_GLOBAL_ALLOC *)a2);
      DXGFASTMUTEX::Acquire(a2[40]);
    }
    else if ( !(unsigned int)VIDMM_GLOBAL::DiscardOfferedAllocation(this, (struct _VIDMM_GLOBAL_ALLOC *)a2) )
    {
      v6 = WdLogNewEntry5_WdWarning(v5);
      *(_QWORD *)(v6 + 24) = a2;
      WdLogEvent5_WdWarning(v6);
      goto LABEL_16;
    }
  }
  v11 = *((unsigned __int16 *)a2[63] + 2);
  v12 = (_WORD)v11 == 3;
  if ( (_WORD)v11 == 3 )
  {
    for ( i = a2[37]; i != (struct _VIDMM_GLOBAL_ALLOC *)(a2 + 37); i = *(struct _VIDMM_GLOBAL_ALLOC **)i )
    {
      KeStackAttachProcess(**((PRKPROCESS **)i - 6), &ApcState);
      VIDMM_GLOBAL::UncommitLocalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)((char *)i - 56), 1);
      KeUnstackDetachProcess(&ApcState);
    }
    VIDMM_GLOBAL::UncommitGlobalBackingStore(this, (struct _VIDMM_GLOBAL_ALLOC *)a2, 0);
    v7 = _InterlockedExchangeAdd64(
           (volatile signed __int64 *)(*(_QWORD *)(*((_QWORD *)a2[13] + 1) + 32LL) + 336LL),
           -(__int64)a2[1]);
  }
  else
  {
    v14 = WdLogNewEntry5_WdWarning(v11);
    *(_QWORD *)(v14 + 24) = a2;
    WdLogEvent5_WdWarning(v14);
  }
  v2 = v12;
LABEL_16:
  DXGFASTMUTEX::Release((struct _KTHREAD **)a2[40], v7, v8);
  return v2;
}
