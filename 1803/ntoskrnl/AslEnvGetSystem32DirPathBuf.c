/*
 * XREFs of AslEnvGetSystem32DirPathBuf @ 0x1407DBED4
 * Callers:
 *     SdbpGetPathSystem @ 0x1407D8420 (SdbpGetPathSystem.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x1407DBC78 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x140146E14 (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x1407DA028 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x1407DA190 (AslPathToSystemPathBuf.c)
 */

__int64 __fastcall AslEnvGetSystem32DirPathBuf(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        _WORD *a3,
        __int16 a4,
        __int16 *a5)
{
  __int16 v9; // cx
  __int64 v10; // r8
  _WORD *i; // rax
  unsigned int v12; // ebx
  int v14; // eax
  const char *v15; // r9
  int v16; // r8d
  wchar_t pszSrc[64]; // [rsp+30h] [rbp-B8h] BYREF

  memset(pszSrc, 0, sizeof(pszSrc));
  *pszDest = 0;
  if ( a5 )
    v9 = *a5;
  else
    v9 = a4;
  v10 = 0LL;
  for ( i = &unk_1403992F2; *(i - 1) != a4 || *i != v9; i += 8 )
  {
    if ( (unsigned __int64)++v10 >= 7 )
      return (unsigned int)-1073741637;
  }
  v14 = AslPathToSystemPathBuf(pszSrc, 0x40uLL, (&off_1403992F8)[2 * v10]);
  v12 = v14;
  if ( v14 >= 0 )
  {
    if ( a3 && *a3 )
    {
      v14 = AslPathCombine(pszSrc, (__int64)a3, pszDest, cchDest);
      v12 = v14;
      if ( v14 < 0 )
      {
        v15 = "AslPathCombine failed [%x]";
        v16 = 1424;
        goto LABEL_12;
      }
    }
    else
    {
      v14 = RtlStringCchCopyW(pszDest, cchDest, pszSrc);
      v12 = v14;
      if ( v14 < 0 )
      {
        v15 = "RtlStringCchCopyW failed [%x]";
        v16 = 1432;
        goto LABEL_12;
      }
    }
    return 0;
  }
  v15 = "AslPathToSystemPathBuf failed [%x]";
  v16 = 1414;
LABEL_12:
  AslLogCallPrintf(1LL, (unsigned int)"AslEnvGetSystem32DirPathBuf", v16, (_DWORD)v15, v14);
  return v12;
}
