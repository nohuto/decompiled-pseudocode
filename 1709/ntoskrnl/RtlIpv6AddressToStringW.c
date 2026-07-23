/*
 * XREFs of RtlIpv6AddressToStringW @ 0x14012CD70
 * Callers:
 *     RtlIpv6AddressToStringExW @ 0x14012CC90 (RtlIpv6AddressToStringExW.c)
 *     AdtpBuildIPv6Strings @ 0x140777028 (AdtpBuildIPv6Strings.c)
 * Callees:
 *     swprintf_s @ 0x140163370 (swprintf_s.c)
 */

PWSTR __stdcall RtlIpv6AddressToStringW(const struct in6_addr *Addr, PWSTR S)
{
  unsigned int v2; // r14d
  PWSTR v3; // rbp
  __int64 v4; // rsi
  wchar_t *v5; // rdi
  unsigned int v7; // r10d
  int v8; // r11d
  __int64 v9; // r9
  __int64 v10; // r8
  unsigned int v11; // edx
  signed int v12; // eax
  __int64 v13; // r15
  int v14; // eax
  __int64 v15; // r13
  int v16; // eax
  __int16 v18; // ax
  __int16 v19; // r10
  int v20; // ecx
  const char *v21; // r9
  int v22; // eax

  v2 = 8;
  v3 = S + 46;
  v4 = 0LL;
  v5 = S;
  if ( !*(_DWORD *)Addr && !*((_WORD *)Addr + 2) && !*((_WORD *)Addr + 3) && *((_WORD *)Addr + 6) )
  {
    v18 = *((_WORD *)Addr + 4);
    if ( v18 )
    {
      if ( v18 == -1 && !*((_WORD *)Addr + 5) )
      {
        v22 = swprintf_s(
                S,
                0x2EuLL,
                L"::ffff:0:%u.%u.%u.%u",
                *((unsigned __int8 *)Addr + 12),
                *((unsigned __int8 *)Addr + 13),
                *((unsigned __int8 *)Addr + 14),
                *((unsigned __int8 *)Addr + 15));
        return &v5[v22];
      }
    }
    else
    {
      v19 = *((_WORD *)Addr + 5);
      if ( ((v19 + 1) & 0xFFFE) == 0 )
      {
        v20 = *((unsigned __int8 *)Addr + 14);
        v21 = &File;
        if ( v19 )
          v21 = "ffff:";
        v22 = swprintf_s(
                S,
                0x2EuLL,
                L"::%hs%u.%u.%u.%u",
                v21,
                *((unsigned __int8 *)Addr + 12),
                *((unsigned __int8 *)Addr + 13),
                v20,
                *((unsigned __int8 *)Addr + 15));
        return &v5[v22];
      }
    }
  }
  v7 = 0;
  v8 = 0;
  v9 = 0LL;
  if ( (*((_WORD *)Addr + 4) & 0xFFFD) == 0 && *((_WORD *)Addr + 5) == 0xFE5E )
    v2 = 6;
  v10 = 0LL;
  v11 = 1;
  do
  {
    if ( *((_WORD *)Addr + v10) )
    {
      v9 = v11;
    }
    else if ( (int)(v11 - v9) > (int)(v7 - v8) )
    {
      v8 = v9;
      v7 = v11;
    }
    ++v11;
    ++v10;
  }
  while ( v10 < v2 );
  v12 = 0;
  if ( (int)(v7 - v8) > 1 )
    v12 = v7;
  v13 = v12;
  v14 = 0;
  if ( (int)(v7 - v8) > 1 )
    v14 = v8;
  v15 = v14;
  do
  {
    if ( v4 >= v13 || v15 > v4 )
    {
      if ( v4 && v4 != v13 )
        v5 += swprintf_s(v5, v3 - v5, L":", v9);
      v16 = swprintf_s(v5, v3 - v5, L"%x", (unsigned __int16)__ROR2__(*((_WORD *)Addr + v4), 8));
    }
    else
    {
      v16 = swprintf_s(v5, v3 - v5, L"::", v9);
      v4 = v13 - 1;
    }
    ++v4;
    v5 += v16;
  }
  while ( v4 < v2 );
  if ( v2 < 8 )
    v5 += swprintf_s(
            v5,
            v3 - v5,
            L":%u.%u.%u.%u",
            *((unsigned __int8 *)Addr + 12),
            *((unsigned __int8 *)Addr + 13),
            *((unsigned __int8 *)Addr + 14),
            *((unsigned __int8 *)Addr + 15));
  return v5;
}
