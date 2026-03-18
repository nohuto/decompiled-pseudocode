/*
 * XREFs of CmListGetNextElement @ 0x1404D4148
 * Callers:
 *     CmpIsCmRm @ 0x14042C83C (CmpIsCmRm.c)
 *     CmpSearchForTrans @ 0x14042DB64 (CmpSearchForTrans.c)
 *     CmpTransMgrRollback @ 0x14042E45C (CmpTransMgrRollback.c)
 *     CmpTransMgrPrepare @ 0x14042E724 (CmpTransMgrPrepare.c)
 *     CmpLogCheckpoint @ 0x14042EAB0 (CmpLogCheckpoint.c)
 *     CmSnapshotRMTxArray @ 0x1404CA4DC (CmSnapshotRMTxArray.c)
 *     CmpTransMgrCommit @ 0x1404CD8C4 (CmpTransMgrCommit.c)
 *     CmGetVisibleSubkeyCount @ 0x1404CFF48 (CmGetVisibleSubkeyCount.c)
 *     CmpIsKeyStackDeleted @ 0x1404D4080 (CmpIsKeyStackDeleted.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1404FD280 (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmEnumerateKey @ 0x1404FD790 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404FDC10 (CmpFindSubKeyByNumberEx.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140501430 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 *     CmQueryValueKey @ 0x1405063C0 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1405343E0 (CmpDoParseKey.c)
 *     CmUnRegisterCallback @ 0x140660520 (CmUnRegisterCallback.c)
 *     CmpCleanupLightWeightPrepare @ 0x1406697BC (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x140669A1C (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x140669B9C (CmpPrepareLightWeightTransaction.c)
 *     CmpRmAnalysisPhase @ 0x14066C028 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x14066C3E0 (CmpRmUnDoPhase.c)
 *     CmpLightWeightUpdateModificationActions @ 0x1406758BC (CmpLightWeightUpdateModificationActions.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x140675918 (CmpLightWeightUpdateSharedSetValueData.c)
 * Callees:
 *     <none>
 */

char *__fastcall CmListGetNextElement(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // r9
  char *result; // rax

  if ( !*a2 )
    *a2 = *a1;
  v3 = (_QWORD *)*a2;
  if ( a1 == (_QWORD *)*a2 )
    return 0LL;
  result = (char *)v3 - a3;
  *a2 = *v3;
  return result;
}
