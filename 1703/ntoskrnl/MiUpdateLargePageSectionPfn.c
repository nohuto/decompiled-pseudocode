/*
 * XREFs of MiUpdateLargePageSectionPfn @ 0x1402113B0
 * Callers:
 *     MiCreatePagingFileMap @ 0x14054A5D0 (MiCreatePagingFileMap.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 */

__int64 __fastcall MiUpdateLargePageSectionPfn(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 v6; // al
  __int64 v7; // r8
  __int64 v8; // rcx
  unsigned __int64 v9; // rdx
  char v10; // al
  __int64 result; // rax

  v6 = MiLockPageInline(a1);
  v7 = *(_QWORD *)(a1 + 24);
  v8 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)a1 = 0LL;
  v9 = v6;
  *(_QWORD *)(a1 + 16) = a3;
  *(_QWORD *)(a1 + 8) = a2;
  *(_WORD *)(a1 + 32) = 2;
  *(_QWORD *)(a1 + 24) = v7 & 0xC000000000000000uLL | 1;
  v10 = *(_BYTE *)(a1 + 34) & 0xFE;
  *(_QWORD *)(a1 + 40) = v8 & 0xFC3FFFF000000000uLL | 0x240000FFFFFFFFFLL;
  *(_BYTE *)(a1 + 34) = v10 | 6;
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v9);
  return result;
}
