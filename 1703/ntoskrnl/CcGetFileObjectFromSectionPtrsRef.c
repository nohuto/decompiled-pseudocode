/*
 * XREFs of CcGetFileObjectFromSectionPtrsRef @ 0x14014A9B0
 * Callers:
 *     <none>
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14004BBF0 (ObfReferenceObjectWithTag.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 */

PFILE_OBJECT __stdcall CcGetFileObjectFromSectionPtrsRef(PSECTION_OBJECT_POINTERS SectionObjectPointer)
{
  struct _FILE_OBJECT *v2; // rdi
  _QWORD *SharedCacheMap; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0LL;
  KeAcquireInStackQueuedSpinLock(&qword_14036F740, &LockHandle);
  SharedCacheMap = SectionObjectPointer->SharedCacheMap;
  if ( SharedCacheMap )
  {
    v2 = (struct _FILE_OBJECT *)(SharedCacheMap[12] & 0xFFFFFFFFFFFFFFF0uLL);
    ObfReferenceObjectWithTag(v2, 0x746C6644u);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  return v2;
}
