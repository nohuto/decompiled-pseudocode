/*
 * XREFs of RtlpImageDirectoryEntryToData64 @ 0x14008BADC
 * Callers:
 *     RtlpImageDirectoryEntryToDataEx @ 0x14008B920 (RtlpImageDirectoryEntryToDataEx.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x140012DC0 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall RtlpImageDirectoryEntryToData64(
        unsigned __int64 a1,
        char a2,
        unsigned __int16 a3,
        _DWORD *a4,
        __int64 a5,
        __int64 *a6)
{
  __int64 v7; // rcx
  __int64 v9; // rax

  if ( (unsigned int)a3 >= *(_DWORD *)(a5 + 132) )
    return 3221225485LL;
  v7 = *(unsigned int *)(a5 + 8LL * a3 + 136);
  if ( !(_DWORD)v7 )
    return 3221225474LL;
  if ( a1 < 0x7FFFFFFEFFFFLL && a1 + v7 >= 0x7FFFFFFEFFFFLL )
    return 3221225485LL;
  *a4 = *(_DWORD *)(a5 + 8LL * a3 + 140);
  if ( a2 || (unsigned int)v7 < *(_DWORD *)(a5 + 84) )
  {
    *a6 = a1 + v7;
    return 0LL;
  }
  else
  {
    v9 = RtlAddressInSectionTable(a5, a1, v7);
    *a6 = v9;
    return v9 == 0 ? 0xC000000D : 0;
  }
}
