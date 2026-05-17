/*
 * XREFs of sub_1800E4978 @ 0x1800E4978
 * Callers:
 *     sub_18000FA60 @ 0x18000FA60 (sub_18000FA60.c)
 *     sub_18000FC70 @ 0x18000FC70 (sub_18000FC70.c)
 * Callees:
 *     RtlAddressInSectionTable @ 0x1800782B0 (RtlAddressInSectionTable.c)
 */

__int64 __fastcall sub_1800E4978(__int64 a1, char a2, unsigned __int16 a3, _DWORD *a4, __int64 a5, __int64 *a6)
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
