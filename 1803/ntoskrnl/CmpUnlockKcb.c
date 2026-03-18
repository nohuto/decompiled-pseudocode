/*
 * XREFs of CmpUnlockKcb @ 0x1404AA790
 * Callers:
 *     CmpDoQueryKeyName @ 0x1400080A0 (CmpDoQueryKeyName.c)
 *     CmpRemoveHiveFromNamespace @ 0x1400A1E60 (CmpRemoveHiveFromNamespace.c)
 *     CmpTransMgrFreeVolatileData @ 0x140498730 (CmpTransMgrFreeVolatileData.c)
 *     CmpDelayCloseWorker @ 0x14049CE20 (CmpDelayCloseWorker.c)
 *     NtNotifyChangeMultipleKeys @ 0x1404A26F0 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x1404A3418 (CmQueryMultipleValueKey.c)
 *     CmEnumerateValueKey @ 0x1404A6F00 (CmEnumerateValueKey.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpUnlockKcbStack @ 0x1404A8B74 (CmpUnlockKcbStack.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404A9C80 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyControlBlock @ 0x1404AB0E0 (CmpCreateKeyControlBlock.c)
 *     CmpUnlockTwoKcbs @ 0x1404ACE30 (CmpUnlockTwoKcbs.c)
 *     CmQueryKey @ 0x1404AE2E0 (CmQueryKey.c)
 *     CmpCloseKeyObject @ 0x1404E2000 (CmpCloseKeyObject.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x14054E498 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpVEExecuteOpenLogic @ 0x140552590 (CmpVEExecuteOpenLogic.c)
 *     NtFlushKey @ 0x14057A130 (NtFlushKey.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x140581A64 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpDeleteKeyObject @ 0x14059F520 (CmpDeleteKeyObject.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405A5560 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1405AD720 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpTransMgrCommitUoW @ 0x1405DF1D4 (CmpTransMgrCommitUoW.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1405E2080 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpStartSiloRegistryNamespace @ 0x140620458 (CmpStartSiloRegistryNamespace.c)
 *     EnlistKeyBodyWithKCB @ 0x14062E454 (EnlistKeyBodyWithKCB.c)
 *     CmLockKeyForWrite @ 0x140645D64 (CmLockKeyForWrite.c)
 *     CmSetKeyFlags @ 0x1406F1FB8 (CmSetKeyFlags.c)
 *     CmpResolveHiveLoadConflict @ 0x1406F2EDC (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406F38B0 (CmpSearchKeyControlBlockTreeEx.c)
 *     DelistKeyBodyFromKCB @ 0x1406F3A84 (DelistKeyBodyFromKCB.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406F3F3C (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x1406F3FF0 (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406F4248 (CmKeyBodyReplicateToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1406F6E44 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406FADDC (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmDumpKey @ 0x1407015A4 (CmDumpKey.c)
 *     CmRestoreKey @ 0x140701768 (CmRestoreKey.c)
 *     CmSaveKey @ 0x1407022E4 (CmSaveKey.c)
 *     CmpRefreshHive @ 0x14070306C (CmpRefreshHive.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140104510 (ExReleasePushLockEx.c)
 *     CmpFreeKeyControlBlock @ 0x1404A82B0 (CmpFreeKeyControlBlock.c)
 */

void __fastcall CmpUnlockKcb(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // edi

  v5 = *(_DWORD *)(BugCheckParameter2 + 4) & 0x80000;
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 48) == KeGetCurrentThread() )
    *(_QWORD *)(BugCheckParameter2 + 48) = 0LL;
  else
    _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 48));
  ExReleasePushLockEx(BugCheckParameter2 + 40, 0LL, a3, a4);
  if ( v5 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(BugCheckParameter2);
  }
}
