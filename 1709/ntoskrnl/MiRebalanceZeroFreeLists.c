/*
 * XREFs of MiRebalanceZeroFreeLists @ 0x14014E230
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     MiNodeFreeZeroPages @ 0x1400C5878 (MiNodeFreeZeroPages.c)
 *     MiPruneStandbyPages @ 0x1401353D0 (MiPruneStandbyPages.c)
 *     MiGetNodeStandbyPageCount @ 0x14014E55C (MiGetNodeStandbyPageCount.c)
 */

void __fastcall MiRebalanceZeroFreeLists(_QWORD *a1)
{
  unsigned int i; // ebx
  unsigned int j; // edi
  unsigned int v4; // r8d
  __int64 v5; // r10
  __int64 v6; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    for ( j = 0; j < MmNumberOfChannels; ++j )
    {
      if ( (unsigned __int64)MiNodeFreeZeroPages(8256LL * i + a1[2], j, 1024) < 0x200
        && (unsigned __int64)MiGetNodeStandbyPageCount(a1, i, j) >= 0x1000
        && v5 != 1024 )
      {
        MiPruneStandbyPages((__int64)a1, i, v4, 1024 - v5);
      }
    }
  }
  v6 = a1[21];
  KeAcquireInStackQueuedSpinLock(&qword_140388AA8, &LockHandle);
  a1[654] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  PsDereferencePartition(v6);
}
