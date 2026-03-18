/*
 * XREFs of CmpCleanupDiscardReplacePost @ 0x1406FAAB0
 * Callers:
 *     CmpCleanupDiscardReplaceContext @ 0x14057DF08 (CmpCleanupDiscardReplaceContext.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404A8840 (CmpDereferenceKeyControlBlockWithLock.c)
 */

_BOOL8 __fastcall CmpCleanupDiscardReplacePost(ULONG_PTR a1, __int64 a2)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi
  __int64 v4; // rax

  v2 = (_QWORD *)(a2 + 16);
  v3 = *(_QWORD **)(a2 + 16);
  if ( v3[1] != a2 + 16 || (v4 = *v3, *(_QWORD **)(*v3 + 8LL) != v3) )
    __fastfail(3u);
  *v2 = v4;
  *(_QWORD *)(v4 + 8) = v2;
  CmpDereferenceKeyControlBlockWithLock(a1);
  CmpDereferenceKeyControlBlockWithLock((ULONG_PTR)(v3 - 14));
  return *v2 == (_QWORD)v2;
}
