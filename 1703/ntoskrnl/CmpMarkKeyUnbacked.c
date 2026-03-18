/*
 * XREFs of CmpMarkKeyUnbacked @ 0x1404D0304
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x14007FC2C (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1401E0660 (CmDeleteLayeredKey.c)
 *     CmpCompleteUnloadKey @ 0x1404CD454 (CmpCompleteUnloadKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404CE2D0 (CmpTransMgrFreeVolatileData.c)
 *     CmDeleteKey @ 0x1404CF840 (CmDeleteKey.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 *     CmpInvalidateSubtreeWorker @ 0x140666090 (CmpInvalidateSubtreeWorker.c)
 *     CmpSearchAndDerefWorker @ 0x1406661E0 (CmpSearchAndDerefWorker.c)
 *     CmpCommitDiscardReplacePost @ 0x14066D5A0 (CmpCommitDiscardReplacePost.c)
 *     CmpForceInvalidatePostCallback @ 0x14066D990 (CmpForceInvalidatePostCallback.c)
 *     CmpRefreshWorkerRoutine @ 0x1406732D0 (CmpRefreshWorkerRoutine.c)
 *     CmpCommitDeleteKeyUoW @ 0x140673690 (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x140673838 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x140673E8C (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x140674188 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpCleanUpKcbValueCache @ 0x140491380 (CmpCleanUpKcbValueCache.c)
 */

void __fastcall CmpMarkKeyUnbacked(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 32) = -1;
  *(_BYTE *)(a1 + 57) = v1 && *(_BYTE *)(v1 + 57) == 3;
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
