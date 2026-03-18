/*
 * XREFs of CcAdjustWriteBehindThreadPoolIfNeeded @ 0x14001BCA4
 * Callers:
 *     CcChargeDirtyPages @ 0x14001BBB4 (CcChargeDirtyPages.c)
 *     CcUninitializeCacheMap @ 0x140066BF0 (CcUninitializeCacheMap.c)
 *     CcCanIWrite @ 0x1400F4620 (CcCanIWrite.c)
 *     CcQueueLazyWriteScanThread @ 0x140148AC0 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     CcAdjustWriteBehindThreadPool @ 0x140008EA4 (CcAdjustWriteBehindThreadPool.c)
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x1400645A0 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14008A6C0 (KeAcquireInStackQueuedSpinLock.c)
 *     CcBoostLowPriorityWorkerThread @ 0x1401167E4 (CcBoostLowPriorityWorkerThread.c)
 */

__int64 __fastcall CcAdjustWriteBehindThreadPoolIfNeeded(__int64 a1, char a2)
{
  char v2; // di
  char v5; // dl
  __int64 result; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-28h] BYREF

  v2 = 0;
  if ( (_BYTE)dword_140400130 )
    return result;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 192), &LockHandle);
  if ( *(_DWORD *)(a1 + 316) )
  {
    if ( *(_DWORD *)(a1 + 896) < *(_DWORD *)(a1 + 200) )
    {
      v2 = 1;
      v5 = 0;
      goto LABEL_9;
    }
  }
  else
  {
    if ( *(_QWORD *)(a1 + 600) > 0x2000uLL || a2 )
    {
      if ( *(_DWORD *)(a1 + 896) < *(_DWORD *)(a1 + 200) )
      {
        CcAdjustWriteBehindThreadPool(a1, 0);
        v2 = 1;
      }
      goto LABEL_10;
    }
    if ( !*(_DWORD *)(a1 + 328) && *(_QWORD *)(a1 + 256) == a1 + 256 )
    {
      v5 = 1;
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
      return CcBoostLowPriorityWorkerThread(a1, 0LL);
  }
  return result;
}
