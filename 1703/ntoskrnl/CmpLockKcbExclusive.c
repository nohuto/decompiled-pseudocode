/*
 * XREFs of CmpLockKcbExclusive @ 0x1404916C8
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14007FC2C (CmpRemoveHiveFromNamespace.c)
 *     CmpDelayCloseWorker @ 0x1404908F0 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x140490D70 (CmpDereferenceKeyControlBlock.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x1404917CC (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1404CACEC (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpTransMgrCommitUoW @ 0x1404CDAB8 (CmpTransMgrCommitUoW.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404CE2D0 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockKcbStackExclusive @ 0x1404CFFD8 (CmpLockKcbStackExclusive.c)
 *     CmEnumerateValueKey @ 0x1404FF740 (CmEnumerateValueKey.c)
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x140506F30 (CmpDeleteKeyObject.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x140533590 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmpVEExecuteOpenLogic @ 0x140538520 (CmpVEExecuteOpenLogic.c)
 *     CmKeyBodyReplicateToVirtual @ 0x14056AABC (CmKeyBodyReplicateToVirtual.c)
 *     CmpStartSiloRegistryNamespace @ 0x1405A383C (CmpStartSiloRegistryNamespace.c)
 *     EnlistKeyBodyWithKCB @ 0x1405A3D84 (EnlistKeyBodyWithKCB.c)
 *     CmLockKeyForWrite @ 0x1405C649C (CmLockKeyForWrite.c)
 *     CmSetKeyFlags @ 0x1406645C4 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140664A64 (CmSetLastWriteTimeKey.c)
 *     CmpResolveHiveLoadConflict @ 0x1406653F8 (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406662B0 (CmpSearchKeyControlBlockTreeEx.c)
 *     DelistKeyBodyFromKCB @ 0x140666448 (DelistKeyBodyFromKCB.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140668EDC (CmpGlobalUnlockKeyForWrite.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x14066D79C (CmpEnumerateAllHigherLayerKcbs.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x1400F0760 (ExAcquirePushLockExclusiveEx.c)
 *     CmpLockTableAdd @ 0x1401DFA5C (CmpLockTableAdd.c)
 */

struct _KTHREAD *__fastcall CmpLockKcbExclusive(__int64 a1)
{
  struct _KTHREAD *result; // rax

  if ( (*(_DWORD *)(a1 + 4) & 0x100000) != 0 )
    *(_DWORD *)(a1 + 60) = CmpLockTableAdd(a1, 1);
  ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 48) = result;
  return result;
}
