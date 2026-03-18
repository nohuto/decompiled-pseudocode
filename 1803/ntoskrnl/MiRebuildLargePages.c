/*
 * XREFs of MiRebuildLargePages @ 0x140155E10
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x140008E50 (KeAbPreAcquire.c)
 *     PsDereferencePartition @ 0x14006FEF8 (PsDereferencePartition.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     MiNodeFreeZeroPages @ 0x1400D4DF8 (MiNodeFreeZeroPages.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400D5740 (MiNodeLargeFreeZeroPages.c)
 *     KxAcquireQueuedSpinLock @ 0x1400E01A0 (KxAcquireQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     MiGetNodeStandbyPageCount @ 0x1402659E4 (MiGetNodeStandbyPageCount.c)
 *     MiRebuildLargePage @ 0x14026D668 (MiRebuildLargePage.c)
 */

void __fastcall MiRebuildLargePages(unsigned __int64 a1)
{
  unsigned __int64 v1; // r13
  unsigned __int64 v2; // r15
  __int64 v3; // rdi
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rbp
  unsigned int v8; // r14d
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rsi
  __int64 i; // rdx
  int v12; // edx
  unsigned __int8 CurrentIrql; // r14
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned int v16; // ebp
  unsigned __int64 v17; // r11
  __int64 j; // r8
  __int64 NodeStandbyPageCount; // rax
  __int64 v20; // r11
  int v21; // r8d
  unsigned __int64 v22; // rdx
  __int64 v23; // rbx
  unsigned __int8 v24; // al
  char v25; // al
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  char v27; // [rsp+70h] [rbp+8h]

  v1 = a1 >> 58;
  v2 = 16 * (a1 | 0xFFC0000000000000uLL);
  v3 = *(_QWORD *)(v2 + 0x10) + 1984 * (a1 >> 58);
  v4 = *(_QWORD *)(v3 + 1808);
  v27 = *(_BYTE *)(v3 + 851);
  v5 = v4 / 0xC8;
  if ( v4 / 0xC8 >= (-(__int64)(v27 != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000 )
  {
    v6 = MiNodeLargeFreeZeroPages((_QWORD *)v3, 4u, 2);
    v7 = v6;
    if ( v6 < v5 )
    {
      v8 = MmNumberOfChannels;
      v9 = v5 - v6;
      v10 = 0LL;
      for ( i = 0LL; (unsigned int)i < v8; i = (unsigned int)(v12 + 1) )
        v10 += MiNodeFreeZeroPages(v3, i, 0);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v3 + 1928);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v3 + 1928));
      v14 = KeAbPreAcquire(v3, 0LL, 0);
      if ( v14 )
        *(_BYTE *)(v14 + 26) |= 1u;
      if ( v10 < v9 )
      {
        if ( v7 < 0x400 )
        {
          v16 = MmNumberOfChannels;
          v17 = 0LL;
          for ( j = 0LL; (unsigned int)j < v16; j = (unsigned int)(v21 + 1) )
          {
            NodeStandbyPageCount = MiGetNodeStandbyPageCount(v2, (unsigned int)v1, j, v15);
            v17 = NodeStandbyPageCount + v20;
          }
          if ( v4 < 0x5000A )
            v22 = 0x8000LL;
          else
            v22 = v4 / 0xA;
          if ( v17 > v22 )
            v10 += (v17 - v22) / 0xC8;
        }
        if ( v10 < v9 )
          goto LABEL_23;
      }
      *(_BYTE *)(v3 + 851) = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(CurrentIrql);
      v23 = MiRebuildLargePage(v2, (unsigned int)v1, v10);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.LockQueue.Next = 0LL;
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v3 + 1928);
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v3 + 1928));
      if ( v23 )
      {
LABEL_23:
        v25 = 8;
      }
      else
      {
        if ( v27 )
          *(_BYTE *)(v3 + 851) = 1;
        v24 = *(_BYTE *)(v3 + 850);
        if ( v24 >= 0x80u )
          v25 = -1;
        else
          v25 = 2 * v24;
      }
      *(_BYTE *)(v3 + 850) = v25;
      *(_BYTE *)(v3 + 848) = v25;
      *(_BYTE *)(v3 + 849) = 0;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(CurrentIrql);
      KeAbPostRelease(v3);
    }
  }
  PsDereferencePartition(*(_QWORD *)(v2 + 168));
}
