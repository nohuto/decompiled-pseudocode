/*
 * XREFs of AslEnvVarQuery @ 0x1405BBF44
 * Callers:
 *     AslEnvExpandStrings @ 0x1405BBDA4 (AslEnvExpandStrings.c)
 * Callees:
 *     _wcsnicmp @ 0x14016A210 (_wcsnicmp.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     RtlGetNtSystemRoot @ 0x1404B12B0 (RtlGetNtSystemRoot.c)
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
 */

__int64 __fastcall AslEnvVarQuery(
        WCHAR *a1,
        const wchar_t *a2,
        unsigned __int64 a3,
        _WORD *a4,
        unsigned __int64 a5,
        unsigned __int64 *a6)
{
  unsigned int v6; // edi
  WCHAR *v7; // rbp
  PWSTR NtSystemRoot; // rax
  PWSTR v12; // rdx
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  size_t v16; // rbx
  WCHAR *v17; // r13
  WCHAR *v18; // r15
  WCHAR v19; // bx
  WCHAR v20; // ax
  int v21; // r8d
  WCHAR v22; // ax
  WCHAR *v23; // rdx
  __int64 v24; // rcx
  unsigned __int64 v25; // rsi

  v6 = 0;
  v7 = (WCHAR *)&a2[a3];
  if ( a3 < 0xA || wcsnicmp(a2, L"systemroot", 0xAuLL) )
  {
    if ( !a1 )
      return (unsigned int)-1073741568;
    while ( 1 )
    {
      if ( !*a1 )
        return (unsigned int)-1073741568;
      v17 = a1;
      v18 = (WCHAR *)a2;
      if ( a2 < v7 )
      {
        do
        {
          if ( !*a1 )
            break;
          v19 = RtlUpcaseUnicodeChar(*a1);
          if ( v19 != RtlUpcaseUnicodeChar(*v18) )
            break;
          ++a1;
          ++v18;
        }
        while ( v18 < v7 );
      }
      if ( v18 == v7 && (v20 = *a1, *a1 == 61) )
      {
        v21 = 1;
      }
      else
      {
        v22 = *a1;
        v21 = 0;
        if ( !*a1 )
          goto LABEL_38;
        do
        {
          if ( v22 == 61 && a1 != v17 )
            break;
          v22 = *++a1;
        }
        while ( *a1 );
        v20 = *a1;
        if ( !*a1 )
          goto LABEL_38;
      }
      v23 = a1;
      if ( v20 )
      {
        v24 = 0LL;
        do
        {
          if ( (__int64)(v24 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
            break;
          ++a1;
          v24 += 2LL;
        }
        while ( *a1 );
      }
      if ( v21 )
      {
        v12 = v23 + 1;
        v25 = a1 - v12;
        if ( v25 < a5 )
        {
          v16 = v25;
          *a6 = v25;
          goto LABEL_11;
        }
        if ( a4 && a5 )
          *a4 = 0;
        v14 = v25 + 1;
        goto LABEL_8;
      }
LABEL_38:
      ++a1;
    }
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  v12 = NtSystemRoot;
  v13 = -1LL;
  do
    ++v13;
  while ( NtSystemRoot[v13] );
  if ( v13 < a5 )
  {
    *a6 = v13;
    v16 = v13;
LABEL_11:
    memmove(a4, v12, v16 * 2);
    a4[v16] = 0;
  }
  else
  {
    if ( a4 && a5 )
      *a4 = 0;
    v14 = v13 + 1;
LABEL_8:
    v6 = -1073741789;
    *a6 = v14;
  }
  return v6;
}
