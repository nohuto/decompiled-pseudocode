/*
 * XREFs of CcDeleteMbcb @ 0x14011992C
 * Callers:
 *     CcSetFileSizesEx @ 0x1400AA8C0 (CcSetFileSizesEx.c)
 *     CcDeleteSharedCacheMap @ 0x14011AC34 (CcDeleteSharedCacheMap.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     ExFreeToNPagedLookasideList @ 0x140114B0C (ExFreeToNPagedLookasideList.c)
 *     CcDeallocateBcb @ 0x14011B160 (CcDeallocateBcb.c)
 *     CcDeductDirtyPages @ 0x14011BDF4 (CcDeductDirtyPages.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

void __fastcall CcDeleteMbcb(__int64 a1)
{
  __int64 v1; // rbx
  struct _FAST_MUTEX *v2; // r14
  unsigned __int64 v4; // rdi
  PVOID ***v5; // r15
  PVOID **v6; // rbx
  PVOID *v7; // rcx
  PVOID ***v8; // rax
  PVOID *v9; // rdx
  PVOID v10; // rcx
  PVOID *v11; // rax
  PVOID *v12; // rax
  PVOID P; // [rsp+20h] [rbp-30h] BYREF
  PVOID *p_P; // [rsp+28h] [rbp-28h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-20h] BYREF

  v1 = *(_QWORD *)(a1 + 528);
  p_P = &P;
  v2 = (struct _FAST_MUTEX *)(a1 + 280);
  P = &P;
  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 280));
  v4 = *(_QWORD *)(a1 + 160);
  if ( v4 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 64), &LockHandle);
    CcDeductDirtyPages(a1, *(unsigned int *)(v4 + 8));
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    v5 = (PVOID ***)(v4 + 16);
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 == (PVOID **)v5 )
        break;
      v7 = *v6;
      v8 = (PVOID ***)v6[1];
      if ( (*v6)[1] != v6 || *v8 != v6 )
        __fastfail(3u);
      *v8 = (PVOID **)v7;
      v7[1] = v8;
      v9 = v6[5];
      if ( v9 && v9 != (PVOID *)(v4 + 96) )
        ExFreeToNPagedLookasideList(&CcBitmapLookasideList, v9);
      if ( (unsigned __int64)v6 < v4 || (unsigned __int64)v6 >= v4 + 192 )
      {
        v11 = p_P;
        if ( *p_P != &P )
          __fastfail(3u);
        v6[1] = p_P;
        *v6 = &P;
        *v11 = v6;
        p_P = (PVOID *)v6;
      }
    }
    *(_QWORD *)(a1 + 160) = 0LL;
    KeReleaseGuardedMutex(v2);
    while ( 1 )
    {
      v10 = P;
      if ( P == &P )
        break;
      v12 = *(PVOID **)P;
      if ( *((PVOID **)P + 1) != &P || v12[1] != P )
        __fastfail(3u);
      P = *(PVOID *)P;
      v12[1] = &P;
      ExFreePoolWithTag(v10, 0);
    }
    CcDeallocateBcb(v4);
  }
  else
  {
    KeReleaseGuardedMutex(v2);
  }
}
