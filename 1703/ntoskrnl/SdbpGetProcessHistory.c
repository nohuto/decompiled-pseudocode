/*
 * XREFs of SdbpGetProcessHistory @ 0x14072CF3C
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x1405BC0F0 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     _wcsnicmp @ 0x14016A210 (_wcsnicmp.c)
 *     memmove @ 0x140192A40 (memmove.c)
 *     RtlGetNtSystemRoot @ 0x1404B12B0 (RtlGetNtSystemRoot.c)
 *     AslAlloc @ 0x1404B5F00 (AslAlloc.c)
 *     RtlUpcaseUnicodeChar @ 0x140502520 (RtlUpcaseUnicodeChar.c)
 *     AslLogCallPrintf @ 0x14072E8A4 (AslLogCallPrintf.c)
 */

_WORD *__fastcall SdbpGetProcessHistory(WCHAR *a1, _WORD *a2, _WORD *a3)
{
  unsigned __int64 v3; // r15
  WCHAR *v4; // rdi
  __int64 v5; // rbp
  __int64 v6; // r14
  WCHAR *v7; // rsi
  PWSTR NtSystemRoot; // rax
  __int64 v9; // rcx
  __int64 v11; // rsi
  WCHAR *v12; // rbp
  WCHAR *v13; // r14
  WCHAR v14; // bx
  WCHAR v15; // ax
  int v16; // r8d
  WCHAR v17; // ax
  WCHAR *v18; // rdx
  __int64 v19; // rcx
  int v20; // ebx
  __int64 v21; // rcx
  unsigned __int64 v22; // rbp
  _WORD *v23; // rax
  _WORD *v24; // r14
  char *v25; // rsi
  _WORD *result; // rax
  unsigned __int64 v27; // rbp
  PWSTR v28; // rax
  size_t v29; // rdi
  PWSTR v30; // rdx
  WCHAR *v31; // r15
  WCHAR v32; // r12
  WCHAR v33; // bx
  WCHAR v34; // ax
  int v35; // r8d
  WCHAR v36; // ax
  WCHAR *v37; // rdx
  __int64 v38; // rcx
  unsigned __int64 v39; // rdi
  _WORD *v40; // rsi
  char *v41; // rsi
  WCHAR *v42; // [rsp+20h] [rbp-58h]
  unsigned int v43; // [rsp+80h] [rbp+8h]
  unsigned int v46; // [rsp+98h] [rbp+20h]

  v3 = -1LL;
  v4 = a1;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v43 = v5;
  v6 = -1LL;
  do
    ++v6;
  while ( a3[v6] );
  v46 = v6;
  v7 = a1;
  if ( !wcsnicmp(L"__PROCESS_HISTORY", L"systemroot", 0xAuLL) )
  {
    NtSystemRoot = RtlGetNtSystemRoot();
    v9 = -1LL;
    while ( NtSystemRoot[++v9] != 0 )
      ;
    v11 = v9 + 1;
LABEL_35:
    v20 = -1073741789;
    v21 = v11 + (unsigned int)(v6 + v5 + 2);
    goto LABEL_32;
  }
  if ( v4 && *v4 )
  {
    while ( 1 )
    {
      v12 = v7;
      v13 = (WCHAR *)L"__PROCESS_HISTORY";
      do
      {
        if ( !*v7 )
          break;
        v14 = RtlUpcaseUnicodeChar(*v7);
        if ( v14 != RtlUpcaseUnicodeChar(*v13) )
          break;
        ++v7;
        ++v13;
      }
      while ( v13 < L"" );
      if ( v13 == L"" && (v15 = *v7, *v7 == 61) )
      {
        v16 = 1;
      }
      else
      {
        v17 = *v7;
        v16 = 0;
        if ( !*v7 )
          goto LABEL_29;
        while ( v17 != 61 || v7 == v12 )
        {
          v17 = v7[1];
          ++v7;
          if ( !v17 )
            goto LABEL_29;
        }
        v15 = *v7;
        if ( !*v7 )
          goto LABEL_29;
      }
      v18 = v7;
      if ( v15 )
      {
        v19 = 0LL;
        do
        {
          if ( (__int64)(v19 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
            break;
          ++v7;
          v19 += 2LL;
        }
        while ( *v7 );
      }
      if ( v16 )
      {
        LODWORD(v5) = v43;
        LODWORD(v6) = v46;
        v11 = v7 - (v18 + 1) + 1;
        goto LABEL_35;
      }
LABEL_29:
      if ( !*++v7 )
      {
        LODWORD(v5) = v43;
        LODWORD(v6) = v46;
        break;
      }
    }
  }
  v20 = -1073741568;
  v21 = (unsigned int)(v6 + v5 + 1);
LABEL_32:
  v22 = 2 * v21;
  v23 = AslAlloc(v21, 2 * v21);
  v24 = v23;
  v25 = (char *)v23;
  if ( !v23 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetProcessHistory",
      1483,
      (unsigned int)"Unable to allocate process history buffer");
    return 0LL;
  }
  *v23 = 0;
  if ( v20 != -1073741789 )
    goto LABEL_72;
  v27 = v22 >> 1;
  if ( !wcsnicmp(L"__PROCESS_HISTORY", L"systemroot", 0xAuLL) )
  {
    v28 = RtlGetNtSystemRoot();
    do
      ++v3;
    while ( v28[v3] );
    if ( v3 < v27 )
    {
      v29 = v3;
      v30 = v28;
      goto LABEL_68;
    }
    goto LABEL_41;
  }
  if ( !v4 || !*v4 )
    goto LABEL_72;
  while ( 1 )
  {
    v42 = v4;
    v31 = (WCHAR *)L"__PROCESS_HISTORY";
    do
    {
      v32 = *v4;
      if ( !*v4 )
        break;
      v33 = RtlUpcaseUnicodeChar(*v31);
      if ( RtlUpcaseUnicodeChar(v32) != v33 )
        break;
      ++v4;
      ++v31;
    }
    while ( v31 < L"" );
    if ( v31 == L"" && (v34 = *v4, *v4 == 61) )
    {
      v35 = 1;
    }
    else
    {
      v36 = *v4;
      v35 = 0;
      if ( !*v4 )
        goto LABEL_64;
      while ( v36 != 61 || v4 == v42 )
      {
        v36 = v4[1];
        ++v4;
        if ( !v36 )
          goto LABEL_64;
      }
      v34 = *v4;
      if ( !*v4 )
        goto LABEL_64;
    }
    v37 = v4;
    if ( v34 )
    {
      v38 = 0LL;
      do
      {
        if ( (__int64)(v38 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
          break;
        ++v4;
        v38 += 2LL;
      }
      while ( *v4 );
    }
    if ( v35 )
      break;
LABEL_64:
    if ( !*++v4 )
      goto LABEL_72;
  }
  v30 = v37 + 1;
  v39 = v4 - v30;
  if ( v39 >= v27 )
  {
LABEL_41:
    if ( v27 )
      *v24 = 0;
    goto LABEL_72;
  }
  v29 = v39;
LABEL_68:
  memmove(v24, v30, v29 * 2);
  v40 = &v24[v29];
  v24[v29] = 0;
  if ( v24[v29 - 1] == 59 )
    v40 = &v24[v29 - 1];
  else
    *v40 = 59;
  v25 = (char *)(v40 + 1);
LABEL_72:
  memmove(v25, a2, 2LL * v43);
  v41 = &v25[2 * v43];
  memmove(v41, a3, 2LL * v46);
  result = v24;
  *(_WORD *)&v41[2 * v46] = 0;
  return result;
}
