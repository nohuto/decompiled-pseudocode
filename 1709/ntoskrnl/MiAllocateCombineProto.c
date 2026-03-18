/*
 * XREFs of MiAllocateCombineProto @ 0x1400E6D7C
 * Callers:
 *     MiSharePages @ 0x1400E83E0 (MiSharePages.c)
 *     MiProcessCrcList @ 0x14053FBA0 (MiProcessCrcList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140065040 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x140066590 (ExAcquireSpinLockShared.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLocateCombineBlock @ 0x1400E9FE0 (MiLocateCombineBlock.c)
 *     MiInsertNewCombineBlocks @ 0x1401203C0 (MiInsertNewCombineBlocks.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiAllocateCombineProto(__int64 a1, __int64 a2, unsigned int a3, int a4)
{
  __int64 inserted; // rbx
  volatile LONG *v9; // r14
  KIRQL v10; // r15
  __int64 CombineBlock; // rax
  __int64 v12; // rbp
  __int64 *v13; // rax
  __int64 v14; // rcx
  char v15; // al
  __int64 result; // rax
  signed __int64 v17; // rax
  signed __int64 v18; // rtt
  char *PoolWithTag; // rax
  void *v20; // rbp
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  if ( !a2 )
    return 0LL;
  inserted = 0LL;
  v9 = (volatile LONG *)(16 * (a2 & 0xF) + a1 + 104);
  v10 = ExAcquireSpinLockShared(v9);
  CombineBlock = MiLocateCombineBlock(a1, a2, a3);
  v12 = CombineBlock;
  if ( CombineBlock )
  {
    v17 = *(_QWORD *)(CombineBlock + 32);
    while ( v17 )
    {
      v18 = v17;
      v17 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 32), v17 + 1, v17);
      if ( v18 == v17 )
      {
        ExReleaseSpinLockSharedFromDpcLevel(v9);
        __writecr8(v10);
        result = v12;
        goto LABEL_14;
      }
    }
    a4 = 0;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v9);
  __writecr8(v10);
  if ( !a4 )
    return 0LL;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 88), &LockHandle);
  v13 = (__int64 *)(a1 + 72);
  if ( (__int64 *)*v13 != v13 )
  {
    inserted = *v13;
    if ( *(__int64 **)(*v13 + 8) != v13
      || (v14 = *(_QWORD *)inserted, *(_QWORD *)(*(_QWORD *)inserted + 8LL) != inserted) )
    {
      __fastfail(3u);
    }
    *v13 = v14;
    *(_QWORD *)(v14 + 8) = v13;
    ++*(_DWORD *)((inserted & 0xFFFFFFFFFFFFF000uLL) + 8);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  if ( !inserted )
  {
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6D75534Du);
    v20 = PoolWithTag;
    if ( PoolWithTag )
    {
      *((_DWORD *)PoolWithTag + 2) = 1;
      *((_QWORD *)PoolWithTag + 2) = a1;
      inserted = MiInsertNewCombineBlocks(a1, PoolWithTag + 64);
      if ( inserted )
        goto LABEL_9;
      ExFreePoolWithTag(v20, 0);
    }
    return 0LL;
  }
LABEL_9:
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 380), 1u);
  v15 = a3 ^ *(_DWORD *)(inserted + 40);
  *(_QWORD *)(inserted + 32) = 1LL;
  *(_DWORD *)(inserted + 40) ^= v15 & 0x1F;
  result = inserted;
LABEL_14:
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 384), 1u);
  return result;
}
