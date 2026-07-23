/*
 * XREFs of RtlIpv6AddressToStringA @ 0x140131350
 * Callers:
 *     RtlIpv6AddressToStringExA @ 0x14023E870 (RtlIpv6AddressToStringExA.c)
 * Callees:
 *     sprintf_s @ 0x14016FE70 (sprintf_s.c)
 */

PSTR __stdcall RtlIpv6AddressToStringA(const struct in6_addr *Addr, PSTR S)
{
  unsigned int v2; // r14d
  PSTR v3; // rbp
  __int64 v4; // rsi
  char *v5; // rdi
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
  __int16 v18; // cx
  __int16 v19; // dx
  const char *v20; // r9
  int v21; // eax

  v2 = 8;
  v3 = S + 46;
  v4 = 0LL;
  v5 = S;
  if ( *(_DWORD *)Addr || *((_WORD *)Addr + 2) || *((_WORD *)Addr + 3) || !*((_WORD *)Addr + 6) )
    goto LABEL_5;
  v18 = *((_WORD *)Addr + 4);
  if ( !v18 )
  {
    v19 = *((_WORD *)Addr + 5);
    if ( ((v19 + 1) & 0xFFFE) == 0 )
    {
      v20 = File;
      if ( v19 )
        v20 = "ffff:";
      v21 = sprintf_s(
              v5,
              v3 - v5,
              "::%hs%u.%u.%u.%u",
              v20,
              *((unsigned __int8 *)Addr + 12),
              *((unsigned __int8 *)Addr + 13),
              *((unsigned __int8 *)Addr + 14),
              *((unsigned __int8 *)Addr + 15));
      return &v5[v21];
    }
  }
  if ( v18 == -1 && !*((_WORD *)Addr + 5) )
  {
    v21 = sprintf_s(
            v5,
            v3 - v5,
            "::ffff:0:%u.%u.%u.%u",
            *((unsigned __int8 *)Addr + 12),
            *((unsigned __int8 *)Addr + 13),
            *((unsigned __int8 *)Addr + 14),
            *((unsigned __int8 *)Addr + 15));
    return &v5[v21];
  }
LABEL_5:
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
        v5 += sprintf_s(v5, v3 - v5, ":", v9);
      v16 = sprintf_s(v5, v3 - v5, "%x", (unsigned __int16)__ROR2__(*((_WORD *)Addr + v4), 8));
    }
    else
    {
      v16 = sprintf_s(v5, v3 - v5, "::", v9);
      v4 = v13 - 1;
    }
    ++v4;
    v5 += v16;
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
