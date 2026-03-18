/*
 * XREFs of CcGetFlushedValidData @ 0x1400F2BA0
 * Callers:
 *     CcWriteBehindInternal @ 0x14008A070 (CcWriteBehindInternal.c)
 * Callees:
 *     CcDecrementOpenCount @ 0x14006365C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeReleaseGuardedMutex @ 0x140082C90 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400842E0 (ExAcquireFastMutex.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmGetControlAreaPartition @ 0x1400F2D5C (MmGetControlAreaPartition.c)
 *     CcFindBitmapRangeToClean @ 0x1400F3A7C (CcFindBitmapRangeToClean.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

LARGE_INTEGER __stdcall CcGetFlushedValidData(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN BcbListHeld)
{
  char *SharedCacheMap; // rdi
  __int64 Partition; // rax
  __int64 v7; // rbp
  LARGE_INTEGER v8; // rbx
  __int64 v9; // rcx
  __int64 BitmapRangeToClean; // rax
  char *v11; // rdx
  __int64 i; // rcx
  __int64 v13; // rcx
  struct _KLOCK_QUEUE_HANDLE v14; // [rsp+30h] [rbp-38h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-20h] BYREF

  if ( BcbListHeld )
  {
    SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
    if ( !SharedCacheMap )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      return (LARGE_INTEGER)0x7FFFFFFFFFFFFFFFLL;
    }
    Partition = CcGetPartition((_QWORD *)SectionObjectPointer->SharedCacheMap);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v14);
    ++*((_DWORD *)SharedCacheMap + 1);
    ++*((_DWORD *)SharedCacheMap + 134);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v14);
    __writecr8(v14.OldIrql);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    ExAcquireFastMutex((PFAST_MUTEX)SharedCacheMap + 5);
  }
  v7 = CcGetPartition(SharedCacheMap);
  if ( *(_QWORD *)(MmGetControlAreaPartition(SectionObjectPointer) + 8) != v7 )
    KeBugCheckEx(0x34u, 0x1D75uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v8 = *(LARGE_INTEGER *)(SharedCacheMap + 48);
  if ( *((_DWORD *)SharedCacheMap + 28) )
  {
    v9 = *((_QWORD *)SharedCacheMap + 20);
    if ( v9 && *(_DWORD *)(v9 + 8) )
    {
      BitmapRangeToClean = CcFindBitmapRangeToClean(v9, 0LL);
      v8.QuadPart = (*(_QWORD *)(BitmapRangeToClean + 16) + *(unsigned int *)(BitmapRangeToClean + 24)) << 12;
    }
    v11 = SharedCacheMap + 16;
    for ( i = *((_QWORD *)SharedCacheMap + 2); ; i = *(_QWORD *)(v13 + 16) )
    {
      v13 = i - 16;
      if ( (char *)(v13 + 16) == v11 || *(_WORD *)v13 == 765 && *(_BYTE *)(v13 + 2) )
        break;
    }
    if ( (char *)(v13 + 16) != v11 && *(_QWORD *)(v13 + 8) < v8.QuadPart )
      v8 = *(LARGE_INTEGER *)(v13 + 8);
  }
  if ( !BcbListHeld )
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)SharedCacheMap + 5);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 128), &v14);
    CcDecrementOpenCount((__int64)SharedCacheMap);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v14);
    __writecr8(v14.OldIrql);
  }
  return v8;
}
