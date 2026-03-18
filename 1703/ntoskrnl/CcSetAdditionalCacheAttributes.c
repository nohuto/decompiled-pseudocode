/*
 * XREFs of CcSetAdditionalCacheAttributes @ 0x1400AAC30
 * Callers:
 *     CcSetAdditionalCacheAttributesEx @ 0x1400AAB30 (CcSetAdditionalCacheAttributesEx.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __stdcall CcSetAdditionalCacheAttributes(
        PFILE_OBJECT FileObject,
        BOOLEAN DisableReadAhead,
        BOOLEAN DisableWriteBehind)
{
  _DWORD *SharedCacheMap; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  SharedCacheMap = FileObject->SectionObjectPointer->SharedCacheMap;
  if ( !SharedCacheMap[1] )
    KeBugCheckEx(0x34u, 0x49uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*((_QWORD *)SharedCacheMap + 66) + 64LL), &LockHandle);
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
