/*
 * XREFs of MiRebalanceZeroFreeLists @ 0x140266380
 * Callers:
 *     <none>
 * Callees:
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiNodeFreeZeroPages @ 0x1400D4DF8 (MiNodeFreeZeroPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetNodeStandbyPageCount @ 0x1402659E4 (MiGetNodeStandbyPageCount.c)
 *     MiPruneStandbyPages @ 0x140266010 (MiPruneStandbyPages.c)
 */

void __fastcall MiRebalanceZeroFreeLists(_QWORD *a1)
{
  unsigned int i; // ebx
  unsigned int j; // edi
  unsigned int v4; // r8d
  __int64 v5; // r11
  __int64 v6; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  for ( i = 0; i < (unsigned __int16)KeNumberNodes; ++i )
  {
    for ( j = 0; j < MmNumberOfChannels; ++j )
    {
      if ( (unsigned __int64)MiNodeFreeZeroPages(1984LL * i + a1[2], j, 4096) < 0x200
        && (unsigned __int64)MiGetNodeStandbyPageCount((__int64)a1, i, j) >= 0x1000
        && v5 != 1024 )
      {
        MiPruneStandbyPages((__int64)a1, i, v4, 1024 - v5);
      }
    }
  }
  v6 = a1[21];
  KeAcquireInStackQueuedSpinLock(&qword_1403CBD40, &LockHandle);
  a1[790] = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  PsDereferencePartition(v6);
}
