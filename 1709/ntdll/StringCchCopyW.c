/*
 * XREFs of StringCchCopyW @ 0x18008FB00
 * Callers:
 *     EtwpAddInstanceIdToLogFileName @ 0x180065624 (EtwpAddInstanceIdToLogFileName.c)
 *     WerEscalationLazyInit @ 0x18008F6D8 (WerEscalationLazyInit.c)
 *     SbpParseFuncName @ 0x18010B6D4 (SbpParseFuncName.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringCchCopyW(STRSAFE_LPWSTR pszDest, size_t cchDest, STRSAFE_LPCWSTR pszSrc)
{
  HRESULT v3; // r9d
  size_t v4; // r10
  signed __int64 v5; // r8
  wchar_t v6; // ax

  v3 = 0;
  if ( cchDest - 1 > 0x7FFFFFFE )
    v3 = -2147024809;
  if ( v3 < 0 )
  {
    if ( !cchDest )
      return v3;
  }
  else
  {
    v3 = 0;
    if ( !cchDest )
      goto LABEL_12;
    v4 = 2147483646 - cchDest;
    v5 = (char *)pszSrc - (char *)pszDest;
    do
    {
      if ( !(v4 + cchDest) )
        break;
      v6 = *(STRSAFE_LPWSTR)((char *)pszDest + v5);
      if ( !v6 )
        break;
      *pszDest++ = v6;
      --cchDest;
    }
    while ( cchDest );
    if ( !cchDest )
    {
LABEL_12:
      --pszDest;
      v3 = -2147024774;
    }
  }
  *pszDest = 0;
  return v3;
}
