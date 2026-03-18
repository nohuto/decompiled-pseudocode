/*
 * XREFs of CmpTransDereferenceTransaction @ 0x14042DE48
 * Callers:
 *     CmpCleanupTransactionState @ 0x14042D17C (CmpCleanupTransactionState.c)
 *     CmpCleanupLightWeightTransaction @ 0x14042D494 (CmpCleanupLightWeightTransaction.c)
 *     NtOpenKeyTransactedEx @ 0x14042D618 (NtOpenKeyTransactedEx.c)
 *     NtCreateKeyTransacted @ 0x14042D75C (NtCreateKeyTransacted.c)
 *     CmpTransSearchAddTrans @ 0x14042D944 (CmpTransSearchAddTrans.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x14042DCA4 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpTransInitializeTransaction @ 0x14042E514 (CmpTransInitializeTransaction.c)
 *     CmRmFinalizeRecovery @ 0x1404CBACC (CmRmFinalizeRecovery.c)
 *     CmpCleanupRollbackPacket @ 0x1404CC6FC (CmpCleanupRollbackPacket.c)
 *     CmpDeleteKeyObject @ 0x140506F30 (CmpDeleteKeyObject.c)
 *     CmpCreateKeyBody @ 0x140538160 (CmpCreateKeyBody.c)
 *     CmpAbortRollbackPacket @ 0x14059B764 (CmpAbortRollbackPacket.c)
 *     CmpRollbackTransactionArray @ 0x14066BB50 (CmpRollbackTransactionArray.c)
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall CmpTransDereferenceTransaction(__int64 a1)
{
  return ObfDereferenceObject((PVOID)(a1 & 0xFFFFFFFFFFFFFFFEuLL));
}
