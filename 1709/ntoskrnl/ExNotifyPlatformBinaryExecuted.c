/*
 * XREFs of ExNotifyPlatformBinaryExecuted @ 0x1405AD6F0
 * Callers:
 *     NtInitializeRegistry @ 0x1405AD498 (NtInitializeRegistry.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1400762A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x140082CF0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400A7DA0 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x1402B2440 (ExFreePoolWithTag.c)
 */

void ExNotifyPlatformBinaryExecuted()
{
  struct _KTHREAD *CurrentThread; // rsi
  PVOID v1; // rdi
  char v2; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpPlatformBinaryLock, 0LL);
  v1 = ExpPlatformBinaryTableInformation;
  ExpPlatformBinaryTableInformation = (PVOID)-1LL;
  v2 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v2 & 2) != 0 && (v2 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpPlatformBinaryLock);
  KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v1 )
    ExFreePoolWithTag(v1, 0x54425057u);
}
