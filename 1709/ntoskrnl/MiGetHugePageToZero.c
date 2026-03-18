/*
 * XREFs of MiGetHugePageToZero @ 0x140134BB0
 * Callers:
 *     MiGetPagesToZero @ 0x1401352C8 (MiGetPagesToZero.c)
 *     MiZeroPageThread @ 0x140135630 (MiZeroPageThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnlinkNodeLargePage @ 0x1400C6570 (MiUnlinkNodeLargePage.c)
 *     MiGetUltraHugeAlreadyActive @ 0x140134D14 (MiGetUltraHugeAlreadyActive.c)
 *     MiInitializeNewUltraHugeContext @ 0x140153B68 (MiInitializeNewUltraHugeContext.c)
 *     memset @ 0x140192F40 (memset.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiGetHugePageToZero(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // edi
  unsigned int v5; // r14d
  __int64 v7; // rcx
  PVOID PoolWithTag; // rax
  void *v10; // rsi
  __int64 v11; // rax
  int v12; // ebx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+40h] [rbp-38h] BYREF

  v3 = 0;
  v5 = a3 >> byte_140388501;
  memset(&LockHandle, 0, sizeof(LockHandle));
  while ( 1 )
  {
    *(_QWORD *)(a2 + 32) = 0LL;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(8256LL * v5 + *(_QWORD *)(a1 + 16) + 8176LL), &LockHandle);
    if ( MiGetUltraHugeAlreadyActive(v7, a2) )
    {
      v3 = 1;
LABEL_4:
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
      __writecr8(LockHandle.OldIrql);
      return v3;
    }
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC8uLL, 0x7548694Du);
    v10 = PoolWithTag;
    if ( !PoolWithTag )
      goto LABEL_4;
    memset(PoolWithTag, 0, 0xC8uLL);
    v11 = MiUnlinkNodeLargePage(a1, 0, v5, 4, 1, 0, 0, (__int64)v10);
    if ( !v11 )
      break;
    v12 = MiInitializeNewUltraHugeContext(a2, v10, v11);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v12 )
      return 1LL;
    ExFreePoolWithTag(v10, 0);
  }
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  __writecr8(LockHandle.OldIrql);
  ExFreePoolWithTag(v10, 0);
  return 0LL;
}
