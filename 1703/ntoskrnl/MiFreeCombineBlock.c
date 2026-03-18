/*
 * XREFs of MiFreeCombineBlock @ 0x140079210
 * Callers:
 *     MiDecrementCombinedPte @ 0x140078BE8 (MiDecrementCombinedPte.c)
 *     MiDemoteCombinedPte @ 0x1400D7830 (MiDemoteCombinedPte.c)
 *     MiProcessCrcList @ 0x1404C89E0 (MiProcessCrcList.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x140044660 (ExAcquireSpinLockExclusive.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140094C70 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReturnResidentAvailable @ 0x1400CCD70 (MiReturnResidentAvailable.c)
 *     MiReturnCommit @ 0x1400CE240 (MiReturnCommit.c)
 *     RtlAvlRemoveNode @ 0x1400DB450 (RtlAvlRemoveNode.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     MiReturnCrossPartitionCharges @ 0x14021E85C (MiReturnCrossPartitionCharges.c)
 */

__int64 __fastcall MiFreeCombineBlock(__int64 a1)
{
  unsigned __int64 v1; // r15
  __int64 v3; // rsi
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  _QWORD *v12; // rax
  unsigned int i; // ecx
  __int64 v14; // r8
  _QWORD *v15; // rdx
  ULONG_PTR *v16; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v3 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( *(_QWORD *)(a1 + 24) )
  {
    v4 = 16 * (*(_QWORD *)(a1 + 24) & 0xFLL);
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v3 + v4 + 104));
    RtlAvlRemoveNode(v3 + v4 + 96, a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v3 + v4 + 104));
    __writecr8(v5);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  *(_DWORD *)(a1 + 40) = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 88), &LockHandle);
  if ( (*(_DWORD *)(v1 + 8))-- == 1 )
  {
    v12 = (_QWORD *)(v1 + 56);
    for ( i = 0; i < 0x48; ++i )
    {
      if ( v12 != (_QWORD *)a1 )
      {
        v14 = *v12;
        v15 = (_QWORD *)v12[1];
        if ( *(_QWORD **)(*v12 + 8LL) != v12 || (_QWORD *)*v15 != v12 )
          __fastfail(3u);
        *v15 = v14;
        *(_QWORD *)(v14 + 8) = v15;
      }
      v12 += 7;
    }
    *(_QWORD *)v1 = *(_QWORD *)(v3 + 24);
    *(_QWORD *)(v3 + 24) = v1;
    if ( !*(_QWORD *)v1 )
    {
      *(_QWORD *)(v3 + 32) = 0LL;
      *(_QWORD *)(v3 + 48) = MiFreeCombinePool;
      *(_QWORD *)(v3 + 56) = v3;
      ExQueueWorkItem((PWORK_QUEUE_ITEM)(v3 + 32), DelayedWorkQueue);
    }
  }
  else
  {
    v7 = (_QWORD *)(v3 + 72);
    v8 = *(_QWORD *)(v3 + 72);
    if ( *(_QWORD *)(v8 + 8) != v3 + 72 )
      __fastfail(3u);
    *(_QWORD *)a1 = v8;
    *(_QWORD *)(a1 + 8) = v7;
    *(_QWORD *)(v8 + 8) = a1;
    *v7 = a1;
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( (_UNKNOWN *)v3 == &unk_14036C718 )
  {
    v16 = *(ULONG_PTR **)v3;
    if ( *(ULONG_PTR **)v3 == &MiSystemPartition )
      MiReturnResidentAvailable(1LL, v9, v10);
    else
      _InterlockedExchangeAdd64((volatile signed __int64 *)v16 + 728, 1uLL);
    MiReturnCommit(v16, 1LL);
    MiReturnCrossPartitionCharges(v16, 2LL, 1LL, 1LL);
  }
  return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 380), 0xFFFFFFFF);
}
