/*
 * XREFs of CmpCompareCompressedName @ 0x1405506AC
 * Callers:
 *     CmpFindNameInListCellWithStatus @ 0x1404A3990 (CmpFindNameInListCellWithStatus.c)
 *     CmpFindKcbInHashEntryByName @ 0x1404AB5BC (CmpFindKcbInHashEntryByName.c)
 *     CmpCheckLexicographicalOrder @ 0x1405504B0 (CmpCheckLexicographicalOrder.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x1406F3690 (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpCompareKeysByName @ 0x1406FA870 (CmpCompareKeysByName.c)
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x140700F90 (CmpSortedValueEnumStackValueCompareFunction.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpCompareCompressedName(__int64 a1, unsigned __int8 *a2, unsigned __int16 a3, char a4)
{
  unsigned __int16 v5; // si
  WCHAR *v7; // r14
  WCHAR v9; // bx
  unsigned int v10; // edi

  v5 = *(_WORD *)a1 >> 1;
  v7 = *(WCHAR **)(a1 + 8);
  if ( v5 )
  {
    while ( a3 )
    {
      v9 = *v7++;
      v10 = *a2++;
      if ( v9 != (_WORD)v10 )
      {
        if ( (a4 & 1) == 0 && v9 >= 0x61u )
        {
          if ( v9 > 0x7Au )
            v9 = RtlUpcaseUnicodeChar(v9);
          else
            v9 -= 32;
        }
        if ( (a4 & 2) == 0 && v10 >= 0x61 )
        {
          if ( v10 <= 0x7A )
            LOWORD(v10) = v10 - 32;
          else
            LOWORD(v10) = RtlUpcaseUnicodeChar(v10);
        }
        if ( v9 != (unsigned __int16)v10 )
          return v9 - (unsigned int)(unsigned __int16)v10;
      }
      --a3;
      if ( !--v5 )
        return v5 - (unsigned int)a3;
    }
  }
  return v5 - (unsigned int)a3;
}
