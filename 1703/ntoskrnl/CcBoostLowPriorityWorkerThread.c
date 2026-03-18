/*
 * XREFs of CcBoostLowPriorityWorkerThread @ 0x140029248
 * Callers:
 *     CcFlushCachePriv @ 0x140097F80 (CcFlushCachePriv.c)
 *     CcAdjustWriteBehindThreadPoolIfNeeded @ 0x1400AD48C (CcAdjustWriteBehindThreadPoolIfNeeded.c)
 * Callees:
 *     CcUpdateSharedCacheMapFlag @ 0x14002933C (CcUpdateSharedCacheMapFlag.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     PsBoostThreadIoEx @ 0x14008D210 (PsBoostThreadIoEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     PsGetIoPriorityThread @ 0x1400FCA20 (PsGetIoPriorityThread.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     IoBoostThreadIoPriority @ 0x14011E29C (IoBoostThreadIoPriority.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

__int64 __fastcall CcBoostLowPriorityWorkerThread(__int64 a1)
{
  __int64 v3; // r8

  if ( a1 && !*(_DWORD *)(a1 + 4) )
    KeBugCheckEx(0x34u, 0x50BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CcLowPriorityWorkerThreadLock, 0LL);
  if ( CcLowPriWorkerThread
    && (int)PsGetIoPriorityThread(KeGetCurrentThread()) > 0
    && (!a1 || a1 == CcLowPriSharedCacheMap) )
  {
    IoBoostThreadIoPriority(CcLowPriWorkerThread, 2LL, 0LL);
    CcLowPriOldCpuPriority = KeSetPriorityThread(CcLowPriWorkerThread, 13);
    if ( !*(_DWORD *)(CcLowPriSharedCacheMap + 4) )
      KeBugCheckEx(0x34u, 0x535uLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
    if ( (*(_DWORD *)(CcLowPriSharedCacheMap + 152) & 0x20000000) == 0 )
    {
      PsBoostThreadIoEx(CcLowPriWorkerThread, 0LL, 0LL, 0LL);
      LOBYTE(v3) = 1;
      CcUpdateSharedCacheMapFlag(CcLowPriSharedCacheMap, 0x20000000LL, v3);
    }
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcLowPriorityWorkerThreadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&CcLowPriorityWorkerThreadLock);
  return KeAbPostRelease((ULONG_PTR)&CcLowPriorityWorkerThreadLock);
}
