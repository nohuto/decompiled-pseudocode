/*
 * XREFs of PnpWatchdogSetupInProgressConfigure @ 0x14063447C
 * Callers:
 *     PnpWatchdogSetupInProgressCallback @ 0x1407322D0 (PnpWatchdogSetupInProgressCallback.c)
 *     PnpInitializePnpWatchdogs @ 0x1408B786C (PnpInitializePnpWatchdogs.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x140063AF0 (ExfTryToWakePushLock.c)
 *     KeLeaveCriticalRegionThread @ 0x1400EF520 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x1400FEAD0 (KeAbPostRelease.c)
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 *     ZwClose @ 0x1401A76A0 (ZwClose.c)
 *     ZwNotifyChangeKey @ 0x1401A9700 (ZwNotifyChangeKey.c)
 *     PnpUpdateSetupInProgressConfiguration @ 0x140732234 (PnpUpdateSetupInProgressConfiguration.c)
 */

void __fastcall PnpWatchdogSetupInProgressConfigure(HANDLE KeyHandle)
{
  struct _KTHREAD *CurrentThread; // rax
  bool v3; // si
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF

  if ( PnpSetupOOBEInProgress || PnpSetupInProgress )
  {
    v3 = ZwNotifyChangeKey(
           KeyHandle,
           0LL,
           PnpWatchdogSetupInProgressWorkItem,
           (PVOID)1,
           &IoStatusBlock,
           4u,
           0,
           0LL,
           0,
           1u) < 0;
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    ExAcquirePushLockExclusiveEx((ULONG_PTR)&PnpWatchdogBugcheckLock, 0LL);
    PnpUpdateSetupInProgressConfiguration(KeyHandle);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&PnpWatchdogBugcheckLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&PnpWatchdogBugcheckLock, v4, v5, v6);
    KeAbPostRelease((ULONG_PTR)&PnpWatchdogBugcheckLock);
    KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
    if ( v3 )
      ZwClose(KeyHandle);
  }
}
