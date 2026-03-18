/*
 * XREFs of MiGetHugePageToZero @ 0x14017B9F8
 * Callers:
 *     MiZeroPageThread @ 0x140173040 (MiZeroPageThread.c)
 *     MiGetPagesToZero @ 0x14017B8BC (MiGetPagesToZero.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnlinkNodeLargePage @ 0x1400E7040 (MiUnlinkNodeLargePage.c)
 *     MiGetUltraHugeAlreadyActive @ 0x14017BB60 (MiGetUltraHugeAlreadyActive.c)
 *     MiInitializeNewUltraHugeContext @ 0x14017BE2C (MiInitializeNewUltraHugeContext.c)
 *     MiDecrementHugeContext @ 0x14017C0A4 (MiDecrementHugeContext.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402EADB0 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiGetHugePageToZero(__int64 a1, __int64 a2)
{
  unsigned int v2; // r14d
  unsigned int v5; // r14d
  unsigned int v6; // edi
  __int64 v7; // rcx
  PVOID PoolWithTag; // rax
  void *v10; // rsi
  __int64 v11; // rax
  int v12; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF

  v2 = *(_DWORD *)(a2 + 244);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v5 = v2 >> byte_1403CB699;
  v6 = 0;
  while ( 1 )
  {
    *(_QWORD *)(a2 + 32) = 0LL;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(1984LL * v5 + *(_QWORD *)(a1 + 16) + 1904LL), &LockHandle);
    if ( MiGetUltraHugeAlreadyActive(v7, a2) )
    {
      v6 = 1;
LABEL_4:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      return v6;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC8uLL, 0x7548694Du);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_4;
    memset(PoolWithTag, 0, 0xC8uLL);
    v11 = MiUnlinkNodeLargePage(a1, 0LL, v5, 4LL, a2 + 232, 0, (__int64)v10);
    if ( !v11 )
      break;
    v12 = MiInitializeNewUltraHugeContext(a2, v10, v11);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v12 )
      return 1LL;
    MiDecrementHugeContext(v10);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  ExFreePoolWithTag(v10, 0);
  return 0LL;
}
