/*
 * XREFs of SdbpGetProcessHistory @ 0x140770114
 * Callers:
 *     SdbpInitializeSearchDBContext @ 0x140541D04 (SdbpInitializeSearchDBContext.c)
 * Callees:
 *     _wcsnicmp @ 0x14015EC50 (_wcsnicmp.c)
 *     memmove @ 0x140192C00 (memmove.c)
 *     RtlUpcaseUnicodeChar @ 0x1404817B0 (RtlUpcaseUnicodeChar.c)
 *     RtlGetNtSystemRoot @ 0x140542E50 (RtlGetNtSystemRoot.c)
 *     AslAlloc @ 0x140548100 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
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
  WCHAR v15; // ax
  int v16; // r8d
  WCHAR v17; // ax
  WCHAR *v18; // rdx
  __int64 v19; // rbp
  int v20; // ebx
  SIZE_T v21; // rbp
  _WORD *v22; // rax
  _WORD *v23; // r14
  char *v24; // rsi
  _WORD *result; // rax
  SIZE_T v26; // rbp
  PWSTR v27; // rax
  size_t v28; // rdi
  PWSTR v29; // rdx
  WCHAR *v30; // r15
  WCHAR v31; // r12
  WCHAR v32; // bx
  WCHAR v33; // ax
  int v34; // r8d
  WCHAR v35; // ax
  WCHAR *v36; // rdx
  __int64 v37; // rcx
  unsigned __int64 v38; // rdi
  _WORD *v39; // rsi
  char *v40; // rsi
  WCHAR *v41; // [rsp+20h] [rbp-58h]
  unsigned int v42; // [rsp+80h] [rbp+8h]
  unsigned int v45; // [rsp+98h] [rbp+20h]

  v3 = -1LL;
  v4 = a1;
  v5 = -1LL;
  do
    ++v5;
  while ( a2[v5] );
  v42 = v5;
  v6 = -1LL;
  do
    ++v6;
  while ( a3[v6] );
  v45 = v6;
  v7 = a1;
  if ( !wcsnicmp(L"__PROCESS_HISTORY", L"systemroot", 0xAuLL) )
  {
    NtSystemRoot = RtlGetNtSystemRoot();
    v10 = -1LL;
    do
      ++v10;
    while ( NtSystemRoot[v10] );
LABEL_35:
    v8 = (unsigned int)v5 + v45 + 2;
    v20 = -1073741789;
    v19 = v8 + v10 + 1;
    goto LABEL_32;
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
      if ( v12 == L"" && (v15 = *v7, *v7 == 61) )
      {
        v16 = 1;
      }
      else
      {
        v17 = *v7;
        v16 = 0;
        if ( !*v7 )
          goto LABEL_29;
        while ( v17 != 61 || v7 == v11 )
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
      if ( v16 )
      {
        LODWORD(v5) = v42;
        v10 = v7 - (v18 + 1);
        goto LABEL_35;
      }
LABEL_29:
      if ( !*++v7 )
      {
        LODWORD(v5) = v42;
        break;
      }
    }
  }
  v19 = (unsigned int)v5 + v45 + 1;
  v20 = -1073741568;
LABEL_32:
  v21 = 2 * v19;
  v22 = AslAlloc(v8, v21);
  v23 = v22;
  v24 = (char *)v22;
  if ( !v22 )
  {
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpGetProcessHistory",
      2237,
      (unsigned int)"Unable to allocate process history buffer");
    return 0LL;
  }
  *v22 = 0;
  if ( v20 != -1073741789 )
    goto LABEL_72;
  v26 = v21 >> 1;
  if ( !wcsnicmp(L"__PROCESS_HISTORY", L"systemroot", 0xAuLL) )
  {
    v27 = RtlGetNtSystemRoot();
    do
      ++v3;
    while ( v27[v3] );
    if ( v3 < v26 )
    {
      v28 = v3;
      v29 = v27;
      goto LABEL_68;
    }
    goto LABEL_41;
  }
  if ( !v4 || !*v4 )
    goto LABEL_72;
  while ( 1 )
  {
    v41 = v4;
    v30 = (WCHAR *)L"__PROCESS_HISTORY";
    do
    {
      v31 = *v4;
      if ( !*v4 )
        break;
      v32 = RtlUpcaseUnicodeChar(*v30);
      if ( RtlUpcaseUnicodeChar(v31) != v32 )
        break;
      ++v4;
      ++v30;
    }
    while ( v30 < L"" );
    if ( v30 == L"" && (v33 = *v4, *v4 == 61) )
    {
      v34 = 1;
    }
    else
    {
      v35 = *v4;
      v34 = 0;
      if ( !*v4 )
        goto LABEL_64;
      while ( v35 != 61 || v4 == v41 )
      {
        v35 = v4[1];
        ++v4;
        if ( !v35 )
          goto LABEL_64;
      }
      v33 = *v4;
      if ( !*v4 )
        goto LABEL_64;
    }
    v36 = v4;
    if ( v33 )
    {
      v37 = 0LL;
      do
      {
        if ( (__int64)(v37 & 0xFFFFFFFFFFFFFFFEuLL) >= 65534 )
          break;
        ++v4;
        v37 += 2LL;
      }
      while ( *v4 );
    }
    if ( v34 )
      break;
LABEL_64:
    if ( !*++v4 )
      goto LABEL_72;
  }
  v29 = v36 + 1;
  v38 = v4 - v29;
  if ( v38 >= v26 )
  {
LABEL_41:
    if ( v26 )
      *v23 = 0;
    goto LABEL_72;
  }
  v28 = v38;
LABEL_68:
  memmove(v23, v29, v28 * 2);
  v39 = &v23[v28];
  v23[v28] = 0;
  if ( v23[v28 - 1] == 59 )
    v39 = &v23[v28 - 1];
  else
    *v39 = 59;
  v24 = (char *)(v39 + 1);
LABEL_72:
  memmove(v24, a2, 2LL * v42);
  v40 = &v24[2 * v42];
  memmove(v40, a3, 2LL * v45);
  result = v23;
  *(_WORD *)&v40[2 * v45] = 0;
  return result;
}
