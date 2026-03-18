/*
 * XREFs of SdbpGetPathAppPatch @ 0x140770E20
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x14028CB70 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x14028CCF0 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathCustomSdb @ 0x140771050 (SdbpGetPathCustomSdb.c)
 * Callees:
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x140772D1C (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x140772E7C (AslPathToSystemPathBuf.c)
 */

__int64 __fastcall SdbpGetPathAppPatch(NTSTRSAFE_PWSTR pszDest, size_t cchDest, const WCHAR *a3)
{
  const WCHAR *v6; // rdx
  int v7; // ebx
  const char *v8; // r9
  int v9; // r8d
  __int128 v10; // [rsp+30h] [rbp-258h] BYREF
  int v11; // [rsp+40h] [rbp-248h]
  wchar_t pszSrc[264]; // [rsp+50h] [rbp-238h] BYREF

  v11 = *(_DWORD *)L"h";
  v10 = *(_OWORD *)L"\\AppPatch";
  if ( cchDest < 0xA )
    return 3221225507LL;
  v6 = &word_1402CBB00;
  *pszDest = 0;
  pszSrc[0] = 0;
  if ( a3 )
    v6 = a3;
  v7 = AslPathCombine(&v10, v6, pszSrc, 260LL);
  if ( v7 < 0 )
  {
    v8 = "AslPathCombine failed [%x]";
    v9 = 918;
LABEL_9:
    AslLogCallPrintf(1, (unsigned int)"SdbpGetPathAppPatch", v9, (_DWORD)v8);
    return (unsigned int)v7;
  }
  v7 = AslPathToSystemPathBuf(pszDest, cchDest, pszSrc);
  if ( v7 < 0 )
  {
    v8 = "AslPathToSystemPathBuf failed [%x]";
    v9 = 924;
    goto LABEL_9;
  }
  return (unsigned int)v7;
}
