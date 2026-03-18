/*
 * XREFs of SdbpGetPathCustomSdb @ 0x1407D8330
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x140187410 (__security_check_cookie.c)
 *     SdbpGetPathAppPatch @ 0x1407D8100 (SdbpGetPathAppPatch.c)
 *     AslLogCallPrintf @ 0x1407D92C4 (AslLogCallPrintf.c)
 *     AslPathCombine @ 0x1407DA028 (AslPathCombine.c)
 */

__int64 __fastcall SdbpGetPathCustomSdb(NTSTRSAFE_PWSTR pszDest, size_t cchDest)
{
  int v5; // eax
  unsigned int v6; // ebx
  int v7; // [rsp+20h] [rbp-268h]
  wchar_t pszSrc[280]; // [rsp+30h] [rbp-258h] BYREF

  wcscpy(pszSrc, L"\\CustomSDB");
  if ( cchDest < 0xB )
    return 3221225507LL;
  *pszDest = 0;
  pszSrc[16] = 0;
  v5 = AslPathCombine(pszSrc);
  v6 = v5;
  if ( v5 >= 0 )
  {
    return (unsigned int)SdbpGetPathAppPatch(pszDest, cchDest);
  }
  else
  {
    v7 = v5;
    AslLogCallPrintf(1, (unsigned int)"SdbpGetPathCustomSdb", 1098, (unsigned int)"AslPathCombine failed [%x]", v7);
  }
  return v6;
}
