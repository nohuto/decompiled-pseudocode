/*
 * XREFs of SdbpGetProcessHistory @ 0x1407D73D8
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x14061F27C (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     _wcsnicmp @ 0x1401889A0 (_wcsnicmp.c)
 *     memmove @ 0x1401BC900 (memmove.c)
 *     RtlUpcaseUnicodeChar @ 0x1404A9730 (RtlUpcaseUnicodeChar.c)
 *     RtlGetNtSystemRoot @ 0x14057EB70 (RtlGetNtSystemRoot.c)
 *     AslAlloc @ 0x1405FDD00 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 */

_WORD *__fastcall SdbpGetProcessHistory(WCHAR *a1, _WORD *a2, _WORD *a3)
{
  unsigned __int64 v3; // r15
  WCHAR *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // rax
  WCHAR *v7; // rsi
  __int64 v8; // rcx
  PWSTR NtSystemRoot; // rax
  __int64 v10; // rsi
  WCHAR *v11; // r12
  WCHAR *v12; // r14
  WCHAR v13; // bp
  WCHAR v14; // bx
  int v15; // r8d
  WCHAR v16; // ax
  __int64 v17; // rbp
  int v18; // ebx
  SIZE_T v19; // rbp
  _WORD *v20; // rax
  _WORD *v21; // r14
  char *v22; // rsi
  _WORD *result; // rax
  WCHAR *v24; // rdx
  SIZE_T v25; // rbp
  PWSTR v26; // rax
  size_t v27; // rdi
  PWSTR v28; // rdx
  WCHAR *v29; // r15
  WCHAR v30; // r12
  WCHAR v31; // bx
  int v32; // r8d
  WCHAR v33; // ax
  WCHAR *v34; // rdx
  __int64 v35; // rcx
  unsigned __int64 v36; // rdi
  _WORD *v37; // rsi
  char *v38; // rsi
  WCHAR *v39; // [rsp+20h] [rbp-58h]
  unsigned int v40; // [rsp+80h] [rbp+8h]
  unsigned int v43; // [rsp+98h] [rbp+20h]

  v3 = -1LL;
  v4 = a1;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v40 = v5;
  v6 = -1LL;
  do
    ++v6;
  while ( a3[v6] );
  v43 = v6;
  v7 = a1;
  if ( !wcsnicmp(L"__PROCESS_HISTORY", L"systemroot", 0xAuLL) )
  {
    NtSystemRoot = RtlGetNtSystemRoot();
    v10 = -1LL;
    do
      ++v10;
    while ( NtSystemRoot[v10] );
LABEL_33:
    v8 = (unsigned int)v5 + v43 + 2;
    v18 = -1073741789;
    v17 = v8 + v10 + 1;
    goto LABEL_25;
  }
  if ( v4 && *v4 )
  {
    while ( 1 )
    {
      v11 = v7;
      v12 = (WCHAR *)L"__PROCESS_HISTORY";
      do
      {
        v13 = *v7;
        if ( !*v7 )
          break;
        v14 = RtlUpcaseUnicodeChar(*v12);
        if ( RtlUpcaseUnicodeChar(v13) != v14 )
          break;
        ++v7;
        ++v12;
      }
      while ( v12 < L"" );
      if ( v12 == L"" && *v7 == 61 )
      {
        v15 = 1;
      }
      else
      {
        v16 = *v7;
        v15 = 0;
        if ( !*v7 )
          goto LABEL_22;
        while ( v16 != 61 || v7 == v11 )
        {
          v16 = v7[1];
          ++v7;
          if ( !v16 )
            goto LABEL_22;
        }
      }
      v24 = v7;
      if ( *v7 )
      {
        v8 = 0LL;
        do
        {
          if ( (__int64)(v8 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
            break;
          ++v7;
          v8 += 2LL;
        }
        while ( *v7 );
      }
      if ( v15 )
      {
        LODWORD(v5) = v40;
        v10 = v7 - (v24 + 1);
        goto LABEL_33;
      }
LABEL_22:
      if ( !*++v7 )
      {
        LODWORD(v5) = v40;
        break;
      }
    }
  }
  v17 = (unsigned int)v5 + v43 + 1;
  v18 = -1073741568;
LABEL_25:
  v19 = 2 * v17;
  v20 = AslAlloc(v8, v19);
  v21 = v20;
  v22 = (char *)v20;
  if ( !v20 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetProcessHistory",
      2237,
      (unsigned int)"Unable to allocate process history buffer");
    return 0LL;
  }
  *v20 = 0;
  if ( v18 != -1073741789 )
    goto LABEL_67;
  v25 = v19 >> 1;
  if ( !wcsnicmp(L"__PROCESS_HISTORY", L"systemroot", 0xAuLL) )
  {
    v26 = RtlGetNtSystemRoot();
    do
      ++v3;
    while ( v26[v3] );
    if ( v3 >= v25 )
      goto LABEL_61;
    v27 = v3;
    v28 = v26;
    goto LABEL_64;
  }
  if ( !v4 || !*v4 )
    goto LABEL_67;
  while ( 1 )
  {
    v39 = v4;
    v29 = (WCHAR *)L"__PROCESS_HISTORY";
    do
    {
      v30 = *v4;
      if ( !*v4 )
        break;
      v31 = RtlUpcaseUnicodeChar(*v29);
      if ( RtlUpcaseUnicodeChar(v30) != v31 )
        break;
      ++v4;
      ++v29;
    }
    while ( v29 < L"" );
    if ( v29 == L"" && *v4 == 61 )
    {
      v32 = 1;
      goto LABEL_55;
    }
    v33 = *v4;
    v32 = 0;
    if ( *v4 )
      break;
LABEL_53:
    if ( !*++v4 )
      goto LABEL_67;
  }
  while ( v33 != 61 || v4 == v39 )
  {
    v33 = v4[1];
    ++v4;
    if ( !v33 )
      goto LABEL_53;
  }
LABEL_55:
  v34 = v4;
  if ( *v4 )
  {
    v35 = 0LL;
    do
    {
      if ( (__int64)(v35 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
        break;
      ++v4;
      v35 += 2LL;
    }
    while ( *v4 );
  }
  if ( !v32 )
    goto LABEL_53;
  v28 = v34 + 1;
  v36 = v4 - v28;
  if ( v36 < v25 )
  {
    v27 = v36;
LABEL_64:
    memmove(v21, v28, v27 * 2);
    v21[v27] = 0;
    v37 = &v21[v27 - 1];
    if ( *v37 != 59 )
    {
      v37 = &v21[v27];
      v21[v27] = 59;
    }
    v22 = (char *)(v37 + 1);
    goto LABEL_67;
  }
LABEL_61:
  if ( v25 )
    *v21 = 0;
LABEL_67:
  memmove(v22, a2, 2LL * v40);
  v38 = &v22[2 * v40];
  memmove(v38, a3, 2LL * v43);
  result = v21;
  *(_WORD *)&v38[2 * v43] = 0;
  return result;
}
