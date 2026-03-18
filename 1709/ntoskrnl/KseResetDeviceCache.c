/*
 * XREFs of KseResetDeviceCache @ 0x1406DAA68
 * Callers:
 *     KseQueryDeviceData @ 0x1404F52B0 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1406DA8D0 (KseQueryDeviceDataList.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     KsepCacheReset @ 0x1406DB8D0 (KsepCacheReset.c)
 */

__int64 KseResetDeviceCache()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v1; // rcx
  volatile signed __int64 *v2; // rdi

  if ( dword_140387F84 == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    v1 = qword_140387FC8;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1, 0LL);
    KsepCacheReset(qword_140387FC8);
    v2 = (volatile signed __int64 *)qword_140387FC8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_140387FC8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
