/*
 * XREFs of RtlIpv6AddressToStringA @ 0x180080770
 * Callers:
 *     RtlIpv6AddressToStringExA @ 0x1800F12D0 (RtlIpv6AddressToStringExA.c)
 * Callees:
 *     sprintf_s @ 0x180096350 (sprintf_s.c)
 */

PSTR __stdcall RtlIpv6AddressToStringA(const struct in6_addr *Addr, PSTR S)
{
  unsigned int v2; // r14d
  PSTR v3; // rbp
  char *v4; // rdi
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
  unsigned __int16 v23; // r9
  __int16 v24; // dx
  int v25; // r10d
  const char *v26; // r9
  int v27; // eax

  v2 = 8;
  v3 = S + 46;
  v4 = S;
  if ( !*(_DWORD *)Addr && !*((_WORD *)Addr + 2) && !*((_WORD *)Addr + 3) )
  {
    v23 = *((_WORD *)Addr + 6);
    v24 = HIBYTE(v23);
    if ( v23 )
    {
      if ( *((_WORD *)Addr + 4) )
      {
        if ( *((_WORD *)Addr + 4) == 0xFFFF && !*((_WORD *)Addr + 5) )
        {
          v27 = sprintf_s(
                  v4,
                  v3 - v4,
                  "::ffff:0:%u.%u.%u.%u",
                  (unsigned __int8)v23,
                  HIBYTE(v23),
                  *((unsigned __int8 *)Addr + 14),
                  *((unsigned __int8 *)Addr + 15));
          return &v4[v27];
        }
      }
      else if ( ((*((_WORD *)Addr + 5) + 1) & 0xFFFE) == 0 )
      {
        v25 = (unsigned __int8)v23;
        v26 = (const char *)&dword_180114112;
        if ( *((_WORD *)Addr + 5) )
          v26 = "ffff:";
        v27 = sprintf_s(
                v4,
                v3 - v4,
                "::%hs%u.%u.%u.%u",
                v26,
                v25,
                (unsigned __int8)v24,
                *((unsigned __int8 *)Addr + 14),
                *((unsigned __int8 *)Addr + 15));
        return &v4[v27];
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
        v4 += sprintf_s(v4, v3 - v4, ":");
      v17 = sprintf_s(v4, v3 - v4, "%x", (unsigned __int16)__ROR2__(*((_WORD *)Addr + v15), 8));
    }
    else
    {
      v17 = sprintf_s(v4, v3 - v4, "::");
      v15 = v13 - 1;
    }
    ++v15;
    v4 += v17;
  }
  while ( v15 < v2 );
  if ( v2 < 8 )
    v4 += sprintf_s(
            v4,
            v3 - v4,
            ":%u.%u.%u.%u",
            *((unsigned __int8 *)Addr + 12),
            *((unsigned __int8 *)Addr + 13),
            *((unsigned __int8 *)Addr + 14),
            *((unsigned __int8 *)Addr + 15));
  return v4;
}
