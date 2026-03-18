/*
 * XREFs of CmpCommitDiscardReplacePost @ 0x1406FABE0
 * Callers:
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x1406FAB8C (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404959F8 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpRebuildKcbCache @ 0x1404985B8 (CmpRebuildKcbCache.c)
 *     CmpDiscardKcb @ 0x14049AB30 (CmpDiscardKcb.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404A8840 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x1404AB0A4 (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpMarkKeyUnbacked @ 0x14054DED8 (CmpMarkKeyUnbacked.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x1406F38B0 (CmpSearchKeyControlBlockTreeEx.c)
 */

__int64 __fastcall CmpCommitDiscardReplacePost(ULONG_PTR BugCheckParameter2, __int64 a2)
{
  __int64 v2; // rdx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  ULONG_PTR v6; // rbx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  _QWORD **v11; // rax
  _QWORD *v12; // rsi
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a2 + 16;
  v4 = *(_QWORD **)v2;
  if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 || (v5 = *v4, *(_QWORD **)(*v4 + 8LL) != v4) )
    __fastfail(3u);
  *(_QWORD *)v2 = v5;
  v6 = (ULONG_PTR)(v4 - 14);
  *(_QWORD *)(v5 + 8) = v2;
  v4[1] = v4;
  *v4 = v4;
  *((_WORD *)v4 - 27) = *(_WORD *)(BugCheckParameter2 + 58);
  v4[9] = *(_QWORD *)(BugCheckParameter2 + 184);
  *(_QWORD *)(BugCheckParameter2 + 184) = 0LL;
  *(_WORD *)(BugCheckParameter2 + 58) = 0;
  *(_QWORD *)(v4[9] + 16LL) = v4 - 14;
  v7 = *(_DWORD *)(BugCheckParameter2 + 32);
  if ( v7 != -1 )
  {
    *(_DWORD *)(v6 + 32) = v7;
    CmpMarkKeyUnbacked(BugCheckParameter2);
    CmpRebuildKcbCache(v6);
  }
  CmpDiscardKcb(BugCheckParameter2);
  v8 = *(_QWORD *)(v6 + 24);
  v9 = *(_QWORD *)(v8 + 1640);
  v10 = 3
      * ((unsigned int)(*(_DWORD *)(v8 + 1648) - 1) & ((unsigned int)(101027
                                                                    * (*(_DWORD *)(v6 + 8) ^ (*(_DWORD *)(v6 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v6 + 8) ^ (*(_DWORD *)(v6 + 8) >> 9))) >> 9)));
  *(_QWORD *)(v6 + 16) = *(_QWORD *)(v9
                                   + 24
                                   * ((unsigned int)(*(_DWORD *)(v8 + 1648) - 1) & ((unsigned int)(101027
                                                                                                 * (*(_DWORD *)(v6 + 8) ^ (*(_DWORD *)(v6 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v6 + 8) ^ (*(_DWORD *)(v6 + 8) >> 9))) >> 9)))
                                   + 16);
  *(_QWORD *)(v9 + 8 * v10 + 16) = v6 + 8;
  v11 = (_QWORD **)(*(_QWORD *)(v6 + 184) + 32LL);
  v12 = *v11;
  while ( v12 != v11 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)v6);
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)BugCheckParameter2);
    v12 = (_QWORD *)*v12;
    v11 = (_QWORD **)(*(_QWORD *)(v6 + 184) + 32LL);
  }
  v14[0] = BugCheckParameter2;
  v14[1] = v6;
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(ULONG_PTR, ULONG_PTR, __int64))CmpRefreshParent,
    *(_QWORD *)(v6 + 24),
    (__int64)v14,
    0);
  CmpDereferenceKeyControlBlockWithLock(BugCheckParameter2);
  CmpDereferenceKeyControlBlockWithLock(v6);
  return 0LL;
}
