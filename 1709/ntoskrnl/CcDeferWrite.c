/*
 * XREFs of CcDeferWrite @ 0x1401E08A0
 * Callers:
 *     <none>
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x14001E568 (CcScheduleLazyWriteScan.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcDereferencePartition @ 0x1400670D4 (CcDereferencePartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExInterlockedInsertHeadList @ 0x1401158E0 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x140115950 (ExInterlockedInsertTailList.c)
 *     CcGetPartitionFromFileObject @ 0x14011ED14 (CcGetPartitionFromFileObject.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 *     CcPostDeferredWrites @ 0x1401E0A50 (CcPostDeferredWrites.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

void __stdcall CcDeferWrite(
        PFILE_OBJECT FileObject,
        PCC_POST_DEFERRED_WRITE PostRoutine,
        PVOID Context1,
        PVOID Context2,
        ULONG BytesToWrite,
        BOOLEAN Retrying)
{
  char *PoolWithTag; // rdi
  __int64 PartitionFromFileObject; // rbx
  KSPIN_LOCK *v12; // r8
  _LIST_ENTRY *v13; // rdx
  _LIST_ENTRY *v14; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v16; // [rsp+38h] [rbp-30h] BYREF

  PoolWithTag = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x50uLL, 0x77446343u);
  if ( PoolWithTag )
  {
    KeAcquireInStackQueuedSpinLock(&CcMasterLock, &LockHandle);
    PartitionFromFileObject = CcGetPartitionFromFileObject((__int64)FileObject);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(PartitionFromFileObject + 904)) <= 1 )
      __fastfail(0xEu);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( _InterlockedIncrement64((volatile signed __int64 *)(PartitionFromFileObject + 904)) <= 1 )
      __fastfail(0xEu);
    *((_QWORD *)PoolWithTag + 5) = 0LL;
    v12 = (KSPIN_LOCK *)(PartitionFromFileObject + 768);
    v13 = (_LIST_ENTRY *)(PoolWithTag + 24);
    v14 = (_LIST_ENTRY *)(PartitionFromFileObject + 744);
    *((_QWORD *)PoolWithTag + 9) = PartitionFromFileObject;
    *(_DWORD *)PoolWithTag = 5243644;
    *((_QWORD *)PoolWithTag + 1) = FileObject;
    *((_DWORD *)PoolWithTag + 4) = BytesToWrite;
    *((_QWORD *)PoolWithTag + 6) = PostRoutine;
    *((_QWORD *)PoolWithTag + 7) = Context1;
    *((_QWORD *)PoolWithTag + 8) = Context2;
    if ( Retrying )
      ExInterlockedInsertHeadList(v14, v13, v12);
    else
      ExInterlockedInsertTailList(v14, v13, v12);
    CcPostDeferredWrites(PartitionFromFileObject);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(PartitionFromFileObject + 128), &v16);
    CcScheduleLazyWriteScan(PartitionFromFileObject, 1, 0);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v16);
    __writecr8(v16.OldIrql);
    CcDereferencePartition(PartitionFromFileObject);
  }
  else
  {
    ((void (__fastcall *)(PVOID, PVOID))PostRoutine)(Context1, Context2);
  }
}
