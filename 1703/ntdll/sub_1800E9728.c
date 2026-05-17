/*
 * XREFs of sub_1800E9728 @ 0x1800E9728
 * Callers:
 *     sub_180030914 @ 0x180030914 (sub_180030914.c)
 *     sub_180032DD0 @ 0x180032DD0 (sub_180032DD0.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x18007FD90 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall sub_1800E9728(__int64 a1, char a2, unsigned __int16 a3, _DWORD *a4, __int64 a5, __int64 *a6)
{
  __int64 v8; // rdx
  __int64 v9; // rax

  if ( (unsigned int)a3 >= *(_DWORD *)(a5 + 116) )
    return 3221225485LL;
  v8 = *(unsigned int *)(a5 + 8LL * a3 + 120);
  if ( !(_DWORD)v8 )
    return 3221225474LL;
  *a4 = *(_DWORD *)(a5 + 8LL * a3 + 124);
  if ( a2 || (unsigned int)v8 < *(_DWORD *)(a5 + 84) )
  {
    *a6 = a1 + v8;
    return 0LL;
  }
  else
  {
    v9 = RtlAddressInSectionTable(a5, a1, v8);
    *a6 = v9;
    return v9 == 0 ? 0xC000000D : 0;
  }
}
