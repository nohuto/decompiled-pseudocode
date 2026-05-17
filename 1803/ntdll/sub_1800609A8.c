/*
 * XREFs of sub_1800609A8 @ 0x1800609A8
 * Callers:
 *     sub_180018770 @ 0x180018770 (sub_180018770.c)
 *     sub_18006008C @ 0x18006008C (sub_18006008C.c)
 *     sub_1800606EC @ 0x1800606EC (sub_1800606EC.c)
 *     sub_1800607D4 @ 0x1800607D4 (sub_1800607D4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800609A8(__int64 a1, unsigned int a2, _DWORD *a3)
{
  __int64 v3; // rax
  unsigned __int64 v5; // r10
  __int64 v6; // r9
  _WORD *v7; // rcx
  unsigned __int64 v8; // r11
  __int16 v9; // ax
  _WORD *v10; // r8
  _WORD *v11; // rdx
  __int64 result; // rax
  _WORD *i; // rcx

  v3 = *(unsigned __int8 *)(a1 + 45);
  v5 = a1 + *(unsigned __int16 *)(a1 + 46);
  LODWORD(v6) = a2;
  v7 = (_WORD *)(v5 + 2LL * a2);
  v8 = v5 + 2 * v3;
  if ( *v7 )
  {
    if ( (unsigned __int64)v7 >= v8 )
      return 0xFFFFFFFFLL;
    do
    {
      v9 = *v7;
      v10 = v7;
      if ( !*v7 )
        break;
      ++v7;
    }
    while ( (unsigned __int64)v7 < v8 );
    v11 = v10 + 1;
    if ( !v9 )
      v11 = v10;
    if ( (unsigned __int64)v11 >= v8 )
      return 0xFFFFFFFFLL;
    v6 = (__int64)((__int64)v11 - v5) >> 1;
  }
  else
  {
    do
      --v7;
    while ( !*v7 && (unsigned __int64)v7 > v5 );
    v11 = v7 + 1;
  }
  for ( i = (_WORD *)(v5 + 2 * ((unsigned int)v6 + 1LL)); !*i && (unsigned __int64)i < v8; ++i )
    ;
  result = (__int64)((__int64)v11 - v5) >> 1;
  *a3 = i - v11;
  return result;
}
