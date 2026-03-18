/*
 * XREFs of MiSetPfnOwnedAndActive @ 0x1400C2954
 * Callers:
 *     MiFindContiguousPages @ 0x140123CF0 (MiFindContiguousPages.c)
 *     MiFindLargeNodePage @ 0x140254588 (MiFindLargeNodePage.c)
 *     MiRemoveMdlPages @ 0x14074B900 (MiRemoveMdlPages.c)
 * Callees:
 *     MiChangePageAttribute @ 0x1400DA5EC (MiChangePageAttribute.c)
 *     MiLockPageInline @ 0x1400EB9C0 (MiLockPageInline.c)
 *     MiFreeZeroPageSizeIndex @ 0x140121FC0 (MiFreeZeroPageSizeIndex.c)
 *     MiMakeDemandZeroPte @ 0x1401A65C8 (MiMakeDemandZeroPte.c)
 */

__int64 __fastcall MiSetPfnOwnedAndActive(__int64 a1, char a2, __int64 a3, unsigned int a4, int a5)
{
  unsigned __int8 v9; // al
  __int64 v10; // r10
  unsigned __int8 v11; // si
  __int64 v12; // r10
  unsigned __int8 v13; // cl
  __int64 result; // rax

  v9 = MiLockPageInline(a1);
  v10 = *(_QWORD *)(a1 + 40);
  v11 = v9;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 40) = v10 & 0xFDFFFFFFFFFFFFFFuLL;
  if ( (unsigned int)MiFreeZeroPageSizeIndex(a1) != -1 )
    *(_QWORD *)(a1 + 40) = v12 & 0xFFFFFFF000000000uLL;
  v13 = *(_BYTE *)(a1 + 34);
  if ( v13 >> 6 != a4 )
  {
    MiChangePageAttribute(a1, a4, 1LL);
    v13 = *(_BYTE *)(a1 + 34);
  }
  *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
  if ( a5 )
    *(_WORD *)(a1 + 32) = a5;
  *(_QWORD *)(a1 + 8) = a3;
  *(_BYTE *)(a1 + 34) = v13 & 0xF8 | 6;
  if ( (a2 & 1) != 0 )
  {
    *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 40) & 0xFFFFFFF000000000uLL | 0xFFFFFFFFDLL;
    *(_QWORD *)(a1 + 16) = MiMakeDemandZeroPte(4LL);
    *(_QWORD *)(a1 + 8) = 0xFFFFF68000000000uLL;
    *(_QWORD *)(a1 + 24) |= 0x4000000000000000uLL;
  }
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  result = v11;
  __writecr8(v11);
  return result;
}
