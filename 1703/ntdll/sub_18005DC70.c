/*
 * XREFs of sub_18005DC70 @ 0x18005DC70
 * Callers:
 *     sub_18005D9D8 @ 0x18005D9D8 (sub_18005D9D8.c)
 *     sub_180109064 @ 0x180109064 (sub_180109064.c)
 *     sub_180109220 @ 0x180109220 (sub_180109220.c)
 * Callees:
 *     sub_18005DD3C @ 0x18005DD3C (sub_18005DD3C.c)
 */

__int64 __fastcall sub_18005DC70(_WORD *a1)
{
  unsigned int v2; // eax
  unsigned int v3; // r11d
  __int64 v4; // rcx
  _WORD *i; // rax
  int v7; // r10d
  char *v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  signed __int64 v11; // r9
  __int16 v12; // dx

  if ( !a1 )
    return 0LL;
  *a1 = 0;
  v2 = sub_18005DD3C();
  v3 = v2;
  if ( !v2 )
    return 0LL;
  if ( v2 >= 0x104 )
    return v3 + 9;
  v4 = 260LL;
  for ( i = a1; *i; ++i )
  {
    if ( !--v4 )
      return 0LL;
  }
  v7 = 0;
  v8 = (char *)&a1[260 - v4];
  v9 = v4;
  v10 = 2147483646LL;
  v11 = (char *)L"\\rescache" - v8;
  while ( v10 )
  {
    v12 = *(_WORD *)&v8[v11];
    if ( !v12 )
      break;
    *(_WORD *)v8 = v12;
    --v10;
    v8 += 2;
    if ( !--v9 )
    {
      v8 -= 2;
      v7 = -2147024774;
      break;
    }
  }
  *(_WORD *)v8 = 0;
  if ( v7 >= 0 )
    return v3 + 9;
  else
    return 0LL;
}
