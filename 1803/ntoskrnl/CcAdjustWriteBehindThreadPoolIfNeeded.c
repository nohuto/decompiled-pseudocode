/*
 * XREFs of CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400E3DD0
 * Callers:
 *     CcCanIWrite @ 0x140089AA0 (CcCanIWrite.c)
 *     CcUninitializeCacheMap @ 0x1400DCA00 (CcUninitializeCacheMap.c)
 *     CcChargeDirtyPages @ 0x1400E3214 (CcChargeDirtyPages.c)
 *     CcSetDirtyInMask @ 0x1400E3310 (CcSetDirtyInMask.c)
 *     CcQueueLazyWriteScanThread @ 0x140177AA0 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400888A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     CcBoostLowPriorityWorkerThread @ 0x14009B00C (CcBoostLowPriorityWorkerThread.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400E05E0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcAdjustWriteBehindThreadPool @ 0x14014D6D8 (CcAdjustWriteBehindThreadPool.c)
 */

$005F0E83B22994B61E86C72E0CE43C71 *__fastcall CcAdjustWriteBehindThreadPoolIfNeeded(__int64 a1, char a2)
{
  char v2; // di
  $005F0E83B22994B61E86C72E0CE43C71 *result; // rax
  unsigned int v6; // edi
  unsigned int v7; // esi
  bool v8; // cf
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( !(_BYTE)dword_14044B190 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &LockHandle);
    if ( *(_DWORD *)(a1 + 316) )
    {
      v6 = *(_DWORD *)(a1 + 896);
      v7 = *(_DWORD *)(a1 + 200);
      v8 = v6 < v7;
      if ( v6 < v7 )
      {
        CcAdjustWriteBehindThreadPool(a1, 0LL);
        v8 = v6 < v7;
      }
      v2 = v8;
    }
    else if ( *(_QWORD *)(a1 + 600) > 0x2000uLL || a2 )
    {
      if ( *(_DWORD *)(a1 + 896) < *(_DWORD *)(a1 + 200) )
      {
        CcAdjustWriteBehindThreadPool(a1, 0LL);
        v2 = 1;
      }
    }
    else if ( !*(_DWORD *)(a1 + 328) && *(_QWORD *)(a1 + 256) == a1 + 256 )
    {
      *(_DWORD *)(a1 + 896) = 1;
      if ( *(_BYTE *)(a1 + 736) )
        *(_BYTE *)(a1 + 736) = 0;
    }
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
    result = ($005F0E83B22994B61E86C72E0CE43C71 *)LockHandle.OldIrql;
    __writecr8(LockHandle.OldIrql);
    if ( v2 )
    {
      result = ($005F0E83B22994B61E86C72E0CE43C71 *)KeGetCurrentIrql();
      if ( (unsigned __int8)result < 2u )
        return CcBoostLowPriorityWorkerThread(a1, 0LL);
    }
  }
  return result;
}
