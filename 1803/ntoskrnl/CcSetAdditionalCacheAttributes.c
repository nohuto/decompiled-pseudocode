/*
 * XREFs of CcSetAdditionalCacheAttributes @ 0x1400DC480
 * Callers:
 *     CcSetAdditionalCacheAttributesEx @ 0x1400E07F0 (CcSetAdditionalCacheAttributesEx.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     CcGetPartition @ 0x1400E0200 (CcGetPartition.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 */

void __stdcall CcSetAdditionalCacheAttributes(
        PFILE_OBJECT FileObject,
        BOOLEAN DisableReadAhead,
        BOOLEAN DisableWriteBehind)
{
  PSECTION_OBJECT_POINTERS SectionObjectPointer; // rax
  _DWORD *SharedCacheMap; // rbx
  __int64 Partition; // rax
  __int64 v8; // rdx
  int v9; // eax
  unsigned int v10; // eax
  unsigned int v11; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  SectionObjectPointer = FileObject->SectionObjectPointer;
  SharedCacheMap = SectionObjectPointer->SharedCacheMap;
  if ( !SharedCacheMap[1] )
    KeBugCheckEx(0x34u, 0x5FuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  Partition = CcGetPartition(SectionObjectPointer->SharedCacheMap);
  LockHandle.LockQueue.Next = 0LL;
  v8 = Partition + 128;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(Partition + 128);
  LOBYTE(Partition) = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.OldIrql = Partition;
  KxAcquireQueuedSpinLock(&LockHandle, v8);
  v9 = SharedCacheMap[38];
  if ( DisableReadAhead )
    v10 = v9 | 1;
  else
    v10 = v9 & 0xFFFFFFFE;
  SharedCacheMap[38] = v10;
  if ( DisableWriteBehind )
    v11 = v10 | 0x202;
  else
    v11 = v10 & 0xFFFFFFFD;
  SharedCacheMap[38] = v11;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
}
