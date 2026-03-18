/*
 * XREFs of CcApplyLowIoPriorityToThread @ 0x1400AB33C
 * Callers:
 *     CcWriteBehindInternal @ 0x1400AACD0 (CcWriteBehindInternal.c)
 * Callees:
 *     CcUpdateSharedCacheMapFlag @ 0x14002933C (CcUpdateSharedCacheMapFlag.c)
 *     KeSetPriorityThread @ 0x140043440 (KeSetPriorityThread.c)
 *     PsSetIoPriorityThread @ 0x1400669C4 (PsSetIoPriorityThread.c)
 *     PsBoostThreadIoEx @ 0x14008D210 (PsBoostThreadIoEx.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140181890 (KeBugCheckEx.c)
 */

void __fastcall CcApplyLowIoPriorityToThread(__int64 a1, char a2, _DWORD *a3)
{
  struct _KTHREAD *CurrentThread; // rsi

  CurrentThread = KeGetCurrentThread();
  if ( !a3[1] )
    KeBugCheckEx(0x34u, 0x48BuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  if ( a2 )
  {
    if ( (unsigned int)CcMaxNumberOfWriteBehindThreads >= *(_DWORD *)(a1 + 272)
      || CcLowPriWorkerThread
      || a3[129]
      || (a3[38] & 0x10000) != 0 )
    {
      return;
    }
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CcLowPriorityWorkerThreadLock, 0LL);
    CcLowPriWorkerThread = CurrentThread;
    CcLowPriSharedCacheMap = (__int64)a3;
    CcLowPriOldIoPriority = PsSetIoPriorityThread((__int64)CurrentThread, 0);
  }
  else
  {
    if ( CcLowPriWorkerThread != CurrentThread )
      return;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&CcLowPriorityWorkerThreadLock, 0LL);
    PsSetIoPriorityThread((__int64)CurrentThread, CcLowPriOldIoPriority);
    if ( CcLowPriOldCpuPriority != 32 )
      KeSetPriorityThread(KeGetCurrentThread(), CcLowPriOldCpuPriority);
    if ( (a3[38] & 0x20000000) != 0 )
    {
      PsBoostThreadIoEx((__int64)CurrentThread, 1, 0, 0LL);
      CcUpdateSharedCacheMapFlag((__int64)a3, 0x20000000, 0);
    }
    CcLowPriWorkerThread = 0LL;
    CcLowPriSharedCacheMap = 0LL;
    CcLowPriOldIoPriority = 5;
    CcLowPriOldCpuPriority = 32;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&CcLowPriorityWorkerThreadLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(&CcLowPriorityWorkerThreadLock);
  KeAbPostRelease((ULONG_PTR)&CcLowPriorityWorkerThreadLock);
}
