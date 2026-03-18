/*
 * XREFs of CmpLockKcbExclusive @ 0x140478D48
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140015CA8 (CmpRemoveHiveFromNamespace.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x14046EBF0 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpLockKcbStackExclusive @ 0x140472C1C (CmpLockKcbStackExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x140477E80 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpDelayCloseWorker @ 0x140477EE0 (CmpDelayCloseWorker.c)
 *     CmpDereferenceKeyControlBlock @ 0x140478370 (CmpDereferenceKeyControlBlock.c)
 *     CmEnumerateValueKey @ 0x14047E740 (CmEnumerateValueKey.c)
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     CmpDeleteKeyObject @ 0x1404A97C0 (CmpDeleteKeyObject.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404B39C0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpVEExecuteOpenLogic @ 0x1404B85E0 (CmpVEExecuteOpenLogic.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405691F0 (CmpTransMgrFreeVolatileData.c)
 *     CmpTransMgrCommitUoW @ 0x1405A5398 (CmpTransMgrCommitUoW.c)
 *     CmpStartSiloRegistryNamespace @ 0x1405BFCC4 (CmpStartSiloRegistryNamespace.c)
 *     EnlistKeyBodyWithKCB @ 0x1405C098C (EnlistKeyBodyWithKCB.c)
 *     CmLockKeyForWrite @ 0x1405D90F8 (CmLockKeyForWrite.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1405F2DD8 (CmpEnumerateAllHigherLayerKcbs.c)
 *     CmSetKeyFlags @ 0x14068DC84 (CmSetKeyFlags.c)
 *     CmpResolveHiveLoadConflict @ 0x14068ECFC (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14068FD50 (CmpSearchKeyControlBlockTreeEx.c)
 *     DelistKeyBodyFromKCB @ 0x14068FEE8 (DelistKeyBodyFromKCB.c)
 *     CmKeyBodyReplicateToVirtual @ 0x140690658 (CmKeyBodyReplicateToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x140693C54 (CmpGlobalUnlockKeyForWrite.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140084A00 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *__fastcall CmpLockKcbExclusive(__int64 a1)
{
  struct _KTHREAD *result; // rax

  ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 48) = result;
  return result;
}
