/*
 * XREFs of CmpTransDereferenceTransaction @ 0x140568FAC
 * Callers:
 *     CmpDeleteKeyObject @ 0x1404A97C0 (CmpDeleteKeyObject.c)
 *     CmpCreateKeyBody @ 0x1404B8240 (CmpCreateKeyBody.c)
 *     CmpCleanupRollbackPacket @ 0x1404E691C (CmpCleanupRollbackPacket.c)
 *     CmpCleanupLightWeightTransaction @ 0x1405689D4 (CmpCleanupLightWeightTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x140568A70 (NtOpenKeyTransactedEx.c)
 *     NtCreateKeyTransacted @ 0x140568BB4 (NtCreateKeyTransacted.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x140568E08 (CmpTransSearchAddLightWeightTrans.c)
 *     CmRmFinalizeRecovery @ 0x14059BF00 (CmRmFinalizeRecovery.c)
 *     CmpTransSearchAddTrans @ 0x1405D6E48 (CmpTransSearchAddTrans.c)
 *     CmpTransInitializeTransaction @ 0x1405D70D4 (CmpTransInitializeTransaction.c)
 *     CmpCleanupTransactionState @ 0x1405E31E8 (CmpCleanupTransactionState.c)
 *     CmpAbortRollbackPacket @ 0x1405F2D18 (CmpAbortRollbackPacket.c)
 *     CmpRollbackTransactionArray @ 0x1406961BC (CmpRollbackTransactionArray.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1400841C0 (ObfDereferenceObject.c)
 */

LONG_PTR __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  return ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
