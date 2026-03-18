/*
 * XREFs of ExfUnblockPushLock @ 0x1401A70F0
 * Callers:
 *     RtlpAtomMapAtomToHandleEntry @ 0x1404B6ACC (RtlpAtomMapAtomToHandleEntry.c)
 *     ObpReferenceProcessObjectByHandle @ 0x1404B7360 (ObpReferenceProcessObjectByHandle.c)
 *     PspClearProcessThreadCidRefs @ 0x1404B7BE4 (PspClearProcessThreadCidRefs.c)
 *     ObQueryObjectAuditingByHandle @ 0x1404B8520 (ObQueryObjectAuditingByHandle.c)
 *     AlpcpLookupMessage @ 0x1404CDFA0 (AlpcpLookupMessage.c)
 *     NtWriteFile @ 0x1404D10C0 (NtWriteFile.c)
 *     RtlQueryAtomInAtomTable @ 0x140547C00 (RtlQueryAtomInAtomTable.c)
 *     ObpEnumFindHandleProcedure @ 0x14054B940 (ObpEnumFindHandleProcedure.c)
 *     CmpCommitLightWeightTransaction @ 0x14054BE4C (CmpCommitLightWeightTransaction.c)
 *     CmpPerformUnloadKey @ 0x14054D0B4 (CmpPerformUnloadKey.c)
 *     CmpWorkerEngineWorker @ 0x14054D500 (CmpWorkerEngineWorker.c)
 *     CmpCompleteUnloadKey @ 0x14054D8E8 (CmpCompleteUnloadKey.c)
 *     NtSetInformationObject @ 0x140550ED0 (NtSetInformationObject.c)
 *     ObpProcessRemoveObjectQueue @ 0x140552770 (ObpProcessRemoveObjectQueue.c)
 *     ExDupHandleTable @ 0x1405533A0 (ExDupHandleTable.c)
 *     ObInheritObjectHandle @ 0x14055384C (ObInheritObjectHandle.c)
 *     ObSetHandleAttributes @ 0x140560C10 (ObSetHandleAttributes.c)
 *     CmpEnumerateCallback @ 0x140584370 (CmpEnumerateCallback.c)
 *     PspReferenceCidTableEntry @ 0x14059B080 (PspReferenceCidTableEntry.c)
 *     ObWaitForMultipleObjects @ 0x1405A40F0 (ObWaitForMultipleObjects.c)
 *     ObpReferenceObjectByHandleWithTag @ 0x1405A4770 (ObpReferenceObjectByHandleWithTag.c)
 *     ObCloseHandleTableEntry @ 0x1405A4E20 (ObCloseHandleTableEntry.c)
 *     CmpCallCallBacksEx @ 0x1405A7050 (CmpCallCallBacksEx.c)
 *     MiLockImageSection @ 0x1405BB208 (MiLockImageSection.c)
 *     ExQueryProcessHandleInformation @ 0x1405C0B08 (ExQueryProcessHandleInformation.c)
 *     CmpTransSearchAddTrans @ 0x1405E145C (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1405E16EC (CmpTransInitializeTransaction.c)
 *     ExUnlockHandleTableEntry @ 0x1405F1850 (ExUnlockHandleTableEntry.c)
 *     PopBatteryWorker @ 0x140610630 (PopBatteryWorker.c)
 *     CmpFreeCallbackObjectContexts @ 0x1406EDD90 (CmpFreeCallbackObjectContexts.c)
 *     IopIsFileOpenOrSection @ 0x14071E2B0 (IopIsFileOpenOrSection.c)
 *     PnpHandleProcessWalkWorker @ 0x140726BD0 (PnpHandleProcessWalkWorker.c)
 *     ObAuditInheritedHandleProcedure @ 0x1407586A0 (ObAuditInheritedHandleProcedure.c)
 *     ObpShutdownCloseHandleProcedure @ 0x140758B30 (ObpShutdownCloseHandleProcedure.c)
 *     ObpAuditObjectAccess @ 0x140758D94 (ObpAuditObjectAccess.c)
 *     EtwpObjectHandleEnumCallback @ 0x1407AEEA0 (EtwpObjectHandleEnumCallback.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1407BA190 (EtwpSavePersistedLoggersWorker.c)
 *     ExpSnapShotHandleTables @ 0x1407BD5E8 (ExpSnapShotHandleTables.c)
 * Callees:
 *     ExpUnblockPushLock @ 0x1400A20F4 (ExpUnblockPushLock.c)
 */

LONG __fastcall ExfUnblockPushLock(volatile __int64 *a1, void *a2)
{
  return ExpUnblockPushLock(a1, a2, 0);
}
