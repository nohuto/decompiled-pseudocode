/*
 * XREFs of CcMdlWriteAbort @ 0x1401DE3F0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MmUnlockPages @ 0x1400A1940 (MmUnlockPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcDecrementOpenCount @ 0x1400AB490 (CcDecrementOpenCount.c)
 *     IoFreeMdl @ 0x1401148E0 (IoFreeMdl.c)
 */

void __stdcall CcMdlWriteAbort(PFILE_OBJECT FileObject, PMDL MdlChain)
{
  PMDL v2; // rbx
  _QWORD *SharedCacheMap; // rbp
  bool v4; // di
  __int64 v5; // r14
  struct _MDL *Next; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = MdlChain;
  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  v4 = (MdlChain->MdlFlags & 2) != 0;
  v5 = SharedCacheMap[66];
  do
  {
    Next = v2->Next;
    if ( v4 )
      MmUnlockPages(v2);
    IoFreeMdl(v2);
    v2 = Next;
  }
  while ( Next );
  if ( v4 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 64), &LockHandle);
    CcDecrementOpenCount((__int64)SharedCacheMap, v7, v8);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
}
