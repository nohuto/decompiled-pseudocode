/*
 * XREFs of PopUnlockAfterSleepWorker @ 0x140409EF0
 * Callers:
 *     <none>
 * Callees:
 *     MmUnlockPagableImageSection @ 0x14006CCE0 (MmUnlockPagableImageSection.c)
 *     ExNotifyCallback @ 0x14006EEC0 (ExNotifyCallback.c)
 *     PopRunNormalIrpWorkers @ 0x1401384A8 (PopRunNormalIrpWorkers.c)
 *     PopReleasePolicyLock @ 0x1404046BC (PopReleasePolicyLock.c)
 *     PopAcquirePolicyLock @ 0x1404046F8 (PopAcquirePolicyLock.c)
 *     PopClearShutdownMarker @ 0x14045EFAC (PopClearShutdownMarker.c)
 *     PopClearSystemShutdownMarker @ 0x140576F84 (PopClearSystemShutdownMarker.c)
 *     PopClearSleepMarker @ 0x140576FB8 (PopClearSleepMarker.c)
 *     PopFreeHiberContext @ 0x140577660 (PopFreeHiberContext.c)
 *     ExSwapinWorkerThreads @ 0x1405778AC (ExSwapinWorkerThreads.c)
 *     CmSetLazyFlushState @ 0x1405779D8 (CmSetLazyFlushState.c)
 *     PopAdjustHiberFile @ 0x14057B6F8 (PopAdjustHiberFile.c)
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
  PopClearSleepMarker();
  PopClearShutdownMarker();
  PopClearSystemShutdownMarker();
  PopFreeHiberContext();
  PopAcquirePolicyLock();
  if ( BYTE8(PopCapabilities) )
    PopAdjustHiberFile();
  PopReleasePolicyLock();
  return PopReleaseTransitionLock();
}
