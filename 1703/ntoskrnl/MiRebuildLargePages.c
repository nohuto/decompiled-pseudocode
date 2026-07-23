/*
 * XREFs of MiRebuildLargePages @ 0x1402249F0
 * Callers:
 *     <none>
 * Callees:
 *     MiDereferencePartition @ 0x140062B34 (MiDereferencePartition.c)
 *     MiNodeLargeFreeZeroPages @ 0x140075B98 (MiNodeLargeFreeZeroPages.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KxAcquireQueuedSpinLock @ 0x1400AA4A0 (KxAcquireQueuedSpinLock.c)
 *     MiNodeFreeZeroPages @ 0x1400B8330 (MiNodeFreeZeroPages.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x1400FDE60 (KeAbPreAcquire.c)
 *     MiGetNodeStandbyPageCount @ 0x14021F5BC (MiGetNodeStandbyPageCount.c)
 *     MiPruneStandbyPages @ 0x14021FA24 (MiPruneStandbyPages.c)
 *     MiRebuildLargePage @ 0x140224674 (MiRebuildLargePage.c)
 */

void __fastcall MiRebuildLargePages(unsigned __int64 a1)
{
  __int64 v1; // r13
  ULONG_PTR v2; // rdi
  unsigned __int8 CurrentIrql; // r12
  PRTL_BALANCED_NODE v4; // rax
  __int64 v5; // rsi
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r14
  unsigned int v8; // ebx
  unsigned int v9; // r8d
  __int64 NodeStandbyPageCount; // rax
  __int64 v11; // r11
  unsigned __int64 v12; // r11
  int v13; // r8d
  unsigned __int64 v14; // rax
  unsigned int v15; // r13d
  unsigned __int8 *v16; // rbx
  unsigned __int8 *v17; // r12
  unsigned __int64 v18; // r14
  unsigned __int8 v19; // al
  unsigned __int64 *v20; // rsi
  int v21; // ebx
  char v22; // al
  unsigned __int8 v23; // al
  PVOID P; // [rsp+20h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v26; // [rsp+A0h] [rbp+48h]
  char v27; // [rsp+A8h] [rbp+50h]
  unsigned __int64 v28; // [rsp+B8h] [rbp+60h]

  v26 = a1 >> 58;
  v1 = 16 * (a1 | 0xFFC0000000000000uLL);
  P = (PVOID)v1;
  v2 = *(_QWORD *)(v1 + 0x30) + 2184 * (a1 >> 58);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v2 + 2176);
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v2 + 2176));
  v4 = KeAbPreAcquire(v2, 0LL, 0);
  if ( v4 )
    BYTE2(v4[1].Left) |= 1u;
  v5 = (unsigned int)MmNumberOfChannels;
  v27 = *(_BYTE *)(v2 + 1235);
  v6 = 0LL;
  v28 = 0LL;
  v7 = (-(__int64)(v27 != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000;
  v8 = 0;
  if ( MmNumberOfChannels )
  {
    do
      v6 += MiNodeFreeZeroPages((_QWORD *)v2, v8++, 0);
    while ( v8 < (unsigned int)v5 );
    v28 = v6;
  }
  if ( v6 >= v7 )
  {
    v20 = (unsigned __int64 *)(v2 + 2176);
  }
  else
  {
    if ( (unsigned __int64)MiNodeLargeFreeZeroPages((_QWORD *)v2, 4u, 2) >= 0x400 )
      goto LABEL_21;
    v9 = 0;
    if ( !(_DWORD)v5 )
      goto LABEL_21;
    do
    {
      NodeStandbyPageCount = MiGetNodeStandbyPageCount(v1, v26, v9);
      v12 = NodeStandbyPageCount + v11;
      v9 = v13 + 1;
    }
    while ( v9 < (unsigned int)v5 );
    if ( v12 >= 0x8000 )
    {
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(CurrentIrql);
      v14 = 0LL;
      v15 = 0;
      v16 = 0LL;
      if ( (unsigned int)v5 > 1 )
      {
        v16 = (unsigned __int8 *)(v2 + 2161);
        v15 = *(unsigned __int8 *)(v2 + 2161);
      }
      v17 = &v16[v5];
      if ( v16 != &v16[v5] )
      {
        v18 = 0LL;
        do
        {
          v18 += MiPruneStandbyPages((__int64)P, v26, v15, 1024 - v18);
          if ( v18 >= 0x400 )
            break;
          ++v16;
          if ( (unsigned int)v5 > 1 )
            v15 = *v16;
        }
        while ( v16 != v17 );
        v6 = v28;
        v14 = v18;
        v7 = (-(__int64)(v27 != 0) & 0xFFFFFFFFFFFFE100uLL) + 0x2000;
      }
      v6 += v14;
      v19 = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.LockQueue.Next = 0LL;
      v20 = (unsigned __int64 *)(v2 + 2176);
      LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v2 + 2176);
      CurrentIrql = v19;
      KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)(v2 + 2176));
      v1 = (__int64)P;
    }
    else
    {
LABEL_21:
      v20 = (unsigned __int64 *)(v2 + 2176);
    }
    if ( v6 < v7 )
      goto LABEL_26;
  }
  *(_BYTE *)(v2 + 1235) = 0;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(CurrentIrql);
  v21 = MiRebuildLargePage(v1, v26);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  LockHandle.LockQueue.Next = 0LL;
  LockHandle.LockQueue.Lock = v20;
  KxAcquireQueuedSpinLock((__int64)&LockHandle, (volatile __int64 *)v20);
  if ( v21 == 1 )
  {
LABEL_26:
    v22 = 8;
    goto LABEL_32;
  }
  if ( v27 )
    *(_BYTE *)(v2 + 1235) = 1;
  v23 = *(_BYTE *)(v2 + 1234);
  if ( v23 >= 0x80u )
    v22 = -1;
  else
    v22 = 2 * v23;
LABEL_32:
  *(_BYTE *)(v2 + 1234) = v22;
  *(_BYTE *)(v2 + 1232) = v22;
  *(_BYTE *)(v2 + 1233) = 0;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(CurrentIrql);
  KeAbPostRelease(v2);
  MiDereferencePartition((volatile LONG *)v1);
}
