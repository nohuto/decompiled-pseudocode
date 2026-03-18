/*
 * XREFs of CmListGetNextElement @ 0x14056A314
 * Callers:
 *     CmpCleanupLightWeightPrepare @ 0x14044BA6C (CmpCleanupLightWeightPrepare.c)
 *     CmpCommitPreparedLightWeightTransaction @ 0x14044BBC8 (CmpCommitPreparedLightWeightTransaction.c)
 *     CmpPrepareLightWeightTransaction @ 0x14044BCDC (CmpPrepareLightWeightTransaction.c)
 *     CmpLightWeightUpdateSharedSetValueData @ 0x14044C464 (CmpLightWeightUpdateSharedSetValueData.c)
 *     CmGetVisibleSubkeyCount @ 0x140472B8C (CmGetVisibleSubkeyCount.c)
 *     CmpWalkOneLevel @ 0x140480060 (CmpWalkOneLevel.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140482380 (CmpIsKeyDeletedForKeyBody.c)
 *     CmpFindSubKeyByNumberEx @ 0x1404824B0 (CmpFindSubKeyByNumberEx.c)
 *     CmQueryValueKey @ 0x1404AB970 (CmQueryValueKey.c)
 *     CmpDoParseKey @ 0x1404B47B0 (CmpDoParseKey.c)
 *     CmpTransMgrRollback @ 0x14056964C (CmpTransMgrRollback.c)
 *     CmSnapshotRMTxArray @ 0x140569704 (CmSnapshotRMTxArray.c)
 *     CmpIsKeyStackDeleted @ 0x140569C20 (CmpIsKeyStackDeleted.c)
 *     CmpQueryKeyDataFromCache @ 0x140569F50 (CmpQueryKeyDataFromCache.c)
 *     CmpIsCmRm @ 0x14056A274 (CmpIsCmRm.c)
 *     CmGetVisibleMaxNameLenAndClassLen @ 0x140584EDC (CmGetVisibleMaxNameLenAndClassLen.c)
 *     CmpTransMgrPrepare @ 0x1405A5024 (CmpTransMgrPrepare.c)
 *     CmpTransMgrCommit @ 0x1405A51A4 (CmpTransMgrCommit.c)
 *     CmpSearchForTrans @ 0x1405D7064 (CmpSearchForTrans.c)
 *     CmpLogCheckpoint @ 0x1405E3310 (CmpLogCheckpoint.c)
 *     CmUnRegisterCallback @ 0x140689490 (CmUnRegisterCallback.c)
 *     CmpRmAnalysisPhase @ 0x140696694 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x140696A54 (CmpRmUnDoPhase.c)
 *     CmpLightWeightUpdateModificationActions @ 0x14069FE44 (CmpLightWeightUpdateModificationActions.c)
 * Callees:
 *     <none>
 */

char *__fastcall CmListGetNextElement(_QWORD *a1, _QWORD *a2, int a3)
{
  _QWORD *v3; // rax

  if ( !*a2 )
    *a2 = *a1;
  v3 = (_QWORD *)*a2;
  if ( a1 == (_QWORD *)*a2 )
    return 0LL;
  *a2 = *v3;
  return (char *)v3 - a3;
}
