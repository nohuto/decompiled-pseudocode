/*
 * XREFs of CmpCommitDiscardReplacePost @ 0x140697C10
 * Callers:
 *     CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers @ 0x140697BB8 (CmpCommitDiscardAndReplaceKcbAndUnbackedHigherLayers.c)
 * Callees:
 *     CmpDiscardKcb @ 0x140472C60 (CmpDiscardKcb.c)
 *     CmpMarkKeyUnbacked @ 0x140472E5C (CmpMarkKeyUnbacked.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404784E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     CmpReferenceKeyControlBlockUnsafe @ 0x14047F63C (CmpReferenceKeyControlBlockUnsafe.c)
 *     CmpDereferenceKeyControlBlockUnsafe @ 0x1404E6360 (CmpDereferenceKeyControlBlockUnsafe.c)
 *     CmpRebuildKcbCache @ 0x1405695C4 (CmpRebuildKcbCache.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x14068FD50 (CmpSearchKeyControlBlockTreeEx.c)
 */

__int64 __fastcall CmpCommitDiscardReplacePost(ULONG_PTR a1, __int64 a2)
{
  __int64 **v2; // rdx
  __int64 *v4; // rbx
  __int64 *v5; // rax
  ULONG_PTR v6; // rbx
  int v7; // eax
  __int64 v8; // r8
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  _QWORD **v11; // rax
  _QWORD *v12; // rsi
  _QWORD v14[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (__int64 **)(a2 + 16);
  v4 = *v2;
  if ( (__int64 **)(*v2)[1] != v2 || (v5 = (__int64 *)*v4, *(__int64 **)(*v4 + 8) != v4) )
    __fastfail(3u);
  *v2 = v5;
  v6 = (ULONG_PTR)(v4 - 14);
  v5[1] = (__int64)v2;
  *(_QWORD *)(v6 + 120) = v6 + 112;
  *(_QWORD *)(v6 + 112) = v6 + 112;
  *(_WORD *)(v6 + 58) = *(_WORD *)(a1 + 58);
  *(_QWORD *)(v6 + 184) = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 184) = 0LL;
  *(_WORD *)(a1 + 58) = 0;
  *(_QWORD *)(*(_QWORD *)(v6 + 184) + 16LL) = v6;
  v7 = *(_DWORD *)(a1 + 32);
  if ( v7 != -1 )
  {
    *(_DWORD *)(v6 + 32) = v7;
    CmpMarkKeyUnbacked(a1);
    CmpRebuildKcbCache(v6);
  }
  CmpDiscardKcb(a1);
  v8 = *(_QWORD *)(v6 + 24);
  v9 = *(_QWORD *)(v8 + 2800);
  v10 = 3
      * ((unsigned int)(*(_DWORD *)(v8 + 2808) - 1) & ((unsigned int)(101027
                                                                    * (*(_DWORD *)(v6 + 8) ^ (*(_DWORD *)(v6 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v6 + 8) ^ (*(_DWORD *)(v6 + 8) >> 9))) >> 9)));
  *(_QWORD *)(v6 + 16) = *(_QWORD *)(v9
                                   + 24
                                   * ((unsigned int)(*(_DWORD *)(v8 + 2808) - 1) & ((unsigned int)(101027
                                                                                                 * (*(_DWORD *)(v6 + 8) ^ (*(_DWORD *)(v6 + 8) >> 9))) ^ ((unsigned __int64)(unsigned int)(101027 * (*(_DWORD *)(v6 + 8) ^ (*(_DWORD *)(v6 + 8) >> 9))) >> 9)))
                                   + 16);
  *(_QWORD *)(v9 + 8 * v10 + 16) = v6 + 8;
  v11 = (_QWORD **)(*(_QWORD *)(v6 + 184) + 32LL);
  v12 = *v11;
  while ( v12 != v11 )
  {
    CmpReferenceKeyControlBlockUnsafe((volatile signed __int32 *)v6);
    CmpDereferenceKeyControlBlockUnsafe((volatile signed __int32 *)a1);
    v12 = (_QWORD *)*v12;
    v11 = (_QWORD **)(*(_QWORD *)(v6 + 184) + 32LL);
  }
  v14[0] = a1;
  v14[1] = v6;
  CmpSearchKeyControlBlockTreeEx(
    (__int64 (__fastcall *)(__int64, ULONG_PTR, __int64))CmpRefreshParent,
    *(_QWORD *)(v6 + 24),
    (__int64)v14,
    0);
  CmpDereferenceKeyControlBlockWithLock(a1);
  CmpDereferenceKeyControlBlockWithLock(v6);
  return 0LL;
}
