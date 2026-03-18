/*
 * XREFs of MiRebalanceZeroFreeLists @ 0x14021FC00
 * Callers:
 *     <none>
 * Callees:
 *     MiDereferencePartition @ 0x140062B34 (MiDereferencePartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiNodeFreeZeroPages @ 0x1400B8330 (MiNodeFreeZeroPages.c)
 *     MiGetNodeStandbyPageCount @ 0x14021F5BC (MiGetNodeStandbyPageCount.c)
 *     MiPruneStandbyPages @ 0x14021FA24 (MiPruneStandbyPages.c)
 */

void __fastcall MiRebalanceZeroFreeLists(volatile LONG *P)
{
  unsigned __int16 v1; // dx
  unsigned int v3; // ebx
  unsigned int v4; // ebp
  unsigned int v5; // edi
  unsigned int v6; // r8d
  __int64 v7; // r11
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = KeNumberNodes;
  v3 = 0;
  if ( KeNumberNodes )
  {
    v4 = MmNumberOfChannels;
    do
    {
      v5 = 0;
      if ( v4 )
      {
        do
        {
          if ( (unsigned __int64)MiNodeFreeZeroPages((_QWORD *)(2184LL * v3 + *((_QWORD *)P + 6)), v5, 1024) < 0x200
            && (unsigned __int64)MiGetNodeStandbyPageCount((__int64)P, v3, v5) >= 0x1000
            && v7 != 1024 )
          {
            MiPruneStandbyPages((__int64)P, v3, v6, 1024 - v7);
            v4 = MmNumberOfChannels;
          }
          ++v5;
        }
        while ( v5 < v4 );
        v1 = KeNumberNodes;
      }
      ++v3;
    }
    while ( v3 < v1 );
  }
  KeAcquireInStackQueuedSpinLock(&qword_14036C8B0, &LockHandle);
  *((_QWORD *)P + 638) = 0LL;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  MiDereferencePartition(P);
}
