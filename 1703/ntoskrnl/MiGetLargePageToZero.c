/*
 * XREFs of MiGetLargePageToZero @ 0x140129020
 * Callers:
 *     MiZeroPageThread @ 0x1401579F0 (MiZeroPageThread.c)
 *     MiZeroLargePages @ 0x14015C30C (MiZeroLargePages.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     MiUnlinkNodeLargePage @ 0x1401291F0 (MiUnlinkNodeLargePage.c)
 *     MiMapLargePagesToZero @ 0x140129880 (MiMapLargePagesToZero.c)
 *     MiGetSmallZeroPtes @ 0x140129AD0 (MiGetSmallZeroPtes.c)
 *     MiInitializeNewUltraHugeContext @ 0x14015C7C0 (MiInitializeNewUltraHugeContext.c)
 *     MiGetUltraHugeAlreadyActive @ 0x14015CF08 (MiGetUltraHugeAlreadyActive.c)
 *     memset @ 0x140192D80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x140286010 (ExFreePoolWithTag.c)
 */

_BOOL8 __fastcall MiGetLargePageToZero(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4)
{
  __int64 v4; // rsi
  unsigned int v6; // r14d
  bool v8; // zf
  __int64 v9; // rax
  void *v10; // rbp
  __int64 v11; // rax
  __int64 v12; // rdi
  __int64 SmallZeroPtes; // rax
  __int64 v15; // rcx
  PVOID PoolWithTag; // rax
  int v17; // edi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-38h] BYREF

  v4 = a3;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v6 = a4 >> byte_14036C1B9;
  while ( 1 )
  {
    v8 = *(_BYTE *)(a2 + 104) == 1;
    v9 = a2;
    *(_QWORD *)(a2 + 32) = 0LL;
    v10 = 0LL;
    if ( v8 && !(_DWORD)v4 )
    {
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(a1 + 48) + 2152LL + 2184LL * v6), &LockHandle);
      if ( MiGetUltraHugeAlreadyActive(v15, a2) )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        return 1LL;
      }
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xC8uLL, 0x7548694Du);
      v10 = PoolWithTag;
      if ( !PoolWithTag )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        return 0LL;
      }
      memset(PoolWithTag, 0, 0xC8uLL);
      v9 = (__int64)v10;
    }
    v11 = MiUnlinkNodeLargePage(a1, v4, v6, 4, 1, v9);
    v12 = v11;
    if ( !v11 )
    {
      if ( v10 )
      {
        KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
        __writecr8(LockHandle.OldIrql);
        ExFreePoolWithTag(v10, 0);
      }
      return 0LL;
    }
    if ( !v10 )
      break;
    v17 = MiInitializeNewUltraHugeContext(a2, v10, v11);
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    __writecr8(LockHandle.OldIrql);
    if ( v17 )
      return 1LL;
    ExFreePoolWithTag(v10, 0);
  }
  if ( (unsigned int)v4 <= 1 )
    SmallZeroPtes = *(_QWORD *)(a2 + 8 * v4 + 120);
  else
    SmallZeroPtes = MiGetSmallZeroPtes(a2, MiLargePageSizes[v4]);
  return MiMapLargePagesToZero(a2, SmallZeroPtes, v12, (unsigned int)v4) != 0;
}
