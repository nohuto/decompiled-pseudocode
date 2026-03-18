/*
 * XREFs of CmpUnlockKcb @ 0x14047F670
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140015CA8 (CmpRemoveHiveFromNamespace.c)
 *     CmpDoQueryKeyName @ 0x1400AF1C0 (CmpDoQueryKeyName.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x14046EBF0 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpCloseKeyObject @ 0x14046F8B0 (CmpCloseKeyObject.c)
 *     CmpDelayCloseWorker @ 0x140477EE0 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmQueryMultipleValueKey @ 0x140478DFC (CmQueryMultipleValueKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x14047A598 (NtNotifyChangeMultipleKeys.c)
 *     CmEnumerateValueKey @ 0x14047E740 (CmEnumerateValueKey.c)
 *     CmpUnlockKcbStack @ 0x14047EA68 (CmpUnlockKcbStack.c)
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     CmpUnlockTwoKcbs @ 0x140482410 (CmpUnlockTwoKcbs.c)
 *     CmQueryKey @ 0x1404A7650 (CmQueryKey.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404A8000 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmpDeleteKeyObject @ 0x1404A97C0 (CmpDeleteKeyObject.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404B39C0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x1404B8240 (CmpCreateKeyBody.c)
 *     CmpVEExecuteOpenLogic @ 0x1404B85E0 (CmpVEExecuteOpenLogic.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140562984 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405691F0 (CmpTransMgrFreeVolatileData.c)
 *     NtFlushKey @ 0x14059294C (NtFlushKey.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x1405979A8 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     CmpTransMgrCommitUoW @ 0x1405A5398 (CmpTransMgrCommitUoW.c)
 *     CmpStartSiloRegistryNamespace @ 0x1405BFCC4 (CmpStartSiloRegistryNamespace.c)
 *     EnlistKeyBodyWithKCB @ 0x1405C098C (EnlistKeyBodyWithKCB.c)
 *     CmLockKeyForWrite @ 0x1405D90F8 (CmLockKeyForWrite.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1405F2DD8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmSetKeyFlags @ 0x14068DC84 (CmSetKeyFlags.c)
 *     CmpResolveHiveLoadConflict @ 0x14068ECFC (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14068FD50 (CmpSearchKeyControlBlockTreeEx.c)
 *     DelistKeyBodyFromKCB @ 0x14068FEE8 (DelistKeyBodyFromKCB.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x1406903A4 (CmKeyBodyNeedsVirtualImage.c)
 *     CmKeyBodyRemapToVirtual @ 0x14069045C (CmKeyBodyRemapToVirtual.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140690658 (CmKeyBodyReplicateToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140693C54 (CmpGlobalUnlockKeyForWrite.c)
 *     CmDumpKey @ 0x14069C6E4 (CmDumpKey.c)
 *     CmRestoreKey @ 0x14069C888 (CmRestoreKey.c)
 *     CmSaveKey @ 0x14069D3CC (CmSaveKey.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x140084E80 (ExReleasePushLockEx.c)
 *     CmpFreeKeyControlBlock @ 0x140478B50 (CmpFreeKeyControlBlock.c)
 */

void __fastcall CmpUnlockKcb(ULONG_PTR BugCheckParameter2)
{
  int v2; // edi

  v2 = *(_DWORD *)(BugCheckParameter2 + 4) & 0x80000;
  if ( *(struct _KTHREAD **)(BugCheckParameter2 + 48) == KeGetCurrentThread() )
    *(_QWORD *)(BugCheckParameter2 + 48) = 0LL;
  else
    _InterlockedDecrement((volatile signed __int32 *)(BugCheckParameter2 + 48));
  ExReleasePushLockEx(BugCheckParameter2 + 40, 0LL);
  if ( v2 )
  {
    if ( (*(_DWORD *)(BugCheckParameter2 + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(BugCheckParameter2);
  }
}
