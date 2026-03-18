/*
 * XREFs of AslEnvGetSysNativeDirPathForGuestBuf @ 0x140772FA8
 * Callers:
 *     SdbpGetPathAppraiser @ 0x140770F10 (SdbpGetPathAppraiser.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1400DF0FC (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x140772D1C (AslPathCombine.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140773204 (AslEnvGetSystem32DirPathBuf.c)
 */

__int64 __fastcall AslEnvGetSysNativeDirPathForGuestBuf(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        const wchar_t *a3,
        __int16 a4,
        _WORD *a5)
{
  __int64 v8; // r8
  wchar_t *v9; // rcx
  int v10; // ebx
  wchar_t v11; // ax
  __int64 v12; // rax
  wchar_t *v13; // rcx
  int v14; // ebx
  __int64 v15; // rcx
  wchar_t *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  char *v19; // r9
  wchar_t v20; // cx
  wchar_t pszSrc[64]; // [rsp+30h] [rbp-B8h] BYREF

  *pszDest = 0;
  if ( a5 && *a5 != a4 )
  {
    memset(pszSrc, 0, sizeof(pszSrc));
    v8 = 64LL;
    v9 = pszSrc;
    v10 = 0;
    while ( v8 != -2147483582 )
    {
      v11 = *(wchar_t *)((char *)v9 + (char *)L"\\SystemRoot" - (char *)pszSrc);
      if ( !v11 )
        break;
      *v9++ = v11;
      if ( !--v8 )
      {
        --v9;
        v10 = -2147483643;
        break;
      }
    }
    *v9 = 0;
    if ( v10 >= 0 )
    {
      v12 = 64LL;
      v13 = pszSrc;
      do
      {
        if ( !*v13 )
          break;
        ++v13;
        --v12;
      }
      while ( v12 );
      v14 = -1073741811;
      if ( v12 )
      {
        v14 = 0;
        v15 = 64 - v12;
      }
      else
      {
        v15 = 0LL;
      }
      if ( v12 )
      {
        v14 = 0;
        v16 = &pszSrc[v15];
        v17 = 64 - v15;
        if ( 64 == v15 )
          goto LABEL_24;
        v18 = 2147483646LL;
        v19 = (char *)((char *)L"\\SysNative" - (char *)v16);
        while ( v18 )
        {
          v20 = *(wchar_t *)((char *)v16 + (_QWORD)v19);
          if ( !v20 )
            break;
          *v16 = v20;
          --v18;
          ++v16;
          if ( !--v17 )
            goto LABEL_24;
        }
        if ( !v17 )
        {
LABEL_24:
          --v16;
          v14 = -2147483643;
        }
        *v16 = 0;
      }
      if ( v14 >= 0 )
      {
        if ( a3 && *a3 )
        {
          v10 = AslPathCombine(pszSrc, a3, pszDest, cchDest);
          if ( v10 < 0 )
            goto LABEL_33;
        }
        else
        {
          v10 = RtlStringCchCopyW(pszDest, cchDest, pszSrc);
          if ( v10 < 0 )
            goto LABEL_33;
        }
        return (unsigned int)v10;
      }
      AslLogCallPrintf(1LL);
      v10 = -1073741811;
    }
    else
    {
      AslLogCallPrintf(1LL);
    }
LABEL_33:
    AslLogCallPrintf(1LL);
    return (unsigned int)v10;
  }
  return AslEnvGetSystem32DirPathBuf(pszDest, cchDest, (__int64)a5);
}
