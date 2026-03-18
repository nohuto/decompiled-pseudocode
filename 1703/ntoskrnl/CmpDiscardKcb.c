/*
 * XREFs of CmpDiscardKcb @ 0x1404D00DC
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
 *     CmpRemoveKeyHash @ 0x14044A4A4 (CmpRemoveKeyHash.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14044CC04 (CmpDelayDerefKeyControlBlock.c)
 *     CmpLockDeletedHashEntryExclusiveByKcb @ 0x1404D0244 (CmpLockDeletedHashEntryExclusiveByKcb.c)
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
      v11 = (_QWORD *)v1[1];
      if ( *(_QWORD **)(*v1 + 8LL) != v1 || (_QWORD *)*v11 != v1 )
        __fastfail(3u);
      *v11 = v9;
      *(_QWORD *)(v9 + 8) = v11;
      *(_QWORD *)(*(_QWORD *)(BugCheckParameter4 + 184) + 24LL) = 0LL;
      CmpDelayDerefKeyControlBlock(v10);
    }
  }
  v3 = *(_QWORD *)(BugCheckParameter4 + 24);
  *(_DWORD *)(BugCheckParameter4 + 4) |= 0x20000u;
  *(_WORD *)(BugCheckParameter4 + 58) = 0;
  CmpRemoveKeyHash(v3, (_DWORD *)(BugCheckParameter4 + 8));
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
