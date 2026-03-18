/*
 * XREFs of ExpReleaseFastMutexContended @ 0x140111A5C
 * Callers:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x140011910 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x140052C30 (ExReleaseFastMutexUnsafe.c)
 *     CcZeroEndOfLastPage @ 0x140096990 (CcZeroEndOfLastPage.c)
 *     CcPinFileData @ 0x14009C5A0 (CcPinFileData.c)
 *     CcSetDirtyInMask @ 0x1400A2DB0 (CcSetDirtyInMask.c)
 *     FsRtlReleaseHeaderMutex @ 0x1400EEA90 (FsRtlReleaseHeaderMutex.c)
 *     FsRtlCheckOplockEx @ 0x1400FE350 (FsRtlCheckOplockEx.c)
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
 *     KeSetEventBoostPriorityEx @ 0x140111AC4 (KeSetEventBoostPriorityEx.c)
 */

__int64 __fastcall ExpReleaseFastMutexContended(volatile signed __int32 *a1, signed __int32 a2)
{
  char v3; // cl
  signed __int32 v4; // r8d
  bool v5; // zf
  __int64 result; // rax
  char v7; // [rsp+40h] [rbp+8h] BYREF
  int Priority; // [rsp+48h] [rbp+10h] BYREF

  do
  {
    v3 = 0;
    v4 = a2 + 1;
    if ( (a2 & 2) == 0 )
    {
      v4 = a2 - 1;
      v3 = 1;
    }
    result = (unsigned int)_InterlockedCompareExchange(a1, v4, a2);
    v5 = a2 == (_DWORD)result;
    a2 = result;
  }
  while ( !v5 );
  if ( v3 )
  {
    Priority = KeGetCurrentThread()->Priority;
    return KeSetEventBoostPriorityEx((int)a1 + 24, (unsigned int)&v7, (unsigned int)&Priority, (_DWORD)a1, 1);
  }
  return result;
}
