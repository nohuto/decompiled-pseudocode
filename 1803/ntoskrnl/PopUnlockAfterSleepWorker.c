/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x140476810
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x140072E00 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x1400C1700 (MmUnlockPagableImageSection.c)
 *     PopRunNormalIrpWorkers @ 0x140156318 (PopRunNormalIrpWorkers.c)
 *     PopReleasePolicyLock @ 0x14046FA70 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x14046FD90 (PopAcquirePolicyLock.c)
 *     PopClearHibernateDiagnosticInfo @ 0x140584D3C (PopClearHibernateDiagnosticInfo.c)
 *     PopClearShutdownMarker @ 0x140584DB4 (PopClearShutdownMarker.c)
 *     CmSetLazyFlushState @ 0x1405EF43C (CmSetLazyFlushState.c)
 *     ExSwapinWorkerThreads @ 0x1405EF4EC (ExSwapinWorkerThreads.c)
 *     PopClearTransitionCheckpoints @ 0x1405EF6F0 (PopClearTransitionCheckpoints.c)
 *     PopClearSleepMarker @ 0x1405EF75C (PopClearSleepMarker.c)
 *     PopClearSystemSleepCheckpoint @ 0x1405EF798 (PopClearSystemSleepCheckpoint.c)
 *     PopClearSystemShutdownMarker @ 0x1405EF7D4 (PopClearSystemShutdownMarker.c)
 *     PopFreeHiberContext @ 0x1405EF808 (PopFreeHiberContext.c)
 *     PopReleaseTransitionLock @ 0x1405EFA48 (PopReleaseTransitionLock.c)
 *     PopAdjustHiberFile @ 0x1405EFC28 (PopAdjustHiberFile.c)
 */

__int64 __fastcall PopUnlockAfterSleepWorker(__int64 a1)
{
  __int64 v1; // rcx

  LOBYTE(a1) = 1;
  CmSetLazyFlushState(a1);
  LOBYTE(v1) = 1;
  ExSwapinWorkerThreads(v1);
  ExNotifyCallback(ExCbPowerState, (PVOID)3, (PVOID)1);
  PopRunNormalIrpWorkers();
  MmUnlockPagableImageSection(ExPageLockHandle);
  PopClearTransitionCheckpoints();
  PopClearSleepMarker();
  PopClearSystemSleepCheckpoint(0LL);
  PopClearShutdownMarker();
  PopClearSystemShutdownMarker();
  PopFreeHiberContext();
  PopAcquirePolicyLock();
  if ( BYTE8(PopCapabilities) )
    PopAdjustHiberFile();
  PopClearHibernateDiagnosticInfo();
  PopReleasePolicyLock();
  return PopReleaseTransitionLock();
}
