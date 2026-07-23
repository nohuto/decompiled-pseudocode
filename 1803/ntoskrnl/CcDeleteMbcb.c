/*
 * XREFs of CcDeleteMbcb @ 0x1400BE080
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x1400DAF00 (CcDeleteSharedCacheMap.c)
 *     CcSetFileSizesEx @ 0x1400E0340 (CcSetFileSizesEx.c)
 * Callees:
 *     ExFreeToNPagedLookasideList @ 0x140060D7C (ExFreeToNPagedLookasideList.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcDeductDirtyPages @ 0x1400DC394 (CcDeductDirtyPages.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDeallocateBcb @ 0x1400E297C (CcDeallocateBcb.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeleteMbcb(__int64 a1)
{
  struct _FAST_MUTEX *v2; // r14
  __int64 Partition; // rbx
  unsigned int *v4; // rdi
  unsigned int **v5; // r15
  unsigned int *v6; // rbx
  __int64 v7; // rax
  unsigned int **v8; // rcx
  unsigned int *v9; // rdx
  PVOID v10; // rcx
  PVOID *v11; // rax
  __int64 v12; // rax
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  p_P = &P;
  P = &P;
  v2 = (struct _FAST_MUTEX *)(a1 + 280);
  Partition = CcGetPartition(a1);
  ExAcquireFastMutex(v2);
  v4 = *(unsigned int **)(a1 + 160);
  if ( v4 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDeductDirtyPages(a1, v4[2]);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v5 = (unsigned int **)(v4 + 4);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == (unsigned int *)v5 )
        break;
      v7 = *(_QWORD *)v6;
      if ( *(unsigned int **)(*(_QWORD *)v6 + 8LL) != v6 || (v8 = (unsigned int **)*((_QWORD *)v6 + 1), *v8 != v6) )
        __fastfail(3u);
      *v8 = (unsigned int *)v7;
      *(_QWORD *)(v7 + 8) = v8;
      v9 = (unsigned int *)*((_QWORD *)v6 + 5);
      if ( v9 && v9 != v4 + 24 )
        ExFreeToNPagedLookasideList((PNPAGED_LOOKASIDE_LIST)&CcBitmapLookasideList, v9);
      if ( v6 < v4 || v6 >= v4 + 48 )
      {
        v11 = p_P;
        if ( *p_P != &P )
          __fastfail(3u);
        *((_QWORD *)v6 + 1) = p_P;
        *(_QWORD *)v6 = &P;
        *v11 = v6;
        p_P = (PVOID *)v6;
      }
    }
    *(_QWORD *)(a1 + 160) = 0LL;
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
    while ( 1 )
    {
      v10 = P;
      if ( P == &P )
        break;
      if ( *((PVOID **)P + 1) != &P || (v12 = *(_QWORD *)P, *(PVOID *)(*(_QWORD *)P + 8LL) != P) )
        __fastfail(3u);
      P = *(PVOID *)P;
      *(_QWORD *)(v12 + 8) = &P;
      ExFreePoolWithTag(v10, 0);
    }
    CcDeallocateBcb(v4);
  }
  else
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 280));
  }
}
