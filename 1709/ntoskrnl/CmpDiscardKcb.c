/*
 * XREFs of CmpDiscardKcb @ 0x140472C60
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
 *     CmpUnlockDeletedHashEntryByKcb @ 0x140472D04 (CmpUnlockDeletedHashEntryByKcb.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x140472DD0 (CmpLockDeletedHashEntryExclusiveByKcb.c)
 *     CmpDelayDerefKeyControlBlock @ 0x140478AA0 (CmpDelayDerefKeyControlBlock.c)
 *     CmpRemoveKeyHash @ 0x140593894 (CmpRemoveKeyHash.c)
 */

__int64 __fastcall CmpDiscardKcb(ULONG_PTR BugCheckParameter4)
{
  _QWORD *v1; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // rcx
  unsigned __int64 v6; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rcx
  _QWORD *v11; // rdx

  v1 = *(_QWORD **)(BugCheckParameter4 + 184);
  if ( v1 )
  {
    v8 = v1[3];
    if ( v8 )
    {
      v9 = *v1;
      v10 = *(_QWORD *)(v8 + 16);
      if ( *(_QWORD **)(*v1 + 8LL) != v1 || (v11 = (_QWORD *)v1[1], (_QWORD *)*v11 != v1) )
        __fastfail(3u);
      *v11 = v9;
      *(_QWORD *)(v9 + 8) = v11;
      *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 184) + 24LL) = 0LL;
      CmpDelayDerefKeyControlBlock(v10);
    }
  }
  v3 = *(_QWORD *)(BugCheckParameter4 + 24);
  ++*(_QWORD *)(BugCheckParameter4 + 296);
  *(_DWORD *)(BugCheckParameter4 + 4) |= 0x20000u;
  *(_WORD *)(BugCheckParameter4 + 58) = 0;
  CmpRemoveKeyHash(v3, BugCheckParameter4 + 8);
  CmpLockDeletedHashEntryExclusiveByKcb(BugCheckParameter4);
  v4 = *(_QWORD *)(BugCheckParameter4 + 24);
  v5 = *(_QWORD *)(v4 + 2816);
  v6 = 3
     * ((unsigned int)(*(_DWORD *)(v4 + 2824) - 1) & ((unsigned int)(101027
                                                                   * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) >> 9)));
  *(_QWORD *)(BugCheckParameter4 + 16) = *(_QWORD *)(v5
                                                   + 24
                                                   * ((unsigned int)(*(_DWORD *)(v4 + 2824) - 1) & ((unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(BugCheckParameter4 + 8) ^ (*(_DWORD *)(BugCheckParameter4 + 8) >> 9))) >> 9)))
                                                   + 16);
  *(_QWORD *)(v5 + 8 * v6 + 16) = BugCheckParameter4 + 8;
  return CmpUnlockDeletedHashEntryByKcb(BugCheckParameter4);
}
