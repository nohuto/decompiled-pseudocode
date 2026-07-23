/*
 * XREFs of CcDeferWrite @ 0x1401DD930
 * Callers:
 *     <none>
 * Callees:
 *     ExInterlockedInsertHeadList @ 0x140022570 (ExInterlockedInsertHeadList.c)
 *     ExInterlockedInsertTailList @ 0x1400225E0 (ExInterlockedInsertTailList.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcGetPartitionFromFileObject @ 0x1400AB504 (CcGetPartitionFromFileObject.c)
 *     CcScheduleLazyWriteScan @ 0x140118B04 (CcScheduleLazyWriteScan.c)
 *     _guard_dispatch_icall @ 0x140189DC0 (_guard_dispatch_icall.c)
 *     CcPostDeferredWrites @ 0x1401DDA60 (CcPostDeferredWrites.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 */

void __stdcall CcDeferWrite(
        PFILE_OBJECT FileObject,
        PCC_POST_DEFERRED_WRITE PostRoutine,
        PVOID Context1,
        PVOID Context2,
        ULONG BytesToWrite,
        BOOLEAN Retrying)
{
  _QWORD *PoolWithTag; // rax
  char *PartitionFromFileObject; // rax
  __int64 v12; // rdx
  _LIST_ENTRY *v13; // rdx
  __int64 v14; // rbx
  KSPIN_LOCK *v15; // r8
  _LIST_ENTRY *v16; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x48uLL, 0x77446343u);
  if ( PoolWithTag )
  {
    PoolWithTag[5] = 0LL;
    *(_DWORD *)PoolWithTag = 4719356;
    PoolWithTag[1] = FileObject;
    *((_DWORD *)PoolWithTag + 4) = BytesToWrite;
    PoolWithTag[6] = PostRoutine;
    PoolWithTag[7] = Context1;
    PoolWithTag[8] = Context2;
    PartitionFromFileObject = (char *)CcGetPartitionFromFileObject((__int64)FileObject);
    v13 = (_LIST_ENTRY *)(v12 + 24);
    v14 = (__int64)PartitionFromFileObject;
    v15 = (KSPIN_LOCK *)(PartitionFromFileObject + 832);
    v16 = (_LIST_ENTRY *)(PartitionFromFileObject + 816);
    if ( Retrying )
      ExInterlockedInsertHeadList(v16, v13, v15);
    else
      ExInterlockedInsertTailList(v16, v13, v15);
    CcPostDeferredWrites(v14);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v14 + 64), &LockHandle);
    CcScheduleLazyWriteScan(v14, 1, 0);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
  }
  else
  {
    ((void (__fastcall *)(PVOID, PVOID))PostRoutine)(Context1, Context2);
  }
}
