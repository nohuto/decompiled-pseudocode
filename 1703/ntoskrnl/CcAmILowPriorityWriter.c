/*
 * XREFs of CcAmILowPriorityWriter @ 0x140026B84
 * Callers:
 *     CcFlushCachePriv @ 0x140097F80 (CcFlushCachePriv.c)
 * Callees:
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 */

bool CcAmILowPriorityWriter()
{
  bool v0; // bl

  ExAcquirePushLockExclusiveEx((ULONG_PTR)&CcLowPriorityWorkerThreadLock, 0LL);
  v0 = CcLowPriWorkerThread == KeGetCurrentThread();
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcLowPriorityWorkerThreadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&CcLowPriorityWorkerThreadLock);
  KeAbPostRelease((ULONG_PTR)&CcLowPriorityWorkerThreadLock);
  return v0;
}
