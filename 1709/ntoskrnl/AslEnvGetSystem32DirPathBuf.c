/*
 * XREFs of AslEnvGetSystem32DirPathBuf @ 0x140773204
 * Callers:
 *     SdbpGetPathSystem @ 0x140771140 (SdbpGetPathSystem.c)
 *     AslEnvGetSysNativeDirPathForGuestBuf @ 0x140772FA8 (AslEnvGetSysNativeDirPathForGuestBuf.c)
 * Callees:
 *     RtlStringCchCopyW @ 0x1400DF0FC (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     memset @ 0x140192F40 (memset.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x140772D1C (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x140772E7C (AslPathToSystemPathBuf.c)
 */

__int64 __fastcall AslEnvGetSystem32DirPathBuf(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        const wchar_t *a3,
        __int16 a4,
        __int16 *a5)
{
  __int16 v9; // cx
  __int64 v10; // r8
  _WORD *i; // rax
  int v12; // ebx
  wchar_t pszSrc[64]; // [rsp+30h] [rbp-B8h] BYREF

  memset(pszSrc, 0, sizeof(pszSrc));
  *pszDest = 0;
  if ( a5 )
    v9 = *a5;
  else
    v9 = a4;
  v10 = 0LL;
  for ( i = &unk_140355912; *(i - 1) != a4 || *i != v9; i += 8 )
  {
    if ( (unsigned __int64)++v10 >= 7 )
      return (unsigned int)-1073741637;
  }
  v12 = AslPathToSystemPathBuf(pszSrc, 0x40uLL, (&off_140355918)[2 * v10]);
  if ( v12 < 0 )
    goto LABEL_11;
  if ( a3 && *a3 )
  {
    v12 = AslPathCombine(pszSrc, a3, pszDest, cchDest);
    if ( v12 < 0 )
      goto LABEL_11;
    return 0;
  }
  v12 = RtlStringCchCopyW(pszDest, cchDest, pszSrc);
  if ( v12 >= 0 )
    return 0;
LABEL_11:
  AslLogCallPrintf(1LL);
  return (unsigned int)v12;
}
