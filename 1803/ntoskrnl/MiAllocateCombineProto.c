/*
 * XREFs of MiAllocateCombineProto @ 0x140122E30
 * Callers:
 *     MiSharePages @ 0x1400326D0 (MiSharePages.c)
 *     MiProcessCrcList @ 0x1405B6E90 (MiProcessCrcList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     ExAcquireSpinLockShared @ 0x14008E460 (ExAcquireSpinLockShared.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140122D80 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     MiInsertNewCombineBlocks @ 0x14014B324 (MiInsertNewCombineBlocks.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiAllocateCombineProto(__int64 a1, unsigned __int64 a2, char a3, int a4)
{
  __int64 v7; // rbx
  __int64 inserted; // r13
  volatile LONG *v9; // r15
  unsigned int v10; // ebp
  KIRQL v11; // r12
  __int64 v12; // rbx
  unsigned __int64 v13; // rax
  __int64 result; // rax
  unsigned int v15; // eax
  signed __int64 v16; // rax
  signed __int64 v17; // rtt
  __int64 *v18; // rcx
  _QWORD *v19; // rax
  __int64 v20; // rcx
  unsigned int v21; // eax
  char *PoolWithTag; // rax
  void *v23; // rbx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF

  if ( !a2 )
    return 0LL;
  v7 = a2 & 0xF;
  inserted = 0LL;
  v9 = (volatile LONG *)(16 * v7 + a1 + 104);
  v10 = a3 & 0x1F;
  v11 = ExAcquireSpinLockShared(v9);
  v12 = *(_QWORD *)(a1 + 16 * (v7 + 6));
  if ( !v12 )
    goto LABEL_8;
  do
  {
    v13 = *(_QWORD *)(v12 + 24);
    if ( a2 > v13 )
    {
LABEL_11:
      v12 = *(_QWORD *)(v12 + 8);
      continue;
    }
    if ( a2 >= v13 )
    {
      v15 = *(_DWORD *)(v12 + 40) & 0x1F;
      if ( v10 > v15 )
        goto LABEL_11;
      if ( v10 >= v15 )
        break;
    }
    v12 = *(_QWORD *)v12;
  }
  while ( v12 );
  if ( !v12 )
    goto LABEL_8;
  v16 = *(_QWORD *)(v12 + 32);
  if ( !v16 )
  {
LABEL_30:
    a4 = 0;
LABEL_8:
    ExReleaseSpinLockSharedFromDpcLevel(v9);
    __writecr8(v11);
    if ( !a4 )
      return 0LL;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 88), &LockHandle);
    v18 = *(__int64 **)(a1 + 72);
    v19 = (_QWORD *)(a1 + 72);
    if ( v18 != (__int64 *)(a1 + 72) )
    {
      inserted = *(_QWORD *)(a1 + 72);
      if ( (_QWORD *)v18[1] != v19 || (v20 = *v18, *(_QWORD *)(v20 + 8) != inserted) )
        __fastfail(3u);
      *v19 = v20;
      *(_QWORD *)(v20 + 8) = v19;
      ++*(_DWORD *)((inserted & 0xFFFFFFFFFFFFF000uLL) + 8);
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( inserted )
    {
LABEL_24:
      _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 380), 1u);
      v21 = *(_DWORD *)(inserted + 40) & 0xFFFFFFE0;
      *(_QWORD *)(inserted + 32) = 1LL;
      *(_DWORD *)(inserted + 40) = v10 | v21;
      result = inserted;
      goto LABEL_18;
    }
    PoolWithTag = (char *)ExAllocatePoolWithTag(PagedPool, 0x1000uLL, 0x6D75534Du);
    v23 = PoolWithTag;
    if ( PoolWithTag )
    {
      *((_DWORD *)PoolWithTag + 2) = 1;
      *((_QWORD *)PoolWithTag + 2) = a1;
      inserted = MiInsertNewCombineBlocks(a1, PoolWithTag + 64);
      if ( inserted )
        goto LABEL_24;
      ExFreePoolWithTag(v23, 0);
    }
    return 0LL;
  }
  while ( 1 )
  {
    v17 = v16;
    v16 = _InterlockedCompareExchange64((volatile signed __int64 *)(v12 + 32), v16 + 1, v16);
    if ( v17 == v16 )
      break;
    if ( !v16 )
      goto LABEL_30;
  }
  ExReleaseSpinLockSharedFromDpcLevel(v9);
  __writecr8(v11);
  result = v12;
LABEL_18:
  _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 384), 1u);
  return result;
}
