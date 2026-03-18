/*
 * XREFs of AslEnvGetSysNativeDirPathForGuestBuf @ 0x1407DBC78
 * Callers:
 *     SdbpGetPathAppraiser @ 0x1407D81F0 (SdbpGetPathAppraiser.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140146E14 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x1407DA028 (AslPathCombine.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x1407DBED4 (AslEnvGetSystem32DirPathBuf.c)
 */

__int64 __fastcall AslEnvGetSysNativeDirPathForGuestBuf(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _WORD *a3,
        __int16 a4,
        _WORD *a5)
{
  __int64 v8; // r8
  wchar_t *v9; // rdx
  wchar_t v10; // ax
  wchar_t *v11; // rax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  wchar_t *v14; // rax
  int v15; // ebx
  __int64 v16; // rax
  wchar_t *v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax
  char *v20; // r8
  wchar_t v21; // r9
  wchar_t *v22; // rax
  int v23; // eax
  const char *v24; // r9
  int v25; // r8d
  __int64 v27; // [rsp+20h] [rbp-C8h]
  unsigned int v28; // [rsp+20h] [rbp-C8h]
  int v29; // [rsp+20h] [rbp-C8h]
  wchar_t pszSrc[64]; // [rsp+30h] [rbp-B8h] BYREF

  *pszDest = 0;
  if ( a5 && *a5 != a4 )
  {
    memset(pszSrc, 0, sizeof(pszSrc));
    v8 = 64LL;
    v9 = pszSrc;
    do
    {
      if ( v8 == -2147483582 )
        break;
      v10 = *(wchar_t *)((char *)v9 + (char *)L"\\SystemRoot" - (char *)pszSrc);
      if ( !v10 )
        break;
      *v9++ = v10;
      --v8;
    }
    while ( v8 );
    v11 = v9 - 1;
    v12 = -2147483643;
    if ( v8 )
    {
      v11 = v9;
      v12 = 0;
    }
    *v11 = 0;
    if ( v8 )
    {
      v13 = 64LL;
      v14 = pszSrc;
      do
      {
        if ( !*v14 )
          break;
        ++v14;
        --v13;
      }
      while ( v13 );
      v15 = -1073741811;
      if ( v13 )
        v15 = 0;
      v16 = 64 - v13;
      if ( v13 )
      {
        v17 = &pszSrc[v16];
        v18 = 64 - v16;
        if ( 64 != v16 )
        {
          v19 = 2147483646LL;
          v20 = (char *)((char *)L"\\SysNative" - (char *)v17);
          do
          {
            if ( !v19 )
              break;
            v21 = *(wchar_t *)((char *)v17 + (_QWORD)v20);
            if ( !v21 )
              break;
            *v17 = v21;
            --v19;
            ++v17;
            --v18;
          }
          while ( v18 );
        }
        v22 = v17 - 1;
        v15 = -2147483643;
        if ( v18 )
        {
          v22 = v17;
          v15 = 0;
        }
        *v22 = 0;
      }
      if ( v15 >= 0 )
        goto LABEL_29;
      v29 = v15;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslPathToSystemPathBuf",
        1456,
        (unsigned int)"Failed to cat string [%x]",
        v29);
      v12 = -1073741811;
    }
    else
    {
      v28 = v12;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslPathToSystemPathBuf",
        1439,
        (unsigned int)"Failed to copy string [%x]",
        v28);
    }
    if ( (v12 & 0x80000000) != 0 )
    {
      LODWORD(v27) = v12;
      AslLogCallPrintf(
        1LL,
        (unsigned int)"AslEnvGetSysNativeDirPathForGuestBuf",
        1686,
        (unsigned int)"AslPathToSystemPathBuf failed [%x]",
        v27);
      return v12;
    }
LABEL_29:
    if ( a3 && *a3 )
    {
      v23 = AslPathCombine(pszSrc, (__int64)a3, pszDest, cchDest);
      v12 = v23;
      if ( v23 >= 0 )
        return v12;
      v24 = "AslPathCombine failed [%x]";
      v25 = 1696;
    }
    else
    {
      v23 = RtlStringCchCopyW(pszDest, cchDest, pszSrc);
      v12 = v23;
      if ( v23 >= 0 )
        return v12;
      v24 = "RtlStringCchCopyW failed [%x]";
      v25 = 1704;
    }
    LODWORD(v27) = v23;
    AslLogCallPrintf(1LL, (unsigned int)"AslEnvGetSysNativeDirPathForGuestBuf", v25, (_DWORD)v24, v27);
    return v12;
  }
  return AslEnvGetSystem32DirPathBuf(pszDest, cchDest, (__int64)a5);
}
