/*
 * XREFs of CmpLockRegistry @ 0x1404A71E0
 * Callers:
 *     CmpRecheckHiveVolumePolicy @ 0x140006AD0 (CmpRecheckHiveVolumePolicy.c)
 *     CmpQueryKeySecurity @ 0x140007C08 (CmpQueryKeySecurity.c)
 *     CmpDoQueryKeyName @ 0x1400080A0 (CmpDoQueryKeyName.c)
 *     CmpSetKeySecurity @ 0x1400633D0 (CmpSetKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x140184F70 (CmpAssignKeySecurity.c)
 *     CmpTrimHive @ 0x140495A18 (CmpTrimHive.c)
 *     CmpCreateHive @ 0x140497630 (CmpCreateHive.c)
 *     CmpReorganizeHive @ 0x140497D1C (CmpReorganizeHive.c)
 *     CmpTransMgrFreeVolatileData @ 0x140498730 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteValueKey @ 0x14049B18C (CmDeleteValueKey.c)
 *     CmpLockRegistryFreezeAware @ 0x14049BC3C (CmpLockRegistryFreezeAware.c)
 *     CmReleaseLoadKeyContext @ 0x14049BE14 (CmReleaseLoadKeyContext.c)
 *     CmpDelayCloseWorker @ 0x14049CE20 (CmpDelayCloseWorker.c)
 *     CmpFlushHive @ 0x14049D2A8 (CmpFlushHive.c)
 *     CmpCleanupParseContext @ 0x14049FF18 (CmpCleanupParseContext.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1404A26F0 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x1404A3418 (CmQueryMultipleValueKey.c)
 *     CmSetValueKey @ 0x1404A4924 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x1404A53D0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmEnumerateValueKey @ 0x1404A6F00 (CmEnumerateValueKey.c)
 *     CmpDelayDerefKCBWorker @ 0x1404A84A0 (CmpDelayDerefKCBWorker.c)
 *     CmNotifyRunDown @ 0x1404B9558 (CmNotifyRunDown.c)
 *     CmpCloseKeyObject @ 0x1404E2000 (CmpCloseKeyObject.c)
 *     CmpLateUnloadHiveWorker @ 0x14054D5D0 (CmpLateUnloadHiveWorker.c)
 *     CmpStopRMLog @ 0x14054E8A0 (CmpStopRMLog.c)
 *     CmpLinkHiveToMaster @ 0x140557540 (CmpLinkHiveToMaster.c)
 *     CmpInitCmRM @ 0x140561DC4 (CmpInitCmRM.c)
 *     NtDeleteKey @ 0x14056D9C4 (NtDeleteKey.c)
 *     HvpFinishPrimaryWrite @ 0x14057FE20 (HvpFinishPrimaryWrite.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmOpenKey @ 0x1405AD380 (CmOpenKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpTransMgrPrepare @ 0x1405DEE1C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1405DEFD8 (CmpTransMgrCommit.c)
 *     CmpTransMgrCommitUoW @ 0x1405DF1D4 (CmpTransMgrCommitUoW.c)
 *     CmpTransMgrSyncHive @ 0x1405DFE68 (CmpTransMgrSyncHive.c)
 *     CmpCleanupTransactionState @ 0x1405E77C0 (CmpCleanupTransactionState.c)
 *     CmpStartSiloRegistryNamespace @ 0x140620458 (CmpStartSiloRegistryNamespace.c)
 *     CmpLoadHiveThread @ 0x140632C90 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x140633408 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmLockKeyForWrite @ 0x140645D64 (CmLockKeyForWrite.c)
 *     CmCallbackGetKeyObjectID @ 0x1406ED4C0 (CmCallbackGetKeyObjectID.c)
 *     CmReplaceKey @ 0x1406F1CD8 (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x1406F1FB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1406F2444 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x1406F2910 (CmpEnumerateLayeredKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x1406F3B38 (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406F3F3C (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1406F3FF0 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406F4248 (CmKeyBodyReplicateToVirtual.c)
 *     CmpStopSiloKeyLockTracker @ 0x1406F6F64 (CmpStopSiloKeyLockTracker.c)
 *     CmpFlushBackupHive @ 0x1406F9154 (CmpFlushBackupHive.c)
 *     CmDumpKey @ 0x1407015A4 (CmDumpKey.c)
 *     CmSaveKey @ 0x1407022E4 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1407025D4 (CmSaveMergedKeys.c)
 *     CmpRefreshHive @ 0x14070306C (CmpRefreshHive.c)
 *     CmpDoReOpenTransKey @ 0x1407073A8 (CmpDoReOpenTransKey.c)
 * Callees:
 *     PsBoostThreadIo @ 0x1400FE2B0 (PsBoostThreadIo.c)
 *     ExAcquireResourceSharedLite @ 0x140100120 (ExAcquireResourceSharedLite.c)
 */

BOOLEAN CmpLockRegistry()
{
  struct _KTHREAD *CurrentThread; // rax
  BOOLEAN result; // al

  if ( !CmpPuntBoot )
  {
    PsBoostThreadIo((__int64)KeGetCurrentThread(), 0LL);
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    return ExAcquireResourceSharedLite((PERESOURCE)&CmpRegistryLock, 1u);
  }
  return result;
}
