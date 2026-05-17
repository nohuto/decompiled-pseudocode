/*
 * XREFs of sub_18005EAA4 @ 0x18005EAA4
 * Callers:
 *     sub_18005E4EC @ 0x18005E4EC (sub_18005E4EC.c)
 *     sub_18005EA08 @ 0x18005EA08 (sub_18005EA08.c)
 * Callees:
 *     sub_18005EB88 @ 0x18005EB88 (sub_18005EB88.c)
 *     sub_180062AA4 @ 0x180062AA4 (sub_180062AA4.c)
 */

_BYTE *__fastcall sub_18005EAA4(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rdi
  unsigned __int64 v7; // r14
  _BYTE *v8; // rax
  _BYTE *v9; // rsi
  char v10; // al
  __int64 v11; // rbp
  __int64 v13; // rax

  v3 = 0LL;
  if ( (*(_BYTE *)a3 & 4) != 0 )
    v7 = *(_QWORD *)(a3 + 24);
  else
    v7 = *(unsigned __int16 *)(a3 + 24);
  v8 = (_BYTE *)sub_18005EB88(
                  *(_QWORD *)(a1 + 24) + 16LL,
                  (unsigned __int64)(a2 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)) >> 20);
  v9 = v8;
  if ( v8 )
  {
    if ( (*v8 & 4) != 0 )
      return v9;
    *(_BYTE *)a3 |= 2u;
    v3 = 1LL;
    v10 = *(_BYTE *)(a1 + 44);
    v11 = a2 + 0x100000;
    *(_QWORD *)(a3 + 8) = 0LL;
    *(_BYTE *)(a3 + 1) = v10;
    *(_QWORD *)(a3 + 24) = 2309737967LL;
    if ( v7 <= 1 )
      return v9;
    do
    {
      if ( !sub_18005EB88(
              *(_QWORD *)(a1 + 24) + 16LL,
              (unsigned __int64)(v11 - *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8LL)) >> 20) )
        break;
      ++v3;
      v11 += 0x100000LL;
    }
    while ( v3 < v7 );
  }
  else
  {
    v9 = 0LL;
  }
  if ( v3 < v7 )
  {
    for ( ; v3; --v3 )
    {
      v13 = *(_QWORD *)(a1 + 24);
      sub_180062AA4(
        v13 + 16,
        8 * ((__int64)&v9[-*(_QWORD *)(v13 + 32)] >> *(_DWORD *)(v13 + 88) << *(_DWORD *)(v13 + 88)),
        8 * (1LL << *(_DWORD *)(v13 + 88)));
      v9 += 32;
    }
    return 0LL;
  }
  return v9;
}
