/*
 * XREFs of sub_18000A310 @ 0x18000A310
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x18000A0D0 (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     sub_18000A47C @ 0x18000A47C (sub_18000A47C.c)
 *     sub_18000AF44 @ 0x18000AF44 (sub_18000AF44.c)
 *     __security_check_cookie @ 0x18008B0F0 (__security_check_cookie.c)
 */

__int64 __fastcall sub_18000A310(_WORD *a1, __int64 a2)
{
  __int64 v3; // r8
  _WORD *v4; // rdx
  int v5; // r10d
  signed __int64 v6; // r9
  __int16 v7; // ax
  __int64 result; // rax
  __int64 v9; // rcx
  _WORD *i; // rax
  char *v11; // rax
  __int64 v12; // rdx
  signed __int64 v13; // r9
  __int16 v14; // r8
  _WORD v15[256]; // [rsp+20h] [rbp-218h] BYREF

  if ( !*a1 )
    return 3221225485LL;
  v3 = 256LL;
  v4 = v15;
  v5 = 0;
  v6 = (char *)L"Time Zones\\" - (char *)v15;
  while ( v3 != -2147483390 )
  {
    v7 = *(_WORD *)((char *)v4 + v6);
    if ( !v7 )
      break;
    *v4++ = v7;
    if ( !--v3 )
    {
      --v4;
      v5 = -2147483643;
      break;
    }
  }
  *v4 = 0;
  if ( v5 < 0 )
    return (unsigned int)v5;
  result = sub_18000A47C(v15, v4, a1, v6);
  if ( (int)result < 0 )
    return result;
  v9 = 256LL;
  for ( i = v15; *i; ++i )
  {
    if ( !--v9 )
      return 3221225485LL;
  }
  v5 = 0;
  v11 = (char *)&v15[256 - v9];
  v12 = 2147483646LL;
  v13 = (char *)L"\\Dynamic DST" - v11;
  while ( v12 )
  {
    v14 = *(_WORD *)&v11[v13];
    if ( !v14 )
      break;
    *(_WORD *)v11 = v14;
    --v12;
    v11 += 2;
    if ( !--v9 )
    {
      v11 -= 2;
      v5 = -2147483643;
      break;
    }
  }
  *(_WORD *)v11 = 0;
  if ( v5 < 0 )
    return (unsigned int)v5;
  return sub_18000AF44(3LL, v15, 0LL, a2);
}
