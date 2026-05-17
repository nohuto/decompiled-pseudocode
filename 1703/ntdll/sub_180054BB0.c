/*
 * XREFs of sub_180054BB0 @ 0x180054BB0
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x180054970 (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     sub_180054D28 @ 0x180054D28 (sub_180054D28.c)
 *     sub_180056CCC @ 0x180056CCC (sub_180056CCC.c)
 *     sub_180095EB0 @ 0x180095EB0 (sub_180095EB0.c)
 */

__int64 __fastcall sub_180054BB0(_WORD *a1, __int64 a2)
{
  __int64 v3; // r8
  _WORD *v4; // rdx
  int v5; // r10d
  signed __int64 v6; // r9
  __int16 v7; // ax
  __int64 result; // rax
  __int64 v9; // rcx
  _WORD *i; // rax
  int v11; // r9d
  char *v12; // rax
  __int64 v13; // rbx
  __int64 v14; // rcx
  signed __int64 v15; // r8
  __int16 v16; // dx
  _WORD v17[256]; // [rsp+20h] [rbp-218h] BYREF

  if ( !*a1 )
    return 3221225485LL;
  v3 = 256LL;
  v4 = v17;
  v5 = 0;
  v6 = (char *)L"Time Zones\\" - (char *)v17;
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
  result = sub_180054D28(v17, v4, a1, v6);
  if ( (int)result >= 0 )
  {
    v9 = 256LL;
    for ( i = v17; *i; ++i )
    {
      if ( !--v9 )
        return 3221225485LL;
    }
    v11 = 0;
    v12 = (char *)&v17[256 - v9];
    v13 = v9;
    v14 = 2147483646LL;
    v15 = (char *)L"\\Dynamic DST" - v12;
    while ( v14 )
    {
      v16 = *(_WORD *)&v12[v15];
      if ( !v16 )
        break;
      *(_WORD *)v12 = v16;
      --v14;
      v12 += 2;
      if ( !--v13 )
      {
        v12 -= 2;
        v11 = -2147483643;
        break;
      }
    }
    *(_WORD *)v12 = 0;
    if ( v11 < 0 )
      return (unsigned int)v11;
    else
      return sub_180056CCC(3LL, v17, 0LL, a2);
  }
  return result;
}
