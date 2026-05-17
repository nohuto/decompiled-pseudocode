/*
 * XREFs of RtlpGetDynamicTimeZoneInfoHandle @ 0x180066680
 * Callers:
 *     RtlpCheckDynamicTimeZoneInformation @ 0x180066440 (RtlpCheckDynamicTimeZoneInformation.c)
 * Callees:
 *     RtlStringCbCatW @ 0x1800667F8 (RtlStringCbCatW.c)
 *     RtlpGetRegistryHandle @ 0x180067320 (RtlpGetRegistryHandle.c)
 *     __security_check_cookie @ 0x180090C90 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpGetDynamicTimeZoneInfoHandle(_WORD *a1, __int64 a2)
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
  result = RtlStringCbCatW(v17, v4, a1, v6);
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
      return RtlpGetRegistryHandle(3LL, v17, 0LL, a2);
  }
  return result;
}
