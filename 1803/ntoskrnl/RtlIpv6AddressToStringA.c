/*
 * XREFs of RtlIpv6AddressToStringA @ 0x140144860
 * Callers:
 *     RtlIpv6AddressToStringExA @ 0x14028C8B0 (RtlIpv6AddressToStringExA.c)
 * Callees:
 *     sprintf_s @ 0x14018E540 (sprintf_s.c)
 */

PSTR __stdcall RtlIpv6AddressToStringA(const struct in6_addr *Addr, PSTR S)
{
  unsigned int v2; // r14d
  PSTR v3; // rbp
  char *v4; // rdi
  unsigned __int16 v6; // r9
  __int16 v7; // dx
  int v8; // r10d
  int v9; // r11d
  int v10; // esi
  int v11; // edx
  __int64 i; // r8
  int v13; // r9d
  int v14; // ecx
  int v15; // edx
  int v16; // eax
  int v17; // eax
  int v18; // eax
  __int64 v19; // r15
  int v20; // eax
  __int64 v21; // rsi
  __int64 v22; // r13
  int v23; // eax
  __int16 v25; // ax
  __int16 v26; // r11
  int v27; // ecx
  int v28; // r10d
  const char *v29; // r9
  int v30; // eax

  v2 = 8;
  v3 = S + 46;
  v4 = S;
  if ( *(_DWORD *)Addr )
    goto LABEL_5;
  if ( *((_WORD *)Addr + 2) )
    goto LABEL_5;
  if ( *((_WORD *)Addr + 3) )
    goto LABEL_5;
  v6 = *((_WORD *)Addr + 6);
  v7 = HIBYTE(v6);
  if ( !v6 )
    goto LABEL_5;
  v25 = *((_WORD *)Addr + 4);
  if ( v25 )
  {
    if ( v25 == -1 && !*((_WORD *)Addr + 5) )
    {
      v30 = sprintf_s(
              v4,
              v3 - v4,
              "::ffff:0:%u.%u.%u.%u",
              (unsigned __int8)v6,
              HIBYTE(v6),
              *((unsigned __int8 *)Addr + 14),
              *((unsigned __int8 *)Addr + 15));
      return &v4[v30];
    }
  }
  else
  {
    v26 = *((_WORD *)Addr + 5);
    if ( ((v26 + 1) & 0xFFFE) == 0 )
    {
      v27 = *((unsigned __int8 *)Addr + 14);
      v28 = (unsigned __int8)v6;
      v29 = &File;
      if ( v26 )
        v29 = "ffff:";
      v30 = sprintf_s(
              v4,
              v3 - v4,
              "::%hs%u.%u.%u.%u",
              v29,
              v28,
              (unsigned __int8)v7,
              v27,
              *((unsigned __int8 *)Addr + 15));
      return &v4[v30];
    }
  }
LABEL_5:
  v8 = 0;
  v9 = 0;
  v10 = 0;
  if ( (*((_WORD *)Addr + 4) & 0xFFFD) == 0 && *((_WORD *)Addr + 5) == 0xFE5E )
    v2 = 6;
  v11 = 0;
  for ( i = 0LL; i < v2; ++i )
  {
    v13 = v11 + 1;
    if ( *((_WORD *)Addr + i) )
    {
      v10 = v11 + 1;
    }
    else
    {
      v14 = v8 - v9;
      v15 = v11 - v10 + 1;
      v16 = v10;
      if ( v15 <= v8 - v9 )
        v16 = v9;
      v9 = v16;
      v17 = v13;
      if ( v15 <= v14 )
        v17 = v8;
      v8 = v17;
    }
    v11 = v13;
  }
  v18 = 0;
  if ( v8 - v9 > 1 )
    v18 = v8;
  v19 = v18;
  v20 = 0;
  if ( v8 - v9 > 1 )
    v20 = v9;
  v21 = 0LL;
  v22 = v20;
  do
  {
    if ( v21 >= v19 || v22 > v21 )
    {
      if ( v21 && v21 != v19 )
        v4 += sprintf_s(v4, v3 - v4, ":");
      v23 = sprintf_s(v4, v3 - v4, "%x", (unsigned __int16)__ROR2__(*((_WORD *)Addr + v21), 8));
    }
    else
    {
      v23 = sprintf_s(v4, v3 - v4, "::");
      v21 = v19 - 1;
    }
    ++v21;
    v4 += v23;
  }
  while ( v21 < v2 );
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
