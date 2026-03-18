/*
 * XREFs of CcSetParallelFlushFile @ 0x14008A780
 * Callers:
 *     <none>
 * Callees:
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

void __stdcall CcSetParallelFlushFile(PFILE_OBJECT FileObject, BOOLEAN EnableParallelFlush)
{
  _DWORD *SharedCacheMap; // rdi
  __int64 Partition; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  Partition = CcGetPartition(SharedCacheMap);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  if ( EnableParallelFlush )
    SharedCacheMap[38] |= 0x40000u;
  else
    SharedCacheMap[38] &= ~0x40000u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
}
