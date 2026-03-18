/*
 * XREFs of CcDeleteBcbs @ 0x14012F610
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x14001FD84 (CcDeleteSharedCacheMap.c)
 *     CcSetFileSizesEx @ 0x140089D90 (CcSetFileSizesEx.c)
 * Callees:
 *     CcDeallocateBcb @ 0x14001ED04 (CcDeallocateBcb.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcDeductDirtyPages @ 0x140066B70 (CcDeductDirtyPages.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcAdjustVacbLevelLockCount @ 0x1400F767C (CcAdjustVacbLevelLockCount.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __fastcall CcDeleteBcbs(__int64 a1)
{
  _QWORD *v2; // r14
  __int64 Partition; // rbp
  _QWORD *v4; // rsi
  _QWORD *v5; // rbx
  _QWORD *v6; // rcx
  _QWORD *v7; // rax
  __int64 v8; // rdx
  struct _KEVENT *v9; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v2 = (_QWORD *)(a1 + 16);
  Partition = CcGetPartition((_QWORD *)a1);
  v4 = (_QWORD *)*v2;
  while ( v4 != v2 )
  {
    v5 = v4 - 2;
    v6 = v4;
    v4 = (_QWORD *)*v4;
    if ( *(_WORD *)v5 == 765 )
    {
      if ( *((_DWORD *)v5 + 16) )
        KeBugCheckEx(0x34u, 0xCCAuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( (_QWORD *)v4[1] != v6 || (v7 = (_QWORD *)v6[1], (_QWORD *)*v7 != v6) )
        __fastfail(3u);
      *v7 = v4;
      v4[1] = v7;
      if ( *(__int64 *)(a1 + 32) > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
        CcAdjustVacbLevelLockCount(a1, v5[1], -1);
      if ( v5[23] )
      {
        v8 = *(_QWORD *)(v5[7] + 8LL);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v5[7] + 16LL)) )
        {
          v9 = *(struct _KEVENT **)(v8 + 184);
          if ( v9 )
            KeSetEvent(v9, 0, 0);
        }
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
      if ( *((_BYTE *)v5 + 2) )
        CcDeductDirtyPages(a1, *((_DWORD *)v5 + 1) >> 12);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      CcDeallocateBcb((char *)v5);
    }
  }
}
