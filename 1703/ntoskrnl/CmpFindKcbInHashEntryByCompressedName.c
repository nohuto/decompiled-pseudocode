/*
 * XREFs of CmpFindKcbInHashEntryByCompressedName @ 0x140665E68
 * Callers:
 *     CmpPartialPromoteSubkeys @ 0x140661850 (CmpPartialPromoteSubkeys.c)
 * Callees:
 *     CmpCompareCompressedName @ 0x1404D3030 (CmpCompareCompressedName.c)
 *     CmpCompareTwoCompressedNames @ 0x14066D1BC (CmpCompareTwoCompressedNames.c)
 */

__int64 __fastcall CmpFindKcbInHashEntryByCompressedName(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        unsigned __int8 *a4,
        unsigned __int16 a5)
{
  __int64 v6; // rsi
  __int64 i; // rdi
  __int64 v10; // rcx
  int v11; // eax
  _WORD v13[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]

  v6 = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 2800)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a1 + 2808) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == a2 && *(_QWORD *)(i + 56) == a3 )
    {
      v10 = *(_QWORD *)(i + 64);
      if ( (*(_DWORD *)v10 & 1) != 0 )
      {
        v11 = CmpCompareTwoCompressedNames(a4, a5, v10 + 26, *(unsigned __int16 *)(v10 + 24));
      }
      else
      {
        v14 = v10 + 26;
        v13[0] = *(_WORD *)(v10 + 24);
        v13[1] = v13[0];
        v11 = CmpCompareCompressedName((__int64)v13, a4, a5, 1);
      }
      if ( !v11 )
        return i - 8;
    }
  }
  return v6;
}
