/*
 * XREFs of CcExitPartition @ 0x140221098
 * Callers:
 *     MiDeletePartitionResources @ 0x14026E874 (MiDeletePartitionResources.c)
 *     MiDrainCrossPartitionUsage @ 0x14026EF90 (MiDrainCrossPartitionUsage.c)
 * Callees:
 *     KxReleaseSpinLock @ 0x140034850 (KxReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400693C0 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcNotifyWriteBehindInternal @ 0x1400C525C (CcNotifyWriteBehindInternal.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     DbgPrintEx @ 0x14014C9D0 (DbgPrintEx.c)
 *     CcWaitForCurrentLazyWriterActivityInternal @ 0x14014D16C (CcWaitForCurrentLazyWriterActivityInternal.c)
 *     CcPostDeferredWrites @ 0x140220050 (CcPostDeferredWrites.c)
 *     CcDeletePartition @ 0x140220D68 (CcDeletePartition.c)
 *     CcDeleteSectionsForPartition @ 0x140220EE8 (CcDeleteSectionsForPartition.c)
 */

void __fastcall CcExitPartition(_QWORD *a1, int a2)
{
  __int64 v2; // rdi
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = a1[1];
  if ( v2 )
  {
    if ( a2 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 128), &LockHandle);
      v5 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
      *(_BYTE *)(v2 + 902) = 2;
      KxReleaseSpinLock(&CcGlobalPartitionLock);
      __writecr8(v5);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      CcPostDeferredWrites(v2);
      DbgPrintEx(
        0x7Fu,
        2u,
        "CcExitPartition: Partition Exited=%p, PartitionObject=%p now deleting Partition \n",
        (const void *)v2,
        a1);
      CcDeletePartition((char *)v2);
    }
    else
    {
      CcNotifyWriteBehindInternal((struct _KEVENT *)v2, 2);
      CcWaitForCurrentLazyWriterActivityInternal(v2);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v2 + 128), &LockHandle);
      v4 = KeAcquireSpinLockRaiseToDpc(&CcGlobalPartitionLock);
      *(_BYTE *)(v2 + 902) = 1;
      KxReleaseSpinLock(&CcGlobalPartitionLock);
      __writecr8(v4);
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      while ( *(_QWORD *)(v2 + 16) != v2 + 16 || *(_QWORD *)(v2 + 48) != v2 + 72 || *(_QWORD *)(v2 + 56) != v2 + 72 )
      {
        CcDeleteSectionsForPartition((_QWORD **)(v2 + 48), v2);
        CcDeleteSectionsForPartition((_QWORD **)(v2 + 16), v2);
      }
    }
  }
}
