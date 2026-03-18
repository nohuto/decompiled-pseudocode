/*
 * XREFs of CmpCompareUnicodeString @ 0x140581BD0
 * Callers:
 *     CmpGetSymbolicLinkTarget @ 0x14047EAB0 (CmpGetSymbolicLinkTarget.c)
 *     CmpCreateKeyControlBlock @ 0x140480870 (CmpCreateKeyControlBlock.c)
 *     CmpPerformCompleteKcbCacheLookup @ 0x1404B39C0 (CmpPerformCompleteKcbCacheLookup.c)
 *     CmpFindKcbInHashEntryByName @ 0x14068F9BC (CmpFindKcbInHashEntryByName.c)
 *     CmpGetMappingHiveForString @ 0x140692058 (CmpGetMappingHiveForString.c)
 *     CmpCompareKeysByName @ 0x14069775C (CmpCompareKeysByName.c)
 * Callees:
 *     RtlUpcaseUnicodeChar @ 0x1404817B0 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall CmpCompareUnicodeString(__int64 a1, __int64 a2, char a3)
{
  WCHAR *v4; // r14
  WCHAR *v5; // r15
  unsigned __int16 v6; // bp
  unsigned __int16 v7; // si
  WCHAR v8; // bx
  WCHAR v9; // di

  v4 = *(WCHAR **)(a1 + 8);
  v5 = *(WCHAR **)(a2 + 8);
  v6 = *(_WORD *)a2 >> 1;
  v7 = *(_WORD *)a1 >> 1;
  if ( v7 )
  {
    while ( v6 )
    {
      v8 = *v4++;
      v9 = *v5++;
      if ( v8 != v9 )
      {
        if ( (a3 & 1) == 0 && v8 >= 0x61u )
        {
          if ( v8 > 0x7Au )
            v8 = RtlUpcaseUnicodeChar(v8);
          else
            v8 -= 32;
        }
        if ( (a3 & 2) == 0 && v9 >= 0x61u )
        {
          if ( v9 <= 0x7Au )
            v9 -= 32;
          else
            v9 = RtlUpcaseUnicodeChar(v9);
        }
        if ( v8 != v9 )
          return v8 - (unsigned int)v9;
      }
      --v6;
      if ( !--v7 )
        return v7 - (unsigned int)v6;
    }
  }
  return v7 - (unsigned int)v6;
}
