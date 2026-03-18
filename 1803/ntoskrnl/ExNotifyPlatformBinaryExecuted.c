/*
 * XREFs of ExNotifyPlatformBinaryExecuted @ 0x140624C44
 * Callers:
 *     CmCompleteRegistryInitialization @ 0x140624A30 (CmCompleteRegistryInitialization.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ExFreePoolWithTag @ 0x1402EA410 (ExFreePoolWithTag.c)
 */

void ExNotifyPlatformBinaryExecuted()
{
  struct _KTHREAD *CurrentThread; // rsi
  __int64 v1; // rdx
  __int64 v2; // r8
  __int64 v3; // r9
  PVOID v4; // rdi
  char v5; // bl

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquirePushLockExclusiveEx((ULONG_PTR)&ExpPlatformBinaryLock, 0LL);
  v4 = ExpPlatformBinaryTableInformation;
  ExpPlatformBinaryTableInformation = (PVOID)-1LL;
  v5 = _InterlockedExchangeAdd64((volatile signed __int64 *)&ExpPlatformBinaryLock, 0xFFFFFFFFFFFFFFFFuLL);
  if ( (v5 & 2) != 0 && (v5 & 4) == 0 )
    ExfTryToWakePushLock((volatile signed __int64 *)&ExpPlatformBinaryLock, v1, v2, v3);
  KeAbPostRelease((ULONG_PTR)&ExpPlatformBinaryLock);
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  if ( v4 )
    ExFreePoolWithTag(v4, 0x54425057u);
}
