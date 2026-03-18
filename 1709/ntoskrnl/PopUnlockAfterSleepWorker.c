/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x140438EC0
 * Callers:
 *     <none>
 * Callees:
 *     ExNotifyCallback @ 0x1400AEAB0 (ExNotifyCallback.c)
 *     MmUnlockPagableImageSection @ 0x1400BC610 (MmUnlockPagableImageSection.c)
 *     PopRunNormalIrpWorkers @ 0x140249194 (PopRunNormalIrpWorkers.c)
 *     PopReleasePolicyLock @ 0x1404242E4 (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x140424608 (PopAcquirePolicyLock.c)
 *     CmSetLazyFlushState @ 0x14069430C (CmSetLazyFlushState.c)
 *     PopClearShutdownMarker @ 0x1406F4F7C (PopClearShutdownMarker.c)
 *     PopClearSleepMarker @ 0x1406F4F8C (PopClearSleepMarker.c)
 *     PopClearSystemShutdownMarker @ 0x1406F4FC8 (PopClearSystemShutdownMarker.c)
 *     PopClearTransitionCheckpoints @ 0x1406F4FFC (PopClearTransitionCheckpoints.c)
 *     PopAdjustHiberFile @ 0x1406FAC34 (PopAdjustHiberFile.c)
 *     PopClearHibernateDiagnosticInfo @ 0x1406FB498 (PopClearHibernateDiagnosticInfo.c)
 *     PopFreeHiberContext @ 0x1406FB8E8 (PopFreeHiberContext.c)
 *     PopReleaseTransitionLock @ 0x1407013E0 (PopReleaseTransitionLock.c)
 *     PopClearSystemSleepCheckpoint @ 0x14070B184 (PopClearSystemSleepCheckpoint.c)
 *     ExSwapinWorkerThreads @ 0x14075E51C (ExSwapinWorkerThreads.c)
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
