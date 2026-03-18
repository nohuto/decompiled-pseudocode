/*
 * XREFs of AslPathToSystemPathBuf @ 0x140772E7C
 * Callers:
 *     SdbpGetPathAppPatch @ 0x140770E20 (SdbpGetPathAppPatch.c)
 *     AslEnvGetSystem32DirPathBuf @ 0x140773204 (AslEnvGetSystem32DirPathBuf.c)
 * Callees:
 *     RtlStringCchCatW @ 0x1400F9E18 (RtlStringCchCatW.c)
 *     memset @ 0x140192F40 (memset.c)
 *     AslLogCallPrintf @ 0x140772254 (AslLogCallPrintf.c)
 */

NTSTATUS __fastcall AslPathToSystemPathBuf(NTSTRSAFE_PWSTR pszDest, size_t cchDest, NTSTRSAFE_PCWSTR pszSrc)
{
  int v6; // ebx
  size_t v7; // rdx
  NTSTRSAFE_PWSTR v8; // rcx
  wchar_t v9; // ax
  NTSTATUS result; // eax

  memset(pszDest, 0, 2 * cchDest);
  v6 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v6 = -1073741811;
  if ( v6 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    v7 = cchDest;
    v8 = pszDest;
    v6 = 0;
    if ( !cchDest )
      goto LABEL_10;
    while ( 2147483646 - cchDest + v7 )
    {
      v9 = *(NTSTRSAFE_PWSTR)((char *)v8 + (char *)L"\\SystemRoot" - (char *)pszDest);
      if ( !v9 )
        break;
      *v8++ = v9;
      if ( !--v7 )
        goto LABEL_10;
    }
    if ( !v7 )
    {
LABEL_10:
      --v8;
      v6 = -2147483643;
    }
    *v8 = 0;
  }
  if ( v6 >= 0 )
  {
    result = RtlStringCchCatW(pszDest, cchDest, pszSrc);
    if ( result < 0 )
    {
      AslLogCallPrintf(1LL);
      return -1073741811;
    }
  }
  else
  {
    AslLogCallPrintf(1LL);
    return v6;
  }
  return result;
}
