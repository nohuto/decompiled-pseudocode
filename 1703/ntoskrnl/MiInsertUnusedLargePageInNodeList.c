/*
 * XREFs of MiInsertUnusedLargePageInNodeList @ 0x140221A88
 * Callers:
 *     MiFreeLargeZeroPages @ 0x1406BEC28 (MiFreeLargeZeroPages.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiInsertLargePageInNodeListHelper @ 0x1400B7240 (MiInsertLargePageInNodeListHelper.c)
 */

__int64 __fastcall MiInsertUnusedLargePageInNodeList(unsigned __int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 result; // rax

  v4 = 48 * a1 - 0x58000000000LL;
  v5 = (unsigned __int8)MiLockPageInline(v4);
  MiInsertLargePageInNodeListHelper(a1, a2, 0, 0);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v4 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v5);
  return result;
}
