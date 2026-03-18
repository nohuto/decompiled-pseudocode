/*
 * XREFs of MiFreeCombineBlock @ 0x1400E55B0
 * Callers:
 *     MiDemoteCombinedPte @ 0x14009F660 (MiDemoteCombinedPte.c)
 *     MiDecrementCombinedPte @ 0x1400E5700 (MiDecrementCombinedPte.c)
 *     MiProcessCrcList @ 0x14053FBA0 (MiProcessCrcList.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14001BD60 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlRemoveNode @ 0x140058B30 (RtlAvlRemoveNode.c)
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x140066560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 */

__int64 __fastcall MiFreeCombineBlock(__int64 a1)
{
  unsigned __int64 v1; // r14
  __int64 v3; // rbp
  __int64 v4; // r15
  unsigned __int64 v5; // rbx
  __int64 *v7; // rax
  __int64 v8; // rcx
  _QWORD *v10; // rax
  unsigned int i; // ecx
  __int64 v12; // rdx
  _QWORD *v13; // r8
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v1 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v3 = *(_QWORD *)((a1 & 0xFFFFFFFFFFFFF000uLL) + 0x10);
  if ( *(_QWORD *)(a1 + 24) )
  {
    v4 = 16 * (*(_QWORD *)(a1 + 24) & 0xFLL);
    v5 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v4 + v3 + 104));
    RtlAvlRemoveNode((unsigned __int64 *)(v4 + v3 + 96), a1);
    ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v4 + v3 + 104));
    __writecr8(v5);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  *(_DWORD *)(a1 + 40) &= 0xFFFFFFE0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v3 + 88), &LockHandle);
  if ( (*(_DWORD *)(v1 + 8))-- == 1 )
  {
    v10 = (_QWORD *)(v1 + 64);
    for ( i = 0; i < 0x3F; ++i )
    {
      if ( v10 != (_QWORD *)a1 )
      {
        v12 = *v10;
        if ( *(_QWORD **)(*v10 + 8LL) != v10 || (v13 = (_QWORD *)v10[1], (_QWORD *)*v13 != v10) )
          __fastfail(3u);
        *v13 = v12;
        *(_QWORD *)(v12 + 8) = v13;
      }
      v10 += 8;
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
    v7 = (__int64 *)(v3 + 72);
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
  return (unsigned int)_InterlockedExchangeAdd((volatile signed __int32 *)(v3 + 380), 0xFFFFFFFF);
}
