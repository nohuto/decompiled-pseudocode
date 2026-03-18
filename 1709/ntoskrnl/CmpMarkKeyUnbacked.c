/*
 * XREFs of CmpMarkKeyUnbacked @ 0x140472E5C
 * Callers:
 *     CmpRemoveHiveFromNamespace @ 0x140015CA8 (CmpRemoveHiveFromNamespace.c)
 *     CmDeleteLayeredKey @ 0x1401E47C0 (CmDeleteLayeredKey.c)
 *     CmpCompleteUnloadKey @ 0x14046FBB4 (CmpCompleteUnloadKey.c)
 *     CmDeleteKey @ 0x140472480 (CmDeleteKey.c)
 *     CmpTransMgrFreeVolatileData @ 0x1405691F0 (CmpTransMgrFreeVolatileData.c)
 *     CmRenameKey @ 0x14068CE58 (CmRenameKey.c)
 *     CmpInvalidateSubtreeWorker @ 0x14068FB10 (CmpInvalidateSubtreeWorker.c)
 *     CmpSearchAndDerefWorker @ 0x14068FC80 (CmpSearchAndDerefWorker.c)
 *     CmpCommitDiscardReplacePost @ 0x140697C10 (CmpCommitDiscardReplacePost.c)
 *     CmpForceInvalidatePostCallback @ 0x140697EB0 (CmpForceInvalidatePostCallback.c)
 *     CmpRefreshWorkerRoutine @ 0x14069E390 (CmpRefreshWorkerRoutine.c)
 *     CmpCommitDeleteKeyUoW @ 0x14069E61C (CmpCommitDeleteKeyUoW.c)
 *     CmpCommitRenameKeyUoW @ 0x14069E7D0 (CmpCommitRenameKeyUoW.c)
 *     CmpLightWeightCommitDeleteKeyUoW @ 0x14069EE20 (CmpLightWeightCommitDeleteKeyUoW.c)
 *     CmpLightWeightCommitRenameKeyUoW @ 0x14069F008 (CmpLightWeightCommitRenameKeyUoW.c)
 * Callees:
 *     CmpCleanUpKcbValueCache @ 0x1404789E8 (CmpCleanUpKcbValueCache.c)
 */

__int64 __fastcall CmpMarkKeyUnbacked(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  ++*(_QWORD *)(a1 + 296);
  v1 = *(_QWORD *)(a1 + 64);
  *(_DWORD *)(a1 + 32) = -1;
  *(_BYTE *)(a1 + 57) = v1 && *(_BYTE *)(v1 + 57) == 3;
  result = CmpCleanUpKcbValueCache(a1);
  *(_WORD *)(a1 + 178) &= 4u;
  *(_DWORD *)(a1 + 176) &= 0xFFFFFF00;
  *(_QWORD *)(a1 + 96) = 0xFFFFFFFFLL;
  *(_BYTE *)(a1 + 177) = 0;
  *(_DWORD *)(a1 + 88) = 0;
  *(_DWORD *)(a1 + 104) = 0;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_QWORD *)(a1 + 168) = 0LL;
  return result;
}
