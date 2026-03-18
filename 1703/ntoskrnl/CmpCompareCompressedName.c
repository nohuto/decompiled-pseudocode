/*
 * XREFs of CmpCompareCompressedName @ 0x1404D3030
 * Callers:
 *     CmpSortedValueEnumStackValueCompareFunction @ 0x14041CCF0 (CmpSortedValueEnumStackValueCompareFunction.c)
 *     CmpFindNameInListCellWithStatus @ 0x140490670 (CmpFindNameInListCellWithStatus.c)
 *     CmpDoCompareKeyName @ 0x1404D2F90 (CmpDoCompareKeyName.c)
 *     CmpCreateKeyControlBlock @ 0x140502580 (CmpCreateKeyControlBlock.c)
 *     CmpCheckRegistry2 @ 0x140505E80 (CmpCheckRegistry2.c)
 *     CmpFindKcbInHashEntryByCompressedName @ 0x140665E68 (CmpFindKcbInHashEntryByCompressedName.c)
 *     CmpFindKcbInHashEntryByName @ 0x140665F54 (CmpFindKcbInHashEntryByName.c)
 *     CmpCompareKeysByName @ 0x14066D0E4 (CmpCompareKeysByName.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpCompareCompressedName(__int64 a1, unsigned __int8 *a2, unsigned __int16 a3, char a4)
{
  unsigned __int16 v5; // di
  WCHAR *v7; // rsi
  WCHAR v9; // r15
  unsigned int v10; // r14d

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
          if ( v10 > 0x7A )
            LOWORD(v10) = RtlUpcaseUnicodeChar(v10);
          else
            LOWORD(v10) = v10 - 32;
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
