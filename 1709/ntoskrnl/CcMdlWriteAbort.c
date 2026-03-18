/*
 * XREFs of CcMdlWriteAbort @ 0x1401E20B0
 * Callers:
 *     <none>
 * Callees:
 *     CcDecrementOpenCount @ 0x14006365C (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmUnlockPages @ 0x140074480 (MmUnlockPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     IoFreeMdl @ 0x1400E6070 (IoFreeMdl.c)
 */

void __stdcall CcMdlWriteAbort(PFILE_OBJECT FileObject, PMDL MdlChain)
{
  PMDL v2; // rbx
  __int16 v3; // di
  _QWORD *SharedCacheMap; // rbp
  struct _MDL *Next; // rsi
  __int64 Partition; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = MdlChain;
  v3 = MdlChain->MdlFlags & 2;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  do
  {
    Next = v2->Next;
    if ( v3 )
      MmUnlockPages(v2);
    IoFreeMdl(v2);
    v2 = Next;
  }
  while ( Next );
  if ( v3 )
  {
    Partition = CcGetPartition(SharedCacheMap);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDecrementOpenCount((__int64)SharedCacheMap);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
}
