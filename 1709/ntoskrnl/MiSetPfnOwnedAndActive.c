/*
 * XREFs of MiSetPfnOwnedAndActive @ 0x1400C7EB8
 * Callers:
 *     MiFindContiguousPages @ 0x140078120 (MiFindContiguousPages.c)
 *     MiFindLargeNodePage @ 0x140216B0C (MiFindLargeNodePage.c)
 *     MiRemoveMdlPages @ 0x1406E09D0 (MiRemoveMdlPages.c)
 *     MiFillPagedPoolLockedDown @ 0x1406E3220 (MiFillPagedPoolLockedDown.c)
 * Callees:
 *     MiFreeZeroPageSizeIndex @ 0x1400C70F0 (MiFreeZeroPageSizeIndex.c)
 *     MiLockPageInline @ 0x1400E1510 (MiLockPageInline.c)
 *     MiChangePageAttribute @ 0x1400ED32C (MiChangePageAttribute.c)
 *     MiMakeDemandZeroPte @ 0x14017C774 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiSetPfnOwnedAndActive(__int64 a1, char a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned __int8 v9; // al
  unsigned __int8 v10; // si
  char v11; // al
  __int64 result; // rax

  v9 = MiLockPageInline(a1);
  *(_QWORD *)a1 = 0LL;
  v10 = v9;
  *(_QWORD *)(a1 + 40) &= ~0x200000000000000uLL;
  if ( (unsigned int)MiFreeZeroPageSizeIndex(a1) != -1 )
    *(_QWORD *)(a1 + 40) &= 0xFFFFFFF000000000uLL;
  if ( *(unsigned __int8 *)(a1 + 34) >> 6 != a4 )
    MiChangePageAttribute(a1, a4, 1LL);
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  if ( a5 )
    *(_WORD *)(a1 + 32) = a5;
  v11 = *(_BYTE *)(a1 + 34) & 0xFE;
  *(_QWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 34) = v11 | 6;
  if ( (a2 & 1) != 0 )
  {
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
    *(_QWORD *)(a1 + 16) = MiMakeDemandZeroPte(4LL);
    *(_QWORD *)(a1 + 8) = 0xFFFFF68000000000uLL;
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = v10;
  __writecr8(v10);
  return result;
}
