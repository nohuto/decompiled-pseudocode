/*
 * XREFs of RtlIpv6AddressToStringA @ 0x140254830
 * Callers:
 *     RtlIpv6AddressToStringExA @ 0x140254AB0 (RtlIpv6AddressToStringExA.c)
 * Callees:
 *     sprintf_s @ 0x140164670 (sprintf_s.c)
 */

PSTR __stdcall RtlIpv6AddressToStringA(const struct in6_addr *Addr, PSTR S)
{
  unsigned int v2; // r14d
  PSTR v3; // rbp
  __int64 v4; // rsi
  char *v5; // rdi
  __int16 v7; // ax
  __int16 v8; // dx
  int v9; // ecx
  const char *v10; // r9
  int v11; // eax
  unsigned int v13; // r10d
  int v14; // r11d
  __int64 v15; // r9
  __int64 v16; // r8
  unsigned int v17; // edx
  signed int v18; // eax
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // r13
  int v22; // eax

  v2 = 8;
  v3 = S + 46;
  v4 = 0LL;
  v5 = S;
  if ( !*(_DWORD *)Addr && !*((_WORD *)Addr + 2) && !*((_WORD *)Addr + 3) && *((_WORD *)Addr + 6) )
  {
    v7 = *((_WORD *)Addr + 4);
    if ( v7 )
    {
      if ( v7 == -1 && !*((_WORD *)Addr + 5) )
      {
        v11 = sprintf_s(
                S,
                0x2EuLL,
                "::ffff:0:%u.%u.%u.%u",
                *((unsigned __int8 *)Addr + 12),
                *((unsigned __int8 *)Addr + 13),
                *((unsigned __int8 *)Addr + 14),
                *((unsigned __int8 *)Addr + 15));
        return &v5[v11];
      }
    }
    else
    {
      v8 = *((_WORD *)Addr + 5);
      if ( ((v8 + 1) & 0xFFFE) == 0 )
      {
        v9 = *((unsigned __int8 *)Addr + 14);
        v10 = &File;
        if ( v8 )
          v10 = "ffff:";
        v11 = sprintf_s(
                v5,
                v3 - v5,
                "::%hs%u.%u.%u.%u",
                v10,
                *((unsigned __int8 *)Addr + 12),
                *((unsigned __int8 *)Addr + 13),
                v9,
                *((unsigned __int8 *)Addr + 15));
        return &v5[v11];
      }
    }
  }
  v13 = 0;
  v14 = 0;
  v15 = 0LL;
  if ( (*((_WORD *)Addr + 4) & 0xFFFD) == 0 && *((_WORD *)Addr + 5) == 0xFE5E )
    v2 = 6;
  v16 = 0LL;
  v17 = 1;
  do
  {
    if ( *((_WORD *)Addr + v16) )
    {
      v15 = v17;
    }
    else if ( (int)(v17 - v15) > (int)(v13 - v14) )
    {
      v14 = v15;
      v13 = v17;
    }
    ++v17;
    ++v16;
  }
  while ( v16 < v2 );
  v18 = 0;
  if ( (int)(v13 - v14) > 1 )
    v18 = v13;
  v19 = v18;
  v20 = 0;
  if ( (int)(v13 - v14) > 1 )
    v20 = v14;
  v21 = v20;
  do
  {
    if ( v21 > v4 || v4 >= v19 )
    {
      if ( v4 && v4 != v19 )
        v5 += sprintf_s(v5, v3 - v5, ":", v15);
      v22 = sprintf_s(v5, v3 - v5, "%x", (unsigned __int16)__ROR2__(*((_WORD *)Addr + v4), 8));
    }
    else
    {
      v22 = sprintf_s(v5, v3 - v5, "::", v15);
      v4 = v19 - 1;
    }
    ++v4;
    v5 += v22;
  }
  while ( v4 < v2 );
  if ( v2 < 8 )
    v5 += sprintf_s(
            v5,
            v3 - v5,
            ":%u.%u.%u.%u",
            *((unsigned __int8 *)Addr + 12),
            *((unsigned __int8 *)Addr + 13),
            *((unsigned __int8 *)Addr + 14),
            *((unsigned __int8 *)Addr + 15));
  return v5;
}
