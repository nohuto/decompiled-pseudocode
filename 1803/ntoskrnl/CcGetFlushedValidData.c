/*
 * XREFs of CcGetFlushedValidData @ 0x14004DC70
 * Callers:
 *     CcWriteBehindInternal @ 0x1400DE8B0 (CcWriteBehindInternal.c)
 * Callees:
 *     MmGetControlAreaPartition @ 0x14004DD2C (MmGetControlAreaPartition.c)
 *     KeReleaseGuardedMutex @ 0x140063F20 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcFindBitmapRangeToClean @ 0x1400C0B68 (CcFindBitmapRangeToClean.c)
 *     CcDecrementOpenCount @ 0x1400DF768 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

LARGE_INTEGER __stdcall CcGetFlushedValidData(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN BcbListHeld)
{
  char *SharedCacheMap; // rdi
  __int64 v5; // rbp
  LARGE_INTEGER v6; // rbx
  __int64 v8; // rcx
  __int64 BitmapRangeToClean; // rax
  _QWORD *v10; // rdx
  _QWORD *i; // rax
  _QWORD *v12; // rcx
  __int64 Partition; // rax
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
    Partition = CcGetPartition(SectionObjectPointer->SharedCacheMap);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &v14);
    ++*((_DWORD *)SharedCacheMap + 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v14);
    __writecr8(v14.OldIrql);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    ExAcquireFastMutex((PFAST_MUTEX)SharedCacheMap + 5);
  }
  v5 = CcGetPartition(SharedCacheMap);
  if ( *(_QWORD *)(MmGetControlAreaPartition(SectionObjectPointer) + 8) != v5 )
    KeBugCheckEx(0x34u, 0x1D64uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v6 = *(LARGE_INTEGER *)(SharedCacheMap + 48);
  if ( *((_DWORD *)SharedCacheMap + 28) )
  {
    v8 = *((_QWORD *)SharedCacheMap + 20);
    if ( v8 && *(_DWORD *)(v8 + 8) )
    {
      BitmapRangeToClean = CcFindBitmapRangeToClean(v8, 0LL);
      v6.QuadPart = (*(_QWORD *)(BitmapRangeToClean + 16) + *(unsigned int *)(BitmapRangeToClean + 24)) << 12;
    }
    v10 = SharedCacheMap + 16;
    for ( i = (_QWORD *)*((_QWORD *)SharedCacheMap + 2); ; i = (_QWORD *)*i )
    {
      v12 = i - 2;
      if ( i == v10 || *(_WORD *)v12 == 765 && *((_BYTE *)v12 + 2) )
        break;
    }
    if ( i != v10 && v12[1] < v6.QuadPart )
      v6 = (LARGE_INTEGER)v12[1];
  }
  if ( !BcbListHeld )
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)SharedCacheMap + 5);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 128), &v14);
    CcDecrementOpenCount(SharedCacheMap);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v14);
    __writecr8(v14.OldIrql);
  }
  return v6;
}
