/*
 * XREFs of CmpLockRegistry @ 0x14047E6F0
 * Callers:
 *     CmpSetKeySecurity @ 0x1400161F0 (CmpSetKeySecurity.c)
 *     CmpQueryKeySecurity @ 0x1400188C0 (CmpQueryKeySecurity.c)
 *     CmpDoQueryKeyName @ 0x1400AF1C0 (CmpDoQueryKeyName.c)
 *     CmpAssignKeySecurity @ 0x1401593C4 (CmpAssignKeySecurity.c)
 *     CmpCloseKeyObject @ 0x14046F8B0 (CmpCloseKeyObject.c)
 *     CmpInitializeHive @ 0x140470188 (CmpInitializeHive.c)
 *     CmpReorganizeHive @ 0x140470880 (CmpReorganizeHive.c)
 *     NtDeleteKey @ 0x14047207C (NtDeleteKey.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmDeleteValueKey @ 0x140474FC8 (CmDeleteValueKey.c)
 *     CmpDelayCloseWorker @ 0x140477EE0 (CmpDelayCloseWorker.c)
 *     CmpDelayDerefKCBWorker @ 0x1404781A0 (CmpDelayDerefKCBWorker.c)
 *     CmQueryMultipleValueKey @ 0x140478DFC (CmQueryMultipleValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14047A598 (NtNotifyChangeMultipleKeys.c)
 *     CmSetValueKey @ 0x14047B690 (CmSetValueKey.c)
 *     CmCallbackGetKeyObjectIDEx @ 0x14047D9D0 (CmCallbackGetKeyObjectIDEx.c)
 *     CmEnumerateValueKey @ 0x14047E740 (CmEnumerateValueKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404A8000 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmOpenKey @ 0x1404AC170 (CmOpenKey.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmNotifyRunDown @ 0x1404D66B0 (CmNotifyRunDown.c)
 *     CmpFlushHive @ 0x1404DD950 (CmpFlushHive.c)
 *     CmpCleanupParseContext @ 0x1404E322C (CmpCleanupParseContext.c)
 *     CmReleaseLoadKeyContext @ 0x1404E3934 (CmReleaseLoadKeyContext.c)
 *     CmpLockRegistryFreezeAware @ 0x1404E3B7C (CmpLockRegistryFreezeAware.c)
 *     CmpDoReconcileNextHive @ 0x1404E3D10 (CmpDoReconcileNextHive.c)
 *     CmpLinkHiveToMaster @ 0x1404E46C4 (CmpLinkHiveToMaster.c)
 *     CmpTrimHive @ 0x1404E6254 (CmpTrimHive.c)
 *     CmpLateUnloadHiveWorker @ 0x1404E67A0 (CmpLateUnloadHiveWorker.c)
 *     HvpFinishPrimaryWrite @ 0x1404E6964 (HvpFinishPrimaryWrite.c)
 *     CmpInitCmRM @ 0x14050A840 (CmpInitCmRM.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405691F0 (CmpTransMgrFreeVolatileData.c)
 *     CmpStopRMLog @ 0x140597D54 (CmpStopRMLog.c)
 *     CmpTransMgrPrepare @ 0x1405A5024 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1405A51A4 (CmpTransMgrCommit.c)
 *     CmpTransMgrCommitUoW @ 0x1405A5398 (CmpTransMgrCommitUoW.c)
 *     CmpTransMgrSyncHive @ 0x1405A6BC4 (CmpTransMgrSyncHive.c)
 *     CmpLoadHiveThread @ 0x1405BE770 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1405BEE7C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     CmpStartSiloRegistryNamespace @ 0x1405BFCC4 (CmpStartSiloRegistryNamespace.c)
 *     CmLockKeyForWrite @ 0x1405D90F8 (CmLockKeyForWrite.c)
 *     CmpCleanupTransactionState @ 0x1405E31E8 (CmpCleanupTransactionState.c)
 *     CmCallbackGetKeyObjectID @ 0x140689100 (CmCallbackGetKeyObjectID.c)
 *     CmReplaceKey @ 0x14068D9FC (CmReplaceKey.c)
 *     CmSetKeyFlags @ 0x14068DC84 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x14068E12C (CmSetLastWriteTimeKey.c)
 *     CmpEnumerateLayeredKey @ 0x14068E764 (CmpEnumerateLayeredKey.c)
 *     CmEnumerateValueKeyFromMergedView @ 0x14068FF9C (CmEnumerateValueKeyFromMergedView.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406903A4 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x14069045C (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140690658 (CmKeyBodyReplicateToVirtual.c)
 *     CmpStopSiloKeyLockTracker @ 0x140693D70 (CmpStopSiloKeyLockTracker.c)
 *     CmpFlushBackupHive @ 0x1406951B8 (CmpFlushBackupHive.c)
 *     HvFoldBackDirtyData @ 0x140696CC0 (HvFoldBackDirtyData.c)
 *     HvFoldBackUnreconciledData @ 0x140696D80 (HvFoldBackUnreconciledData.c)
 *     CmDumpKey @ 0x14069C6E4 (CmDumpKey.c)
 *     CmSaveKey @ 0x14069D3CC (CmSaveKey.c)
 *     CmSaveMergedKeys @ 0x14069D67C (CmSaveMergedKeys.c)
 *     CmpDoReOpenTransKey @ 0x1406A21DC (CmpDoReOpenTransKey.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400800D0 (ExAcquireResourceSharedLite.c)
 *     PsBoostThreadIo @ 0x1400813B0 (PsBoostThreadIo.c)
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
