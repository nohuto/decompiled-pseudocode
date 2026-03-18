/*
 * XREFs of ExpAcquireFastMutexContended @ 0x140007DA0
 * Callers:
 *     KeAcquireGuardedMutex @ 0x140007950 (KeAcquireGuardedMutex.c)
 *     FsRtlCheckOplockEx @ 0x140066340 (FsRtlCheckOplockEx.c)
 *     ExAcquireFastMutexUnsafe @ 0x140068180 (ExAcquireFastMutexUnsafe.c)
 *     FsRtlReleaseEofLock @ 0x14007B940 (FsRtlReleaseEofLock.c)
 *     FsRtlAcquireEofLock @ 0x14007C1F0 (FsRtlAcquireEofLock.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x1400A56E0 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     CcUnpinFileDataEx @ 0x1400E23F0 (CcUnpinFileDataEx.c)
 *     CcSetDirtyPinnedData @ 0x1400E2C90 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x1400E3310 (CcSetDirtyInMask.c)
 *     FsRtlAcquireHeaderMutex @ 0x140103650 (FsRtlAcquireHeaderMutex.c)
 *     ExAcquireFastMutex @ 0x140103930 (ExAcquireFastMutex.c)
 *     CcPinFileData @ 0x14011C510 (CcPinFileData.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 *     CmpDelayDerefKCBWorker @ 0x1404A84A0 (CmpDelayDerefKCBWorker.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404A8840 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpReferenceKeyControlBlock @ 0x14052AA50 (CmpReferenceKeyControlBlock.c)
 * Callees:
 *     KeAbPreWait @ 0x140008A90 (KeAbPreWait.c)
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 */

__int64 __fastcall ExpAcquireFastMutexContended(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  int v2; // ebp
  int v5; // esi
  __int64 result; // rax
  int v7; // ett
  int v8; // ett

  ++*(_DWORD *)(BugCheckParameter2 + 16);
  v2 = 1;
  v5 = 4;
LABEL_2:
  LODWORD(result) = *(_DWORD *)BugCheckParameter2;
  do
  {
    while ( (result & 1) == 0 )
    {
      v8 = result;
      LODWORD(result) = _InterlockedCompareExchange((volatile signed __int32 *)BugCheckParameter2, result + v5, result);
      if ( v8 == (_DWORD)result )
      {
        if ( a2 )
          KeAbPreWait(a2);
        KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 24), WrFastMutex, 0, 0, 0LL);
        _m_prefetchw((const void *)BugCheckParameter2);
        v2 = 3;
        v5 = 2;
        if ( a2 )
          a2 = KeAbPreAcquire(BugCheckParameter2);
        goto LABEL_2;
      }
    }
    v7 = result;
    result = (unsigned int)_InterlockedCompareExchange(
                             (volatile signed __int32 *)BugCheckParameter2,
                             v2 ^ result,
                             result);
  }
  while ( v7 != (_DWORD)result );
  return result;
}
