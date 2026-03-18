/*
 * XREFs of MiCheckZeroFreeRebalance @ 0x140121EB0
 * Callers:
 *     MiGetPage @ 0x140018200 (MiGetPage.c)
 * Callees:
 *     PsReferencePartitionSafe @ 0x14006FF20 (PsReferencePartitionSafe.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExQueueWorkItemToPartition @ 0x14008F67C (ExQueueWorkItemToPartition.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetNodeStandbyPageCount @ 0x1402659E4 (MiGetNodeStandbyPageCount.c)
 */

unsigned __int64 __fastcall MiCheckZeroFreeRebalance(__int64 a1, unsigned int a2)
{
  int v2; // r12d
  unsigned int v3; // r15d
  __int64 v4; // r11
  unsigned __int64 v5; // rcx
  __int64 v6; // r9
  __int64 i; // r8
  __int64 v8; // rdx
  __int64 v9; // r13
  __int64 v10; // rdi
  __int64 v11; // r9
  __int64 *v12; // rdx
  __int64 v13; // rbx
  __int64 *v14; // r14
  __int64 v15; // rsi
  __int64 v16; // rbp
  __int64 v17; // rax
  unsigned __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-58h] BYREF
  unsigned int v21; // [rsp+88h] [rbp+10h]

  v2 = 0;
  v3 = 0;
  v21 = a2 >> byte_1403CB699;
  v4 = *(_QWORD *)(a1 + 16) + 1984LL * (a2 >> byte_1403CB699);
  if ( (unsigned int)MmNumberOfChannels > 1 )
    v3 = (unsigned __int8)(MiChannelMaximumPowerOf2Mask & (a2 >> byte_1403CB69A));
  v5 = 0LL;
  v6 = v3;
  for ( i = 0LL; i <= 1; ++i )
  {
    if ( (unsigned int)MmNumberOfChannels > 1 )
      v8 = *(_QWORD *)(v4 + 8 * (i + 2 * v6) + 1824);
    else
      v8 = *(_QWORD *)(v4 + 8 * i + 1760);
    v9 = v8 + v5;
    v10 = v6;
    v11 = 0LL;
    v12 = MiLargePageSizes;
    v13 = 0LL;
    v14 = (__int64 *)(v4 + 8 * i);
    v15 = v4;
    v16 = 3LL;
    do
    {
      if ( v3 == 4 )
      {
        v17 = *v14;
        v10 = 4LL;
      }
      else
      {
        v17 = *(_QWORD *)(v4 + 8 * (v10 + v11 + 4 * i) + 16) + *(_QWORD *)(v4 + 8 * (v10 + v11 + 4 * i) + 80);
      }
      result = *v12++ * v17;
      v15 += 272LL;
      v13 += result;
      v11 += 34LL;
      v14 += 34;
      --v16;
    }
    while ( v16 );
    v6 = v3;
    v5 = v13 + v9;
  }
  if ( v5 < 0x200 )
  {
    result = MiGetNodeStandbyPageCount(a1, v21, v3, v3);
    if ( result >= 0x1000 && !*(_QWORD *)(a1 + 6320) )
    {
      result = *(unsigned int *)(a1 + 4);
      if ( (result & 1) == 0 )
      {
        KeAcquireInStackQueuedSpinLock(&qword_1403CBD40, &LockHandle);
        if ( !*(_QWORD *)(a1 + 6320)
          && (*(_DWORD *)(a1 + 4) & 1) == 0
          && PsReferencePartitionSafe(*(_QWORD *)(a1 + 168)) )
        {
          *(_QWORD *)(a1 + 6304) = 0LL;
          *(_QWORD *)(a1 + 6320) = MiRebalanceZeroFreeLists;
          v2 = 1;
          *(_QWORD *)(a1 + 6328) = a1;
        }
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        result = LockHandle.OldIrql;
        __writecr8(LockHandle.OldIrql);
        if ( v2 == 1 )
          return ExQueueWorkItemToPartition(a1 + 6304, 1, 0xFFFFFFFF, *(_QWORD *)(a1 + 168));
      }
    }
  }
  return result;
}
