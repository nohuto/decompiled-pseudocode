/*
 * XREFs of CmListGetNextElement @ 0x14054F160
 * Callers:
 *     CmpIsKeyStackDeleted @ 0x1404A5D2C (CmpIsKeyStackDeleted.c)
 *     CmpWalkOneLevel @ 0x1404AA800 (CmpWalkOneLevel.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404ACF50 (CmpFindSubKeyByNumberEx.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x1404AECB0 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpTransMgrRollback @ 0x14054BC94 (CmpTransMgrRollback.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x14054E9B4 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14054EAD4 (CmpPrepareLightWeightTransaction.c)
 *     CmpCleanupLightWeightPrepare @ 0x14054EBE4 (CmpCleanupLightWeightPrepare.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x14054EC34 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmGetVisibleSubkeyCount @ 0x14054EC80 (CmGetVisibleSubkeyCount.c)
 *     CmSnapshotRMTxArray @ 0x14054F008 (CmSnapshotRMTxArray.c)
 *     CmpIsCmRm @ 0x14054F0C0 (CmpIsCmRm.c)
 *     CmpQueryKeyDataFromCache @ 0x140553DC0 (CmpQueryKeyDataFromCache.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x1405767BC (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmQueryValueKey @ 0x1405A0B80 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1405A7800 (CmpDoParseKey.c)
 *     CmpTransMgrPrepare @ 0x1405DEE1C (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1405DEFD8 (CmpTransMgrCommit.c)
 *     CmpSearchForTrans @ 0x1405E167C (CmpSearchForTrans.c)
 *     CmpLogCheckpoint @ 0x1405E790C (CmpLogCheckpoint.c)
 *     CmUnRegisterCallback @ 0x1406ED880 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x1406FA108 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x1406FA4C8 (CmpRmUnDoPhase.c)
 *     CmpLightWeightUpdateModificationActions @ 0x1407055FC (CmpLightWeightUpdateModificationActions.c)
 * Callees:
 *     <none>
 */

char *__fastcall CmListGetNextElement(_QWORD **a1, _QWORD **a2, int a3)
{
  _QWORD *v3; // rax

  v3 = *a2;
  if ( !*a2 )
  {
    v3 = *a1;
    *a2 = *a1;
  }
  if ( a1 == v3 )
    return 0LL;
  *a2 = (_QWORD *)*v3;
  return (char *)v3 - a3;
}
