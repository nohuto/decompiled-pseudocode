/*
 * XREFs of ExfUnblockPushLock @ 0x14017D4F0
 * Callers:
 *     CmpCommitLightWeightTransaction @ 0x14044B9BC (CmpCommitLightWeightTransaction.c)
 *     CmpPerformUnloadKey @ 0x14046E4FC (CmpPerformUnloadKey.c)
 *     CmpCompleteUnloadKey @ 0x14046FBB4 (CmpCompleteUnloadKey.c)
 *     AlpcpLookupMessage @ 0x1404A1F90 (AlpcpLookupMessage.c)
 *     ObWaitForMultipleObjects @ 0x1404A32F0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1404B1130 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandleTableEntry @ 0x1404B1D60 (ObCloseHandleTableEntry.c)
 *     CmpCallCallBacksEx @ 0x1404B3FE0 (CmpCallCallBacksEx.c)
 *     PsOpenProcess @ 0x1404C4620 (PsOpenProcess.c)
 *     PspReferenceCidTableEntry @ 0x1404C5740 (PspReferenceCidTableEntry.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1404D4CAC (RtlpAtomMapAtomToHandleEntry.c)
 *     PspClearProcessThreadCidRefs @ 0x1404D5438 (PspClearProcessThreadCidRefs.c)
 *     CmpWorkerEngineWorker @ 0x1404E66D0 (CmpWorkerEngineWorker.c)
 *     NtWriteFile @ 0x140505350 (NtWriteFile.c)
 *     ObpEnumFindHandleProcedure @ 0x140506430 (ObpEnumFindHandleProcedure.c)
 *     ExDupHandleTable @ 0x140506C10 (ExDupHandleTable.c)
 *     ObInheritObjectHandle @ 0x140507048 (ObInheritObjectHandle.c)
 *     MiLockImageSection @ 0x1405073A0 (MiLockImageSection.c)
 *     ObpReferenceProcessObjectByHandle @ 0x140507D70 (ObpReferenceProcessObjectByHandle.c)
 *     NtSetInformationObject @ 0x140566540 (NtSetInformationObject.c)
 *     ObpProcessRemoveObjectQueue @ 0x140568570 (ObpProcessRemoveObjectQueue.c)
 *     ObSetHandleAttributes @ 0x140571D00 (ObSetHandleAttributes.c)
 *     ObQueryObjectAuditingByHandle @ 0x140572530 (ObQueryObjectAuditingByHandle.c)
 *     CmpEnumerateCallback @ 0x14059E760 (CmpEnumerateCallback.c)
 *     PopBatteryWorker @ 0x1405C9580 (PopBatteryWorker.c)
 *     ExQueryProcessHandleInformation @ 0x1405D4F3C (ExQueryProcessHandleInformation.c)
 *     CmpTransSearchAddTrans @ 0x1405D6E48 (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1405D70D4 (CmpTransInitializeTransaction.c)
 *     CmpFreeCallbackObjectContexts @ 0x140689994 (CmpFreeCallbackObjectContexts.c)
 *     IopIsFileOpenOrSection @ 0x1406B9310 (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x1406C0EF0 (PnpHandleProcessWalkWorker.c)
 *     ObAuditInheritedHandleProcedure @ 0x1406EF1C0 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x1406EF630 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x1406EF914 (ObpAuditObjectAccess.c)
 *     EtwpObjectHandleEnumCallback @ 0x14074D630 (EtwpObjectHandleEnumCallback.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1407533E0 (EtwpSavePersistedLoggersWorker.c)
 *     ExUnlockHandleTableEntry @ 0x140756A20 (ExUnlockHandleTableEntry.c)
 *     ExpSnapShotHandleTables @ 0x140756B50 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1400BBEE8 (ExpUnblockPushLock.c)
 */

LONG __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  return ExpUnblockPushLock(a1, a2, 0);
}
