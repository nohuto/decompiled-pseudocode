/*
 * XREFs of CcSetParallelFlushFile @ 0x1400DC970
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 */

void __stdcall CcSetParallelFlushFile(PFILE_OBJECT FileObject, BOOLEAN EnableParallelFlush)
{
  _DWORD *SharedCacheMap; // rdi
  unsigned __int8 CurrentIrql; // al
  int v5; // eax
  unsigned int v6; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(CcGetPartition(SharedCacheMap) + 128);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = CurrentIrql;
  KxAcquireQueuedSpinLock(&LockHandle, LockHandle.LockQueue.Lock);
  v5 = SharedCacheMap[38];
  if ( EnableParallelFlush )
    v6 = v5 | 0x40000;
  else
    v6 = v5 & 0xFFFBFFFF;
  SharedCacheMap[38] = v6;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
}
