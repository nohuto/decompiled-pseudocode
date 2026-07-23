/*
 * XREFs of ExpAcquireFastMutexContended @ 0x14011C88C
 * Callers:
 *     ExAcquireFastMutexUnsafe @ 0x140052AB0 (ExAcquireFastMutexUnsafe.c)
 *     CcPinFileData @ 0x14009C5A0 (CcPinFileData.c)
 *     CcSetDirtyInMask @ 0x1400A2DB0 (CcSetDirtyInMask.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     FsRtlCheckOplockEx @ 0x1400FE350 (FsRtlCheckOplockEx.c)
 *     ExEnterCriticalRegionAndAcquireFastMutexUnsafe @ 0x140111DC0 (ExEnterCriticalRegionAndAcquireFastMutexUnsafe.c)
 *     KeAcquireGuardedMutex @ 0x140111ED0 (KeAcquireGuardedMutex.c)
 *     FsRtlAcquireHeaderMutex @ 0x140112010 (FsRtlAcquireHeaderMutex.c)
 *     CcSetDirtyPinnedData @ 0x140118BA0 (CcSetDirtyPinnedData.c)
 *     CcUnpinFileDataEx @ 0x14011A690 (CcUnpinFileDataEx.c)
 *     FsRtlReleaseEofLock @ 0x14011C930 (FsRtlReleaseEofLock.c)
 *     FsRtlAcquireEofLock @ 0x14011D010 (FsRtlAcquireEofLock.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     CmpDelayDerefKCBWorker @ 0x140490BA0 (CmpDelayDerefKCBWorker.c)
 *     CmpFreeKeyControlBlock @ 0x140491410 (CmpFreeKeyControlBlock.c)
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x140506F30 (CmpDeleteKeyObject.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpReferenceKeyControlBlock @ 0x14054CCC0 (CmpReferenceKeyControlBlock.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     KeAbPreWait @ 0x1400FE240 (KeAbPreWait.c)
 */

__int64 __fastcall ExpAcquireFastMutexContended(ULONG_PTR BugCheckParameter2, __int64 Node)
{
  int v2; // ebp
  _RTL_BALANCED_NODE *v3; // rdi
  int v5; // esi
  __int64 result; // rax
  int v7; // ett
  int v8; // ett

  ++*(_DWORD *)(BugCheckParameter2 + 16);
  v2 = 1;
  v3 = (_RTL_BALANCED_NODE *)Node;
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
        if ( v3 )
          KeAbPreWait((__int64)v3, Node);
        KeWaitForSingleObject((PVOID)(BugCheckParameter2 + 24), WrFastMutex, 0, 0, 0LL);
        _m_prefetchw((const void *)BugCheckParameter2);
        v2 = 3;
        v5 = 2;
        if ( v3 )
          v3 = KeAbPreAcquire(BugCheckParameter2, v3, 0);
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
