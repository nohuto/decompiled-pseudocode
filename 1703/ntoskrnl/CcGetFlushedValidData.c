/*
 * XREFs of CcGetFlushedValidData @ 0x14011C7E0
 * Callers:
 *     CcWriteBehindInternal @ 0x1400AACD0 (CcWriteBehindInternal.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400AB490 (CcDecrementOpenCount.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     CcFindBitmapRangeToClean @ 0x14011BDC0 (CcFindBitmapRangeToClean.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

LARGE_INTEGER __stdcall CcGetFlushedValidData(PSECTION_OBJECT_POINTERS SectionObjectPointer, BOOLEAN BcbListHeld)
{
  char *SharedCacheMap; // rdi
  LARGE_INTEGER v5; // rbx
  __int64 v7; // rcx
  __int64 *BitmapRangeToClean; // rax
  char *v9; // rdx
  __int64 i; // rcx
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  if ( BcbListHeld )
  {
    SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
  }
  else
  {
    KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
    SharedCacheMap = (char *)SectionObjectPointer->SharedCacheMap;
    if ( !SharedCacheMap )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      return (LARGE_INTEGER)0x7FFFFFFFFFFFFFFFLL;
    }
    ++*((_DWORD *)SharedCacheMap + 1);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    ExAcquireFastMutex((PFAST_MUTEX)SharedCacheMap + 5);
  }
  if ( &CcSystemPartition != *((_UNKNOWN **)SharedCacheMap + 66) )
    KeBugCheckEx(0x34u, 0x1CFFuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  v5 = *(LARGE_INTEGER *)(SharedCacheMap + 48);
  if ( *((_DWORD *)SharedCacheMap + 28) )
  {
    v7 = *((_QWORD *)SharedCacheMap + 20);
    if ( v7 && *(_DWORD *)(v7 + 8) )
    {
      BitmapRangeToClean = CcFindBitmapRangeToClean(v7, 0LL);
      v5.QuadPart = (BitmapRangeToClean[2] + *((unsigned int *)BitmapRangeToClean + 6)) << 12;
    }
    v9 = SharedCacheMap + 16;
    for ( i = *((_QWORD *)SharedCacheMap + 2); ; i = *(_QWORD *)(v11 + 16) )
    {
      v11 = i - 16;
      if ( (char *)(v11 + 16) == v9 || *(_WORD *)v11 == 765 && *(_BYTE *)(v11 + 2) )
        break;
    }
    if ( (char *)(v11 + 16) != v9 && *(_QWORD *)(v11 + 8) < v5.QuadPart )
      v5 = *(LARGE_INTEGER *)(v11 + 8);
  }
  if ( !BcbListHeld )
  {
    KeReleaseGuardedMutex((PKGUARDED_MUTEX)SharedCacheMap + 5);
    KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
    CcDecrementOpenCount((__int64)SharedCacheMap, v12, v13);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  return v5;
}
