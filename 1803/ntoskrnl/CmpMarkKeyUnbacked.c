/*
 * XREFs of CmpMarkKeyUnbacked @ 0x14054DED8
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x1400A1E60 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x140222964 (CmDeleteLayeredKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x140498730 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x14049FF78 (CmDeleteKey.c)
 *     CmpCompleteUnloadKey @ 0x14054D8E8 (CmpCompleteUnloadKey.c)
 *     CmpInvalidateSubtreeWorker @ 0x1405EDF90 (CmpInvalidateSubtreeWorker.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 *     CmpCommitDiscardReplacePost @ 0x1406FABE0 (CmpCommitDiscardReplacePost.c)
 *     CmpInvalidateAllHigherLayerKcbsPostCallback @ 0x1406FB0B0 (CmpInvalidateAllHigherLayerKcbsPostCallback.c)
 *     CmpRefreshWorkerRoutine @ 0x1407034F0 (CmpRefreshWorkerRoutine.c)
 *     CmpCommitDeleteKeyUoW @ 0x140703850 (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x140703A10 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x1407040FC (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140704408 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpCleanUpKcbValueCache @ 0x1404A99D4 (CmpCleanUpKcbValueCache.c)
 */

void __fastcall CmpMarkKeyUnbacked(__int64 a1)
{
  char v1; // al
  __int64 v3; // rcx

  v1 = 1;
  ++*(_QWORD *)(a1 + 296);
  *(_DWORD *)(a1 + 32) = -1;
  v3 = *(_QWORD *)(a1 + 64);
  if ( !v3 || *(_BYTE *)(v3 + 57) != 3 )
    v1 = 0;
  *(_BYTE *)(a1 + 57) = v1;
  CmpCleanUpKcbValueCache(a1);
  *(_WORD *)(a1 + 178) &= 4u;
  *(_DWORD *)(a1 + 176) &= 0xFFFFFF00;
  *(_QWORD *)(a1 + 96) = 0xFFFFFFFFLL;
  *(_BYTE *)(a1 + 177) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
}
