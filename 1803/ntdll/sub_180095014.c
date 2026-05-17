/*
 * XREFs of sub_180095014 @ 0x180095014
 * Callers:
 *     sub_1800941E0 @ 0x1800941E0 (sub_1800941E0.c)
 *     sub_180094560 @ 0x180094560 (sub_180094560.c)
 *     sub_180097A38 @ 0x180097A38 (sub_180097A38.c)
 *     sub_180097DA0 @ 0x180097DA0 (sub_180097DA0.c)
 * Callees:
 *     sub_18008B020 @ 0x18008B020 (sub_18008B020.c)
 *     sub_1800950C4 @ 0x1800950C4 (sub_1800950C4.c)
 */

__int64 __fastcall sub_180095014(int a1, __int64 *a2)
{
  unsigned __int8 v3; // si
  __int64 result; // rax
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rcx
  int v8; // edx
  unsigned __int8 *v9; // r8

  v3 = a1;
  if ( !a2 )
  {
    sub_18008B020();
    return 0xFFFFFFFFLL;
  }
  if ( a1 == -1 )
    return 0xFFFFFFFFLL;
  v5 = *((_DWORD *)a2 + 6);
  if ( (v5 & 1) == 0 && (v5 & 0x82) != 0x80 )
    return 0xFFFFFFFFLL;
  v6 = a2[2];
  if ( !v6 )
  {
    sub_1800950C4(a2);
    v6 = a2[2];
  }
  v7 = *a2;
  if ( *a2 == v6 )
  {
    if ( *((_DWORD *)a2 + 2) )
      return 0xFFFFFFFFLL;
    *a2 = ++v7;
  }
  v8 = *((_DWORD *)a2 + 6);
  v9 = (unsigned __int8 *)(v7 - 1);
  *a2 = v7 - 1;
  if ( (v8 & 0x40) != 0 )
  {
    if ( *v9 != v3 )
    {
      *a2 = v7;
      return 0xFFFFFFFFLL;
    }
  }
  else
  {
    *v9 = v3;
    v8 = *((_DWORD *)a2 + 6);
  }
  ++*((_DWORD *)a2 + 2);
  result = v3;
  *((_DWORD *)a2 + 6) = v8 & 0xFFFFFFEE | 1;
  return result;
}
