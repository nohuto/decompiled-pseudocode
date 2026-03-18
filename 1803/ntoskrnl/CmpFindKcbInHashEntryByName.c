/*
 * XREFs of CmpFindKcbInHashEntryByName @ 0x1404AB5BC
 * Callers:
 *     CmpWalkOneLevel @ 0x1404AA800 (CmpWalkOneLevel.c)
 *     CmpCreateKeyControlBlock @ 0x1404AB0E0 (CmpCreateKeyControlBlock.c)
 *     CmpPartialPromoteSubkeys @ 0x1406EEF30 (CmpPartialPromoteSubkeys.c)
 *     CmRenameKey @ 0x1406F1120 (CmRenameKey.c)
 * Callees:
 *     CmpCompareCompressedName @ 0x1405506AC (CmpCompareCompressedName.c)
 *     CmpCompareUnicodeString @ 0x1405706A4 (CmpCompareUnicodeString.c)
 */

__int64 __fastcall CmpFindKcbInHashEntryByName(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rsi
  __int64 i; // rdi
  __int64 v10; // rax
  unsigned __int16 v11; // cx
  int v12; // eax
  __int64 v13; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+30h] [rbp-18h]

  v5 = 0LL;
  for ( i = *(_QWORD *)(*(_QWORD *)(a1 + 1640)
                      + 24
                      * ((unsigned int)(*(_DWORD *)(a1 + 1648) - 1) & ((101027 * (a2 ^ (a2 >> 9))) ^ ((unsigned __int64)(101027 * (a2 ^ (a2 >> 9))) >> 9)))
                      + 16); i; i = *(_QWORD *)(i + 8) )
  {
    if ( *(_DWORD *)i == a2 && *(_QWORD *)(i + 56) == a3 )
    {
      v10 = *(_QWORD *)(i + 64);
      v11 = *(_WORD *)(v10 + 24);
      if ( (*(_DWORD *)v10 & 1) != 0 )
      {
        v12 = CmpCompareCompressedName(a4, v10 + 26, v11, 2LL, v13, v14, v15);
      }
      else
      {
        v14 = v10 + 26;
        LOWORD(v13) = v11;
        WORD1(v13) = v11;
        v12 = CmpCompareUnicodeString(a4, &v13, 2LL);
      }
      if ( !v12 )
        return i - 8;
    }
  }
  return v5;
}
