/*
 * XREFs of KseResetDeviceCache @ 0x1406AF618
 * Callers:
 *     KseQueryDeviceData @ 0x1405AC9D0 (KseQueryDeviceData.c)
 *     KseQueryDeviceDataList @ 0x1406AF480 (KseQueryDeviceDataList.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1400E1A40 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x1400EFDA0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1401126F0 (ExfTryToWakePushLock.c)
 *     KsepCacheReset @ 0x1406B0124 (KsepCacheReset.c)
 */

__int64 KseResetDeviceCache()
{
  struct _KTHREAD *CurrentThread; // rax
  ULONG_PTR v1; // rcx
  volatile signed __int64 *v2; // rdi

  if ( dword_14036BC84 == 2 )
  {
    CurrentThread = KeGetCurrentThread();
    v1 = qword_14036BCC8;
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx(v1, 0LL);
    KsepCacheReset(qword_14036BCC8);
    v2 = (volatile signed __int64 *)qword_14036BCC8;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)qword_14036BCC8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock(v2);
    KeAbPostRelease((ULONG_PTR)v2);
    KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  }
  return 0LL;
}
