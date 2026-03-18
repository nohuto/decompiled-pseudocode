/*
 * XREFs of SdbpGetPathAppPatch @ 0x1407D8100
 * Callers:
 *     SdbpGetPathAppPatchPreRS3 @ 0x1402C25C0 (SdbpGetPathAppPatchPreRS3.c)
 *     SdbpGetPathCustomSdbPreRS3 @ 0x1402C2740 (SdbpGetPathCustomSdbPreRS3.c)
 *     SdbpGetPathCustomSdb @ 0x1407D8330 (SdbpGetPathCustomSdb.c)
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x1407DA028 (AslPathCombine.c)
 *     AslPathToSystemPathBuf @ 0x1407DA190 (AslPathToSystemPathBuf.c)
 */

__int64 __fastcall SdbpGetPathAppPatch(NTSTRSAFE_PWSTR pszDest, size_t cchDest)
{
  int v5; // eax
  unsigned int v6; // ebx
  const char *v7; // r9
  int v8; // r8d
  int v9; // [rsp+20h] [rbp-268h]
  wchar_t pszSrc[16]; // [rsp+30h] [rbp-258h] BYREF
  wchar_t v11[264]; // [rsp+50h] [rbp-238h] BYREF

  wcscpy(pszSrc, L"\\AppPatch");
  if ( cchDest < 0xA )
    return 3221225507LL;
  *pszDest = 0;
  v11[0] = 0;
  v5 = AslPathCombine(pszSrc);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = "AslPathCombine failed [%x]";
    v8 = 939;
LABEL_7:
    v9 = v5;
    AslLogCallPrintf(1, (unsigned int)"SdbpGetPathAppPatch", v8, (_DWORD)v7, v9);
    return v6;
  }
  v5 = AslPathToSystemPathBuf(pszDest, cchDest, v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = "AslPathToSystemPathBuf failed [%x]";
    v8 = 945;
    goto LABEL_7;
  }
  return v6;
}
