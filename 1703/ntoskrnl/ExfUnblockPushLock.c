/*
 * XREFs of ExfUnblockPushLock @ 0x14017DAD0
 * Callers:
 *     ExQueryProcessHandleInformation @ 0x14041EA08 (ExQueryProcessHandleInformation.c)
 *     NtSetInformationObject @ 0x1404276F0 (NtSetInformationObject.c)
 *     ObpEnumFindHandleProcedure @ 0x140428740 (ObpEnumFindHandleProcedure.c)
 *     ObQueryObjectAuditingByHandle @ 0x140428870 (ObQueryObjectAuditingByHandle.c)
 *     ObpProcessRemoveObjectQueue @ 0x140428DC0 (ObpProcessRemoveObjectQueue.c)
 *     ExDupHandleTable @ 0x14042B980 (ExDupHandleTable.c)
 *     ObInheritObjectHandle @ 0x14042BE2C (ObInheritObjectHandle.c)
 *     CmpTransSearchAddTrans @ 0x14042D944 (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x14042E514 (CmpTransInitializeTransaction.c)
 *     ObSetHandleAttributes @ 0x14043EA90 (ObSetHandleAttributes.c)
 *     CmpEnumerateCallback @ 0x14045E600 (CmpEnumerateCallback.c)
 *     AlpcpLookupMessage @ 0x14047D360 (AlpcpLookupMessage.c)
 *     ObReferenceFileObjectForWrite @ 0x1404821C0 (ObReferenceFileObjectForWrite.c)
 *     MiLockImageSection @ 0x1404B2ED0 (MiLockImageSection.c)
 *     CmpPerformUnloadKey @ 0x1404CB738 (CmpPerformUnloadKey.c)
 *     CmpWorkerEngineWorker @ 0x1404CC4B0 (CmpWorkerEngineWorker.c)
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 *     PspClearProcessThreadCidRefs @ 0x1404F8D74 (PspClearProcessThreadCidRefs.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1404FA8D4 (RtlpAtomMapAtomToHandleEntry.c)
 *     PspReferenceCidTableEntry @ 0x14050F9F0 (PspReferenceCidTableEntry.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140517B10 (ObpReferenceProcessObjectByHandle.c)
 *     AlpcpSendMessage @ 0x140524190 (AlpcpSendMessage.c)
 *     ObWaitForMultipleObjects @ 0x140527380 (ObWaitForMultipleObjects.c)
 *     ObCloseHandleTableEntry @ 0x140530A90 (ObCloseHandleTableEntry.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x140531800 (ObpReferenceObjectByHandleWithTag.c)
 *     CmpCallCallBacksEx @ 0x140533C00 (CmpCallCallBacksEx.c)
 *     PopBatteryWorker @ 0x140582550 (PopBatteryWorker.c)
 *     CmpFreeCallbackObjectContexts @ 0x140660A04 (CmpFreeCallbackObjectContexts.c)
 *     CmpCommitLightWeightTransaction @ 0x140669900 (CmpCommitLightWeightTransaction.c)
 *     IopIsFileOpenOrSection @ 0x14068D630 (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x140695120 (PnpHandleProcessWalkWorker.c)
 *     ObAuditInheritedHandleProcedure @ 0x1406C06F0 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1406C0B80 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x1406C0E1C (ObpAuditObjectAccess.c)
 *     EtwpObjectHandleEnumCallback @ 0x140710550 (EtwpObjectHandleEnumCallback.c)
 *     EtwpSavePersistedLoggersWorker @ 0x140714260 (EtwpSavePersistedLoggersWorker.c)
 *     ExUnlockHandleTableEntry @ 0x1407172B0 (ExUnlockHandleTableEntry.c)
 *     ExpSnapShotHandleTables @ 0x1407173E0 (ExpSnapShotHandleTables.c)
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  return ExpUnblockPushLock(a1, a2, 0);
}
