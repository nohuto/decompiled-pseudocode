/*
 * XREFs of MiRebuildLargePages @ 0x14014E330
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x140064650 (KxAcquireQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     PsDereferencePartition @ 0x1400B8F3C (PsDereferencePartition.c)
 *     KeAbPreAcquire @ 0x1400BAD80 (KeAbPreAcquire.c)
 *     MiNodeFreeZeroPages @ 0x1400C5878 (MiNodeFreeZeroPages.c)
 *     MiNodeLargeFreeZeroPages @ 0x1400C5910 (MiNodeLargeFreeZeroPages.c)
 *     MiPruneStandbyPages @ 0x1401353D0 (MiPruneStandbyPages.c)
 *     MiGetNodeStandbyPageCount @ 0x14014E55C (MiGetNodeStandbyPageCount.c)
 *     MiRebuildLargePage @ 0x1402336B8 (MiRebuildLargePage.c)
 */

void __fastcall MiRebuildLargePages(unsigned __int64 a1)
{
  unsigned __int64 v1; // r13
  __int64 v2; // rdi
  unsigned __int8 CurrentIrql; // r12
  PRTL_BALANCED_NODE v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r14
  __int64 v8; // rdx
  int v9; // edx
  __int64 v10; // r8
  unsigned int v11; // r11d
  __int64 NodeStandbyPageCount; // rax
  __int64 v13; // r10
  unsigned __int64 v14; // r10
  int v15; // r8d
  unsigned __int64 v16; // rax
  unsigned int v17; // r13d
  unsigned __int8 *v18; // rbx
  unsigned __int8 *v19; // r12
  unsigned __int64 v20; // r14
  unsigned __int8 v21; // al
  unsigned __int64 *v22; // rsi
  char v23; // al
  int v24; // ebx
  unsigned __int8 v25; // al
  __int64 v26; // [rsp+20h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v28; // [rsp+A0h] [rbp+48h]
  char v29; // [rsp+A8h] [rbp+50h]
  unsigned __int64 v30; // [rsp+B8h] [rbp+60h]

  v28 = a1 >> 58;
  v1 = 16 * (a1 | 0xFFC0000000000000uLL);
  v26 = v1;
  v2 = *(_QWORD *)(v1 + 0x10) + 8256 * (a1 >> 58);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v2 + 8200);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v2 + 8200));
  v4 = KeAbPreAcquire(v2, 0LL, 0);
  if ( v4 )
    BYTE2(v4[1].Left) |= 1u;
  v5 = (unsigned int)MmNumberOfChannels;
  v29 = *(_BYTE *)(v2 + 7123);
  v6 = 0LL;
  v30 = 0LL;
  v7 = (-(__int64)(v29 != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000;
  v8 = 0LL;
  if ( MmNumberOfChannels )
  {
    do
    {
      v6 += MiNodeFreeZeroPages(v2, v8, 0);
      v8 = (unsigned int)(v9 + 1);
    }
    while ( (unsigned int)v8 < (unsigned int)v5 );
    v30 = v6;
  }
  if ( v6 >= v7 )
  {
    v22 = (unsigned __int64 *)(v2 + 8200);
  }
  else
  {
    if ( (unsigned __int64)MiNodeLargeFreeZeroPages((_QWORD *)v2, 4u, 2) >= 0x400 )
      goto LABEL_26;
    v10 = 0LL;
    if ( !(_DWORD)v5 )
      goto LABEL_26;
    v11 = v28;
    do
    {
      NodeStandbyPageCount = MiGetNodeStandbyPageCount(v1, v11, v10);
      v14 = NodeStandbyPageCount + v13;
      v10 = (unsigned int)(v15 + 1);
    }
    while ( (unsigned int)v10 < (unsigned int)v5 );
    if ( v14 >= 0x8000 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(CurrentIrql);
      v16 = 0LL;
      v17 = 0;
      v18 = 0LL;
      if ( (unsigned int)v5 > 1 )
      {
        v18 = (unsigned __int8 *)(v2 + 8185);
        v17 = *(unsigned __int8 *)(v2 + 8185);
      }
      v19 = &v18[v5];
      if ( v18 != &v18[v5] )
      {
        v20 = 0LL;
        do
        {
          v20 += MiPruneStandbyPages(v26, v28, v17, 1024 - v20);
          if ( v20 >= 0x400 )
            break;
          ++v18;
          if ( (unsigned int)v5 > 1 )
            v17 = *v18;
        }
        while ( v18 != v19 );
        v6 = v30;
        v16 = v20;
        v7 = (-(__int64)(v29 != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000;
      }
      v6 += v16;
      v21 = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.LockQueue.Next = 0LL;
      v22 = (unsigned __int64 *)(v2 + 8200);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v2 + 8200);
      CurrentIrql = v21;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v2 + 8200));
      v1 = v26;
    }
    else
    {
LABEL_26:
      v22 = (unsigned __int64 *)(v2 + 8200);
    }
    if ( v6 < v7 )
      goto LABEL_20;
  }
  *(_BYTE *)(v2 + 7123) = 0;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(CurrentIrql);
  v24 = MiRebuildLargePage(v1, (unsigned int)v28);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v22;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v22);
  if ( v24 == 1 )
  {
LABEL_20:
    v23 = 8;
    goto LABEL_21;
  }
  if ( v29 )
    *(_BYTE *)(v2 + 7123) = 1;
  v25 = *(_BYTE *)(v2 + 7122);
  if ( v25 >= 0x80u )
    v23 = -1;
  else
    v23 = 2 * v25;
LABEL_21:
  *(_BYTE *)(v2 + 7122) = v23;
  *(_BYTE *)(v2 + 7120) = v23;
  *(_BYTE *)(v2 + 7121) = 0;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(CurrentIrql);
  KeAbPostRelease(v2);
  PsDereferencePartition(*(_QWORD *)(v1 + 168));
}
