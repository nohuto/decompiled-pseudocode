/*
 * XREFs of CcSetAdditionalCacheAttributes @ 0x140115BF0
 * Callers:
 *     CcSetAdditionalCacheAttributesEx @ 0x140115AF0 (CcSetAdditionalCacheAttributesEx.c)
 * Callees:
 *     CcGetPartition @ 0x1400644A0 (CcGetPartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140181290 (KeBugCheckEx.c)
 */

void __stdcall CcSetAdditionalCacheAttributes(
        PFILE_OBJECT FileObject,
        BOOLEAN DisableReadAhead,
        BOOLEAN DisableWriteBehind)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  _DWORD *SharedCacheMap; // rbx
  __int64 Partition; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  SectionObjectPointer = FileObject->SectionObjectPointer;
  SharedCacheMap = SectionObjectPointer->SharedCacheMap;
  if ( !SharedCacheMap[1] )
    KeBugCheckEx(0x34u, 0x5FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  Partition = CcGetPartition((_QWORD *)SectionObjectPointer->SharedCacheMap);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(Partition + 128), &LockHandle);
  if ( DisableReadAhead )
    SharedCacheMap[38] |= 1u;
  else
    SharedCacheMap[38] &= ~1u;
  if ( DisableWriteBehind )
    SharedCacheMap[38] |= 0x202u;
  else
    SharedCacheMap[38] &= ~2u;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
}
