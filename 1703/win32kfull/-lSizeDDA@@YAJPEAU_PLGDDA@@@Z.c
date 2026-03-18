/*
 * XREFs of ?lSizeDDA@@YAJPEAU_PLGDDA@@@Z @ 0x1C02B36D8
 * Callers:
 *     EngPlgBlt @ 0x1C026C840 (EngPlgBlt.c)
 * Callees:
 *     ?bSubOverflow@@YAHJJ@Z @ 0x1C012493C (-bSubOverflow@@YAHJJ@Z.c)
 *     __security_check_cookie @ 0x1C013C680 (__security_check_cookie.c)
 *     ?bAddOverflow@@YAHJJ@Z @ 0x1C02B1788 (-bAddOverflow@@YAHJJ@Z.c)
 */

__int64 __fastcall lSizeDDA(struct _PLGDDA *a1)
{
  int *v1; // r8
  int v2; // edx
  __int64 v3; // r9
  int v4; // ecx
  int v5; // eax
  int v6; // edx
  int v7; // ecx
  int v8; // r10d
  int v10; // ecx
  int v11; // ecx
  int v12; // ecx
  int v14; // ecx
  _DWORD v15[3]; // [rsp+24h] [rbp-24h] BYREF

  v1 = v15;
  v2 = *((_DWORD *)a1 + 1);
  v3 = 3LL;
  v15[0] = *((_DWORD *)a1 + 3);
  v15[1] = *((_DWORD *)a1 + 5);
  v15[2] = *((_DWORD *)a1 + 7);
  v4 = v2;
  do
  {
    v5 = *v1++;
    if ( v2 > v5 )
      v2 = v5;
    if ( v4 < v5 )
      v4 = v5;
    --v3;
  }
  while ( v3 );
  if ( bSubOverflow(v4, v2) )
    return 0LL;
  v10 = v7 - v6;
  if ( !v10 )
    v10 = v8;
  if ( bAddOverflow(v10) )
    return 0LL;
  v12 = v11 + 4;
  if ( v12 )
  {
    if ( v12 >= 0 ? 0x7FFFFFFF / v12 < 8 : v12 < -268435456 )
      return 0LL;
  }
  if ( bAddOverflow(8 * v12) )
    return 0LL;
  else
    return (unsigned int)(v14 + 4);
}
