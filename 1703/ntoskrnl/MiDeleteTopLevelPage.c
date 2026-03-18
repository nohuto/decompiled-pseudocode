/*
 * XREFs of MiDeleteTopLevelPage @ 0x14017C69C
 * Callers:
 *     MiDeleteFinalPageTables @ 0x140063178 (MiDeleteFinalPageTables.c)
 *     MiDeleteProcessShadow @ 0x14017C830 (MiDeleteProcessShadow.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiClearContainingMapping @ 0x140063350 (MiClearContainingMapping.c)
 *     MiDecrementShareCount @ 0x1401055F0 (MiDecrementShareCount.c)
 */

__int64 __fastcall MiDeleteTopLevelPage(__int64 a1, __int64 a2)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rbx
  __int64 result; // rax

  v2 = 48 * a2 - 0x58000000000LL;
  v3 = (unsigned __int8)MiLockPageInline(v2);
  MiClearContainingMapping(v2);
  *(_QWORD *)(v2 + 24) |= 0x4000000000000000uLL;
  MiDecrementShareCount(v2);
  result = MiDecrementShareCount(v2);
  _InterlockedAnd64((volatile signed __int64 *)(v2 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v3);
  return result;
}
