/*
 * XREFs of CcMdlWriteAbort @ 0x140220CC0
 * Callers:
 *     <none>
 * Callees:
 *     IoFreeMdl @ 0x140041DB0 (IoFreeMdl.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcDecrementOpenCount @ 0x1400DF768 (CcDecrementOpenCount.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MmUnlockPages @ 0x14010FB60 (MmUnlockPages.c)
 */

void __stdcall CcMdlWriteAbort(PFILE_OBJECT FileObject, PMDL MdlChain)
{
  PMDL v2; // rbx
  __int16 v3; // di
  _QWORD *SharedCacheMap; // rbp
  struct _MDL *Next; // rsi
  __int64 v6; // rdx
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
    Partition = CcGetPartition(SharedCacheMap, v6);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
    CcDecrementOpenCount((__int64)SharedCacheMap);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
}
