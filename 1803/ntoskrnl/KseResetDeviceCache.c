/*
 * XREFs of KseResetDeviceCache @ 0x140744B28
 * Callers:
 *     KseQueryDeviceData @ 0x14061D690 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x140744990 (KseQueryDeviceDataList.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     KsepCacheReset @ 0x14074646C (KsepCacheReset.c)
 */

__int64 KseResetDeviceCache()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // r8
  __int64 v4; // r9
  volatile signed __int64 *v5; // rdi

  if ( dword_1403CDEE4 == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    v1 = qword_1403CDF28;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1, 0LL);
    KsepCacheReset(qword_1403CDF28);
    v5 = (volatile signed __int64 *)qword_1403CDF28;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_1403CDF28, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v5, v2, v3, v4);
    KeAbPostRelease((ULONG_PTR)v5);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
