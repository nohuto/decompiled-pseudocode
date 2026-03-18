/*
 * XREFs of CmpFindKcbInHashEntryByName @ 0x140665F54
 * Callers:
 *     CmpWalkOneLevel @ 0x140503FA0 (CmpWalkOneLevel.c)
 *     CmpPartialPromoteSubkeys @ 0x140661850 (CmpPartialPromoteSubkeys.c)
 *     CmRenameKey @ 0x140663778 (CmRenameKey.c)
 * Callees:
 *     CmpCompareCompressedName @ 0x1404D3030 (CmpCompareCompressedName.c)
 *     CmpCompareUnicodeString @ 0x1404D3620 (CmpCompareUnicodeString.c)
 */

__int64 __fastcall CmpFindKcbInHashEntryByName(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 i; // rdi
  __int64 v9; // rcx
  int v10; // eax
  _WORD v12[4]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h]

  v5 = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 2800)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a1 + 2808) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == a2 && *(_QWORD *)(i + 56) == a3 )
    {
      v9 = *(_QWORD *)(i + 64);
      if ( (*(_DWORD *)v9 & 1) != 0 )
      {
        v10 = CmpCompareCompressedName(a4, (unsigned __int8 *)(v9 + 26), *(_WORD *)(v9 + 24), 2);
      }
      else
      {
        v13 = v9 + 26;
        v12[0] = *(_WORD *)(v9 + 24);
        v12[1] = v12[0];
        v10 = CmpCompareUnicodeString(a4, (__int64)v12, 2);
      }
      if ( !v10 )
        return i - 8;
    }
  }
  return v5;
}
