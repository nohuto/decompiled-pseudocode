/*
 * XREFs of CmpCleanupDiscardReplacePost @ 0x14066D480
 * Callers:
 *     CmpCleanupDiscardReplaceContext @ 0x1404CFF1C (CmpCleanupDiscardReplaceContext.c)
 * Callees:
 *     CmpDereferenceKeyControlBlockWithLock @ 0x140490F80 (CmpDereferenceKeyControlBlockWithLock.c)
 */

_BOOL8 __fastcall CmpCleanupDiscardReplacePost(volatile signed __int32 *a1, __int64 a2)
{
  _QWORD *v2; // rbx
  volatile signed __int32 *v3; // rdi
  __int64 v4; // rax

  v2 = (_QWORD *)(a2 + 16);
  v3 = *(volatile signed __int32 **)(a2 + 16);
  v4 = *(_QWORD *)v3;
  if ( *((_QWORD *)v3 + 1) != a2 + 16 || *(volatile signed __int32 **)(v4 + 8) != v3 )
    __fastfail(3u);
  *v2 = v4;
  *(_QWORD *)(v4 + 8) = v2;
  CmpDereferenceKeyControlBlockWithLock(a1, 1u);
  CmpDereferenceKeyControlBlockWithLock(v3 - 28, 1u);
  return *v2 == (_QWORD)v2;
}
