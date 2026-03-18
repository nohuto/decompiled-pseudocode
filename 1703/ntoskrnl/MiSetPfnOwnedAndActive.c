/*
 * XREFs of MiSetPfnOwnedAndActive @ 0x1400269E4
 * Callers:
 *     MiFindContiguousPages @ 0x1400B65D0 (MiFindContiguousPages.c)
 *     MiFindLargeNodePage @ 0x14020EDB8 (MiFindLargeNodePage.c)
 *     MiRemoveMdlPages @ 0x1406B49B8 (MiRemoveMdlPages.c)
 *     MiFillPagedPoolLockedDown @ 0x1406B6770 (MiFillPagedPoolLockedDown.c)
 * Callees:
 *     MiLockPageInline @ 0x140040640 (MiLockPageInline.c)
 *     MiFreeZeroPageSizeIndex @ 0x1400B6080 (MiFreeZeroPageSizeIndex.c)
 *     MiChangePageAttribute @ 0x1401032F4 (MiChangePageAttribute.c)
 *     MiMakeDemandZeroPte @ 0x14017CF18 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiSetPfnOwnedAndActive(__int64 a1, char a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned __int8 v9; // si
  char v10; // al
  __int64 result; // rax

  v9 = MiLockPageInline(a1);
  if ( (unsigned int)MiFreeZeroPageSizeIndex(a1) != -1 )
    *(_QWORD *)(a1 + 40) &= 0xFFFFFFF000000000uLL;
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != a4 )
    MiChangePageAttribute(a1, a4, 1LL);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  if ( a5 )
    *(_WORD *)(a1 + 32) = a5;
  v10 = *(_BYTE *)(a1 + 34) & 0xFE;
  *(_QWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 34) = v10 | 6;
  if ( (a2 & 1) != 0 )
  {
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
    *(_QWORD *)(a1 + 16) = MiMakeDemandZeroPte(4LL);
    *(_QWORD *)(a1 + 8) = 0xFFFFF68000000000uLL;
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = v9;
  __writecr8(v9);
  return result;
}
