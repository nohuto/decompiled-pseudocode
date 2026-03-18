/*
 * XREFs of CmpUnlockKcb @ 0x140500590
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14007FC2C (CmpRemoveHiveFromNamespace.c)
 *     NtFlushKey @ 0x140455BC8 (NtFlushKey.c)
 *     CmpReferenceKeyControlBlockLockNotHeld @ 0x140459E68 (CmpReferenceKeyControlBlockLockNotHeld.c)
 *     NtNotifyChangeMultipleKeys @ 0x14048E630 (NtNotifyChangeMultipleKeys.c)
 *     CmQueryMultipleValueKey @ 0x14048FF38 (CmQueryMultipleValueKey.c)
 *     CmpDelayCloseWorker @ 0x1404908F0 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1404CACEC (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpTransMgrCommitUoW @ 0x1404CDAB8 (CmpTransMgrCommitUoW.c)
 *     CmpCloseKeyObject @ 0x1404CDE90 (CmpCloseKeyObject.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404CE2D0 (CmpTransMgrFreeVolatileData.c)
 *     CmpQueryKeyName @ 0x1404FC190 (CmpQueryKeyName.c)
 *     CmpUnlockTwoKcbs @ 0x1404FDB60 (CmpUnlockTwoKcbs.c)
 *     CmKeyBodyRemapToVirtualForEnum @ 0x1404FE030 (CmKeyBodyRemapToVirtualForEnum.c)
 *     CmEnumerateValueKey @ 0x1404FF740 (CmEnumerateValueKey.c)
 *     CmpUnlockKcbStack @ 0x1404FF9E0 (CmpUnlockKcbStack.c)
 *     CmpGetSymbolicLinkTarget @ 0x1404FFA30 (CmpGetSymbolicLinkTarget.c)
 *     CmQueryKey @ 0x140500AB0 (CmQueryKey.c)
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x140506F30 (CmpDeleteKeyObject.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140533590 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpCreateKeyBody @ 0x140538160 (CmpCreateKeyBody.c)
 *     CmpVEExecuteOpenLogic @ 0x140538520 (CmpVEExecuteOpenLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14056AABC (CmKeyBodyReplicateToVirtual.c)
 *     CmKeyBodyNeedsVirtualImage @ 0x14056C82C (CmKeyBodyNeedsVirtualImage.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x140572568 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpStartSiloRegistryNamespace @ 0x1405A383C (CmpStartSiloRegistryNamespace.c)
 *     EnlistKeyBodyWithKCB @ 0x1405A3D84 (EnlistKeyBodyWithKCB.c)
 *     CmLockKeyForWrite @ 0x1405C649C (CmLockKeyForWrite.c)
 *     CmSetKeyFlags @ 0x1406645C4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140664A64 (CmSetLastWriteTimeKey.c)
 *     CmpResolveHiveLoadConflict @ 0x1406653F8 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406662B0 (CmpSearchKeyControlBlockTreeEx.c)
 *     DelistKeyBodyFromKCB @ 0x140666448 (DelistKeyBodyFromKCB.c)
 *     CmKeyBodyRemapToVirtual @ 0x140666A94 (CmKeyBodyRemapToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140668EDC (CmpGlobalUnlockKeyForWrite.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14066D79C (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmDumpKey @ 0x140671674 (CmDumpKey.c)
 *     CmRestoreKey @ 0x140671810 (CmRestoreKey.c)
 *     CmSaveKey @ 0x140672300 (CmSaveKey.c)
 * Callees:
 *     ExReleasePushLockEx @ 0x1400F0C70 (ExReleasePushLockEx.c)
 *     CmpLockTableRemove @ 0x1401DFB90 (CmpLockTableRemove.c)
 *     CmpFreeKeyControlBlock @ 0x140491410 (CmpFreeKeyControlBlock.c)
 */

void __fastcall CmpUnlockKcb(__int64 P)
{
  int v2; // edi

  v2 = *(_DWORD *)(P + 4) & 0x80000;
  if ( *(struct _KTHREAD **)(P + 48) == KeGetCurrentThread() )
    *(_QWORD *)(P + 48) = 0LL;
  else
    _InterlockedDecrement((volatile signed __int32 *)(P + 48));
  ExReleasePushLockEx(P + 40, 0LL);
  if ( (*(_DWORD *)(P + 4) & 0x100000) != 0 )
    CmpLockTableRemove(P, *(_DWORD *)(P + 60));
  if ( v2 )
  {
    if ( (*(_DWORD *)(P + 4) & 0x80000) != 0 )
      CmpFreeKeyControlBlock(P);
  }
}
