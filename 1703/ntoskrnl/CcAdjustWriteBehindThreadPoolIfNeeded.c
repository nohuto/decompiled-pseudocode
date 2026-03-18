/*
 * XREFs of CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400AD48C
 * Callers:
 *     CcCanIWrite @ 0x14000D980 (CcCanIWrite.c)
 *     CcChargeDirtyPages @ 0x1400AD3C8 (CcChargeDirtyPages.c)
 *     CcUninitializeCacheMap @ 0x140119B80 (CcUninitializeCacheMap.c)
 *     CcQueueLazyWriteScanThread @ 0x14015E860 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcBoostLowPriorityWorkerThread @ 0x140029248 (CcBoostLowPriorityWorkerThread.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400901E0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400AB290 (KeAcquireInStackQueuedSpinLock.c)
 *     CcAdjustWriteBehindThreadPool @ 0x1400ADE84 (CcAdjustWriteBehindThreadPool.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall CcAdjustWriteBehindThreadPoolIfNeeded(__int64 a1, char a2)
{
  char v2; // di
  __int64 v5; // rdx
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-28h] BYREF

  v2 = 0;
  if ( (_BYTE)dword_1403E3134 )
    return result;
  if ( &CcSystemPartition != (_UNKNOWN *)a1 )
    KeBugCheckEx(0x34u, 0x5DFuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 128), &LockHandle);
  if ( *(_DWORD *)(a1 + 388) )
  {
    if ( (unsigned int)CcMaxNumberOfWriteBehindThreads < *(_DWORD *)(a1 + 272) )
    {
      v2 = 1;
      v5 = 0LL;
      goto LABEL_9;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 672) > 0x2000uLL || a2 )
    {
      if ( (unsigned int)CcMaxNumberOfWriteBehindThreads < *(_DWORD *)(a1 + 272) )
      {
        CcAdjustWriteBehindThreadPool(a1, 0LL);
        v2 = 1;
      }
      goto LABEL_10;
    }
    if ( !*(_DWORD *)(a1 + 400) && *(_QWORD *)(a1 + 328) == a1 + 328 )
    {
      LOBYTE(v5) = 1;
LABEL_9:
      CcAdjustWriteBehindThreadPool(a1, v5);
    }
  }
LABEL_10:
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&LockHandle);
  result = LockHandle.OldIrql;
  __writecr8(LockHandle.OldIrql);
  if ( v2 )
  {
    result = KeGetCurrentIrql();
    if ( (unsigned __int8)result < 2u )
      return CcBoostLowPriorityWorkerThread(0LL);
  }
  return result;
}
