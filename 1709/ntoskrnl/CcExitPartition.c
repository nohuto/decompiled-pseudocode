/*
 * XREFs of CcExitPartition @ 0x1401E2488
 * Callers:
 *     MiDeletePartitionResources @ 0x140236E78 (MiDeletePartitionResources.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140061030 (KxReleaseSpinLock.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400931A0 (KeAcquireSpinLockRaiseToDpc.c)
 *     CcNotifyWriteBehindInternal @ 0x140125F3C (CcNotifyWriteBehindInternal.c)
 *     DbgPrintEx @ 0x1401471C0 (DbgPrintEx.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14015A53C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     CcPostDeferredWrites @ 0x1401E0A50 (CcPostDeferredWrites.c)
 *     CcDeletePartition @ 0x1401E2158 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x1401E22D8 (CcDeleteSectionsForPartition.c)
 */

void __fastcall CcExitPartition(_QWORD *a1)
{
  __int64 v1; // rdi
  unsigned __int64 v3; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v1 = a1[1];
  if ( v1 )
  {
    CcNotifyWriteBehindInternal((struct _KEVENT *)v1, 2);
    CcWaitForCurrentLazyWriterActivityInternal(v1);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v1 + 128), &LockHandle);
    v3 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
    *(_BYTE *)(v1 + 901) = 1;
    KxReleaseSpinLock(&CcGlobalPartitionLock);
    __writecr8(v3);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    while ( *(_QWORD *)(v1 + 16) != v1 + 16 || *(_QWORD *)(v1 + 48) != v1 + 72 || *(_QWORD *)(v1 + 56) != v1 + 72 )
    {
      CcDeleteSectionsForPartition((_QWORD **)(v1 + 48), v1);
      CcDeleteSectionsForPartition((_QWORD **)(v1 + 16), v1);
    }
    CcPostDeferredWrites(v1);
    DbgPrintEx(
      0x7Fu,
      2u,
      "CcExitPartition: Partition Exited=%p, PartitionObject=%p now deleting Partition \n",
      (const void *)v1,
      a1);
    CcDeletePartition((char *)v1);
  }
}
