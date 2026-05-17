/*
 * XREFs of RtlEqualPrefixSid @ 0x180037E30
 * Callers:
 *     sub_180037A68 @ 0x180037A68 (sub_180037A68.c)
 *     sub_1800441D8 @ 0x1800441D8 (sub_1800441D8.c)
 *     sub_1800E03C0 @ 0x1800E03C0 (sub_1800E03C0.c)
 * Callees:
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

char __fastcall RtlEqualPrefixSid(_BYTE *a1, _BYTE *a2)
{
  unsigned __int8 v3; // r10
  __int64 v4; // r8
  int v5; // r9d
  int v6; // eax
  _DWORD *v7; // r9
  __int64 v8; // rdx
  int v9; // r9d
  bool v10; // zf

  if ( *a1 != *a2 )
    return 0;
  if ( a1[2] != a2[2] )
    return 0;
  if ( a1[3] != a2[3] )
    return 0;
  if ( a1[4] != a2[4] )
    return 0;
  if ( a1[5] != a2[5] )
    return 0;
  if ( a1[6] != a2[6] )
    return 0;
  if ( a1[7] != a2[7] )
    return 0;
  v3 = a1[1];
  if ( v3 != a2[1] )
    return 0;
  v4 = 0LL;
  if ( v3 )
  {
    if ( v3 != 11 )
      goto LABEL_12;
    v9 = *(_DWORD *)(a1 + 2);
    if ( !v9 )
      v9 = *((unsigned __int16 *)a1 + 3) - 2816;
    v10 = v9 == 0;
    v5 = 5;
    if ( !v10 )
LABEL_12:
      v5 = 1;
    v6 = v3 - v5;
    if ( v6 > 0 )
    {
      v7 = a1 + 8;
      v8 = a2 - a1;
      while ( *v7 == *(_DWORD *)((char *)v7 + v8) )
      {
        ++v4;
        ++v7;
        if ( v4 >= v6 )
          return 1;
      }
      return 0;
    }
  }
  return 1;
}
