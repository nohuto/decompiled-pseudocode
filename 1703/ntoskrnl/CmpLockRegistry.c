/*
 * XREFs of CmpLockRegistry @ 0x1404FF6F0
 * Callers:
 *     CmpSetKeySecurity @ 0x14006E950 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x14008BF10 (CmpQueryKeySecurity.c)
 *     CmpAssignKeySecurity @ 0x140165FEC (CmpAssignKeySecurity.c)
 *     CmpCleanupTransactionState @ 0x14042D17C (CmpCleanupTransactionState.c)
 *     CmCreateKey @ 0x14042DEF0 (CmCreateKey.c)
 *     CmpTransMgrPrepare @ 0x14042E724 (CmpTransMgrPrepare.c)
 *     CmpTransMgrSyncHive @ 0x14042E8D4 (CmpTransMgrSyncHive.c)
 *     HvpFinishPrimaryWrite @ 0x14043938C (HvpFinishPrimaryWrite.c)
 *     CmpInitializeHive @ 0x1404395AC (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x140439CAC (CmpReorganizeHive.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14043F980 (CmCallbackGetKeyObjectIDEx.c)
 *     NtNotifyChangeMultipleKeys @ 0x14048E630 (NtNotifyChangeMultipleKeys.c)
 *     CmSetValueKey @ 0x14048F4F0 (CmSetValueKey.c)
 *     CmQueryMultipleValueKey @ 0x14048FF38 (CmQueryMultipleValueKey.c)
 *     CmpDelayCloseWorker @ 0x1404908F0 (CmpDelayCloseWorker.c)
 *     CmpDelayDerefKCBWorker @ 0x140490BA0 (CmpDelayDerefKCBWorker.c)
 *     CmpStopRMLog @ 0x1404CA850 (CmpStopRMLog.c)
 *     CmpLateUnloadHiveWorker @ 0x1404CC580 (CmpLateUnloadHiveWorker.c)
 *     CmpTrimHive @ 0x1404CC9EC (CmpTrimHive.c)
 *     CmpLinkHiveToMaster @ 0x1404CCCAC (CmpLinkHiveToMaster.c)
 *     CmpTransMgrCommit @ 0x1404CD8C4 (CmpTransMgrCommit.c)
 *     CmpTransMgrCommitUoW @ 0x1404CDAB8 (CmpTransMgrCommitUoW.c)
 *     CmpCloseKeyObject @ 0x1404CDE90 (CmpCloseKeyObject.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404CE2D0 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteValueKey @ 0x1404CEB38 (CmDeleteValueKey.c)
 *     NtDeleteKey @ 0x1404CF43C (NtDeleteKey.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmpCleanupParseContext @ 0x1404D5440 (CmpCleanupParseContext.c)
 *     CmReleaseLoadKeyContext @ 0x1404D58DC (CmReleaseLoadKeyContext.c)
 *     CmpFlushHive @ 0x1404D6DE0 (CmpFlushHive.c)
 *     CmpLockRegistryFreezeAware @ 0x1404D8558 (CmpLockRegistryFreezeAware.c)
 *     CmpDoReconcileNextHive @ 0x1404D89C0 (CmpDoReconcileNextHive.c)
 *     CmpQueryKeyName @ 0x1404FC190 (CmpQueryKeyName.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmEnumerateValueKey @ 0x1404FF740 (CmEnumerateValueKey.c)
 *     CmOpenKey @ 0x14052CA30 (CmOpenKey.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmNotifyRunDown @ 0x14053F248 (CmNotifyRunDown.c)
 *     CmpInitCmRM @ 0x14054D650 (CmpInitCmRM.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14056AABC (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14056C82C (CmKeyBodyNeedsVirtualImage.c)
 *     CmpStartSiloRegistryNamespace @ 0x1405A383C (CmpStartSiloRegistryNamespace.c)
 *     CmpLoadHiveThread @ 0x1405BC800 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1405BCF50 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmLockKeyForWrite @ 0x1405C649C (CmLockKeyForWrite.c)
 *     CmCallbackGetKeyObjectID @ 0x1406601B0 (CmCallbackGetKeyObjectID.c)
 *     CmReplaceKey @ 0x14066430C (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x1406645C4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140664A64 (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x140664FCC (CmpEnumerateLayeredKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14066668C (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyRemapToVirtual @ 0x140666A94 (CmKeyBodyRemapToVirtual.c)
 *     CmpStopSiloKeyLockTracker @ 0x140668FF8 (CmpStopSiloKeyLockTracker.c)
 *     CmpFlushBackupHive @ 0x14066AB34 (CmpFlushBackupHive.c)
 *     HvFoldBackDirtyData @ 0x14066C64C (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x14066C70C (HvFoldBackUnreconciledData.c)
 *     CmDumpKey @ 0x140671674 (CmDumpKey.c)
 *     CmSaveKey @ 0x140672300 (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x1406725A8 (CmSaveMergedKeys.c)
 *     CmpDoReOpenTransKey @ 0x140677CA0 (CmpDoReOpenTransKey.c)
 * Callees:
 *     PsBoostThreadIo @ 0x14008D1F0 (PsBoostThreadIo.c)
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
