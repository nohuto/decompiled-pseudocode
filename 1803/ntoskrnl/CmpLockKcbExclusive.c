/*
 * XREFs of CmpLockKcbExclusive @ 0x14049D0D8
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1400A1E60 (CmpRemoveHiveFromNamespace.c)
 *     CmpTransMgrFreeVolatileData @ 0x140498730 (CmpTransMgrFreeVolatileData.c)
 *     CmpLockKcbStackExclusive @ 0x14049A938 (CmpLockKcbStackExclusive.c)
 *     CmpLockKcbStackTopExclusiveRestShared @ 0x14049C254 (CmpLockKcbStackTopExclusiveRestShared.c)
 *     CmpDelayCloseWorker @ 0x14049CE20 (CmpDelayCloseWorker.c)
 *     CmEnumerateValueKey @ 0x1404A6F00 (CmEnumerateValueKey.c)
 *     CmpDereferenceKeyControlBlock @ 0x1404A86C0 (CmpDereferenceKeyControlBlock.c)
 *     CmpCreateKeyControlBlock @ 0x1404AB0E0 (CmpCreateKeyControlBlock.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x14054E498 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpVEExecuteOpenLogic @ 0x140552590 (CmpVEExecuteOpenLogic.c)
 *     CmpDeleteKeyObject @ 0x14059F520 (CmpDeleteKeyObject.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1405A5560 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmpTransMgrCommitUoW @ 0x1405DF1D4 (CmpTransMgrCommitUoW.c)
 *     CmpStartSiloRegistryNamespace @ 0x140620458 (CmpStartSiloRegistryNamespace.c)
 *     EnlistKeyBodyWithKCB @ 0x14062E454 (EnlistKeyBodyWithKCB.c)
 *     CmLockKeyForWrite @ 0x140645D64 (CmLockKeyForWrite.c)
 *     CmSetKeyFlags @ 0x1406F1FB8 (CmSetKeyFlags.c)
 *     CmpResolveHiveLoadConflict @ 0x1406F2EDC (CmpResolveHiveLoadConflict.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406F38B0 (CmpSearchKeyControlBlockTreeEx.c)
 *     DelistKeyBodyFromKCB @ 0x1406F3A84 (DelistKeyBodyFromKCB.c)
 *     CmKeyBodyReplicateToVirtual @ 0x1406F4248 (CmKeyBodyReplicateToVirtual.c)
 *     CmpGlobalUnlockKeyForWrite @ 0x1406F6E44 (CmpGlobalUnlockKeyForWrite.c)
 *     CmpEnumerateAllHigherLayerKcbs @ 0x1406FADDC (CmpEnumerateAllHigherLayerKcbs.c)
 * Callees:
 *     ExAcquirePushLockExclusiveEx @ 0x140104050 (ExAcquirePushLockExclusiveEx.c)
 */

struct _KTHREAD *__fastcall CmpLockKcbExclusive(__int64 a1)
{
  struct _KTHREAD *result; // rax

  ExAcquirePushLockExclusiveEx(a1 + 40, 0LL);
  result = KeGetCurrentThread();
  *(_QWORD *)(a1 + 48) = result;
  return result;
}
