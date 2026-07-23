/*
 * XREFs of RtlIpv6AddressToStringW @ 0x14016CBB0
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x14028CB10 (RtlIpv6AddressToStringExW.c)
 *     AdtpBuildIPv6Strings @ 0x1407DFD94 (AdtpBuildIPv6Strings.c)
 * Callees:
 *     swprintf_s @ 0x14018D230 (swprintf_s.c)
 */

PWSTR __stdcall RtlIpv6AddressToStringW(const struct in6_addr *Addr, PWSTR S)
{
  unsigned int v2; // ebp
  PWSTR v3; // r14
  wchar_t *v4; // rdi
  int v6; // r10d
  int v7; // r11d
  int v8; // esi
  int v9; // edx
  __int64 i; // r8
  int v11; // r9d
  int v12; // eax
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // rsi
  __int64 v16; // r13
  int v17; // eax
  int v19; // ecx
  int v20; // edx
  int v21; // eax
  int v22; // eax
  __int16 v23; // r8
  __int16 v24; // ax
  __int16 v25; // r10
  const char *v26; // r9
  int v27; // eax

  v2 = 8;
  v3 = S + 46;
  v4 = S;
  if ( !*(_DWORD *)Addr && !*((_WORD *)Addr + 2) && !*((_WORD *)Addr + 3) )
  {
    v23 = *((_WORD *)Addr + 6);
    if ( v23 )
    {
      v24 = *((_WORD *)Addr + 4);
      if ( v24 )
      {
        if ( v24 == -1 && !*((_WORD *)Addr + 5) )
        {
          v27 = swprintf_s(
                  S,
                  0x2EuLL,
                  L"::ffff:0:%u.%u.%u.%u",
                  (unsigned __int8)v23,
                  HIBYTE(v23),
                  *((unsigned __int8 *)Addr + 14),
                  *((unsigned __int8 *)Addr + 15));
          return &v4[v27];
        }
      }
      else
      {
        v25 = *((_WORD *)Addr + 5);
        if ( ((v25 + 1) & 0xFFFE) == 0 )
        {
          v26 = &File;
          if ( v25 )
            v26 = "ffff:";
          v27 = swprintf_s(
                  S,
                  0x2EuLL,
                  L"::%hs%u.%u.%u.%u",
                  v26,
                  (unsigned __int8)v23,
                  HIBYTE(v23),
                  *((unsigned __int8 *)Addr + 14),
                  *((unsigned __int8 *)Addr + 15));
          return &v4[v27];
        }
      }
    }
  }
  v6 = 0;
  v7 = 0;
  v8 = 0;
  if ( (*((_WORD *)Addr + 4) & 0xFFFD) == 0 && *((_WORD *)Addr + 5) == 0xFE5E )
    v2 = 6;
  v9 = 0;
  for ( i = 0LL; i < v2; ++i )
  {
    v11 = v9 + 1;
    if ( *((_WORD *)Addr + i) )
    {
      v8 = v9 + 1;
    }
    else
    {
      v19 = v6 - v7;
      v20 = v9 - v8 + 1;
      v21 = v8;
      if ( v20 <= v6 - v7 )
        v21 = v7;
      v7 = v21;
      v22 = v11;
      if ( v20 <= v19 )
        v22 = v6;
      v6 = v22;
    }
    v9 = v11;
  }
  v12 = 0;
  if ( v6 - v7 > 1 )
    v12 = v6;
  v13 = v12;
  v14 = 0;
  if ( v6 - v7 > 1 )
    v14 = v7;
  v15 = 0LL;
  v16 = v14;
  do
  {
    if ( v15 >= v13 || v16 > v15 )
    {
      if ( v15 && v15 != v13 )
        v4 += swprintf_s(v4, v3 - v4, L":");
      v17 = swprintf_s(v4, v3 - v4, L"%x", (unsigned __int16)__ROR2__(*((_WORD *)Addr + v15), 8));
    }
    else
    {
      v17 = swprintf_s(v4, v3 - v4, L"::");
      v15 = v13 - 1;
    }
    ++v15;
    v4 += v17;
  }
  while ( v15 < v2 );
  if ( v2 < 8 )
    v4 += swprintf_s(
            v4,
            v3 - v4,
            L":%u.%u.%u.%u",
            *((unsigned __int8 *)Addr + 12),
            *((unsigned __int8 *)Addr + 13),
            *((unsigned __int8 *)Addr + 14),
            *((unsigned __int8 *)Addr + 15));
  return v4;
}
