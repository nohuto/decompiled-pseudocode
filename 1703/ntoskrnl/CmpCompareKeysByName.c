/*
 * XREFs of CmpCompareKeysByName @ 0x14066D0E4
 * Callers:
 *     CmpFindSubKeyByNumberFromMergedView @ 0x14066742C (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmpKeyEnumStackAdvanceInternal @ 0x1406702E8 (CmpKeyEnumStackAdvanceInternal.c)
 *     CmpKeyEnumStackEntryAdvance @ 0x140670530 (CmpKeyEnumStackEntryAdvance.c)
 *     CmpKeyEnumStackEntryStart @ 0x140670684 (CmpKeyEnumStackEntryStart.c)
 * Callees:
 *     CmpCompareCompressedName @ 0x1404D3030 (CmpCompareCompressedName.c)
 *     CmpCompareUnicodeString @ 0x1404D3620 (CmpCompareUnicodeString.c)
 */

__int64 __fastcall CmpCompareKeysByName(__int64 a1, __int64 a2)
{
  unsigned __int16 v3; // r8
  unsigned __int16 v4; // r8
  __int16 v5; // [rsp+20h] [rbp-20h] BYREF
  __int16 v6; // [rsp+22h] [rbp-1Eh]
  __int64 v7; // [rsp+28h] [rbp-18h]
  __int16 v8; // [rsp+30h] [rbp-10h] BYREF
  __int16 v9; // [rsp+32h] [rbp-Eh]
  __int64 v10; // [rsp+38h] [rbp-8h]

  if ( (*(_BYTE *)(a1 + 2) & 0x20) != 0 )
  {
    if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
    {
      return CmpCompareTwoCompressedNames(
               a1 + 76,
               *(unsigned __int16 *)(a1 + 72),
               a2 + 76,
               *(unsigned __int16 *)(a2 + 72));
    }
    else
    {
      v3 = *(_WORD *)(a1 + 72);
      v7 = a2 + 76;
      v5 = *(_WORD *)(a2 + 72);
      v6 = v5;
      return (unsigned int)-CmpCompareCompressedName((__int64)&v5, (unsigned __int8 *)(a1 + 76), v3, 0);
    }
  }
  else if ( (*(_BYTE *)(a2 + 2) & 0x20) != 0 )
  {
    v4 = *(_WORD *)(a2 + 72);
    v10 = a1 + 76;
    v8 = *(_WORD *)(a1 + 72);
    v9 = v8;
    return CmpCompareCompressedName((__int64)&v8, (unsigned __int8 *)(a2 + 76), v4, 0);
  }
  else
  {
    v7 = a2 + 76;
    v5 = *(_WORD *)(a2 + 72);
    v6 = v5;
    v10 = a1 + 76;
    v8 = *(_WORD *)(a1 + 72);
    v9 = v8;
    return CmpCompareUnicodeString((__int64)&v8, (__int64)&v5, 0);
  }
}
