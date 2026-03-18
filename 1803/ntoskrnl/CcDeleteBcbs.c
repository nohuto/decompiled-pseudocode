/*
 * XREFs of CcDeleteBcbs @ 0x14014C85C
 * Callers:
 *     CcDeleteSharedCacheMap @ 0x1400DAF00 (CcDeleteSharedCacheMap.c)
 *     CcSetFileSizesEx @ 0x1400E0340 (CcSetFileSizesEx.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcAdjustVacbLevelLockCount @ 0x1400DABA0 (CcAdjustVacbLevelLockCount.c)
 *     CcDeductDirtyPages @ 0x1400DC394 (CcDeductDirtyPages.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDeallocateBcb @ 0x1400E297C (CcDeallocateBcb.c)
 *     KeSetEvent @ 0x1400FB1C0 (KeSetEvent.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __fastcall CcDeleteBcbs(__int64 a1, __int64 a2)
{
  _QWORD *v3; // r14
  __int64 Partition; // rbp
  _QWORD *v5; // rdi
  _QWORD *v6; // rbx
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  __int64 v9; // rdx
  struct _KEVENT *v10; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v3 = (_QWORD *)(a1 + 16);
  Partition = CcGetPartition((_QWORD *)a1, a2);
  v5 = (_QWORD *)*v3;
  while ( v5 != v3 )
  {
    v6 = v5 - 2;
    v7 = v5;
    v5 = (_QWORD *)*v5;
    if ( *(_WORD *)v6 == 765 )
    {
      if ( *((_DWORD *)v6 + 16) )
        KeBugCheckEx(0x34u, 0xCD6uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
      if ( (_QWORD *)v5[1] != v7 || (v8 = (_QWORD *)v7[1], (_QWORD *)*v8 != v7) )
        __fastfail(3u);
      *v8 = v5;
      v5[1] = v8;
      if ( *(__int64 *)(a1 + 32) > 0x2000000 && (*(_DWORD *)(a1 + 152) & 0x200) != 0 )
        CcAdjustVacbLevelLockCount(a1, v6[1], -1);
      if ( v6[23] )
      {
        v9 = *(_QWORD *)(v6[7] + 8LL);
        if ( !(unsigned __int16)_InterlockedDecrement((volatile signed __int32 *)(v6[7] + 16LL)) )
        {
          v10 = *(struct _KEVENT **)(v9 + 184);
          if ( v10 )
            KeSetEvent(v10, 0, 0);
        }
      }
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
      if ( *((_BYTE *)v6 + 2) )
        CcDeductDirtyPages(a1, *((_DWORD *)v6 + 1) >> 12);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      CcDeallocateBcb((char *)v6);
    }
  }
}
