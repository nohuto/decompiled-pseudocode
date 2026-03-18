/*
 * XREFs of ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x18018CB0C
 * Callers:
 *     ?SetupDebugInfoSource@CExpression@@MEAAXXZ @ 0x18018C790 (-SetupDebugInfoSource@CExpression@@MEAAXXZ.c)
 * Callees:
 *     StringExHandleFillBehindNullW @ 0x18018CD0C (StringExHandleFillBehindNullW.c)
 *     StringExHandleOtherFlagsW @ 0x18018CD30 (StringExHandleOtherFlagsW.c)
 *     StringExValidateDestW @ 0x18018CDE8 (StringExValidateDestW.c)
 *     StringVPrintfWorkerW_0 @ 0x18018CE20 (StringVPrintfWorkerW_0.c)
 */

__int64 StringCchPrintfExW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        unsigned __int16 **a3,
        unsigned __int64 *a4,
        DWORD dwFlags,
        STRSAFE_LPCWSTR pszFormat,
        ...)
{
  HRESULT v9; // ebx
  size_t v10; // r8
  wchar_t *v11; // r12
  unsigned __int64 v12; // rsi
  const wchar_t *v13; // r9
  size_t v14; // rax
  STRSAFE_LPWSTR ppszDestEnd; // [rsp+30h] [rbp-18h] BYREF
  size_t pcchNewDestLength[2]; // [rsp+38h] [rbp-10h] BYREF
  va_list argList; // [rsp+C0h] [rbp+78h] BYREF

  va_start(argList, pszFormat);
  v9 = StringExValidateDestW(pszDest, cchDest, (const size_t)a3, dwFlags);
  if ( v9 < 0 )
  {
    if ( cchDest )
      *pszDest = 0;
  }
  else
  {
    ppszDestEnd = pszDest;
    v11 = pszDest;
    pcchNewDestLength[0] = cchDest;
    v12 = cchDest;
    if ( (dwFlags & 0x100) != 0 )
    {
      v13 = word_180252860;
      if ( pszFormat )
        v13 = pszFormat;
    }
    else
    {
      v13 = pszFormat;
    }
    v9 = 0;
    if ( (dwFlags & 0xFFFFE000) != 0 )
    {
      v9 = -2147024809;
      if ( cchDest )
        *pszDest = 0;
    }
    else if ( cchDest )
    {
      pcchNewDestLength[0] = 0LL;
      v9 = StringVPrintfWorkerW_0(pszDest, cchDest, pcchNewDestLength, v13, argList);
      v14 = pcchNewDestLength[0];
      v12 = cchDest - pcchNewDestLength[0];
      pcchNewDestLength[0] = cchDest - pcchNewDestLength[0];
      v11 = &pszDest[v14];
      ppszDestEnd = v11;
      if ( v9 >= 0 )
      {
        if ( (dwFlags & 0x200) != 0 && v12 > 1 )
          StringExHandleFillBehindNullW(&pszDest[v14], 2 * v12, dwFlags);
        goto LABEL_15;
      }
    }
    else
    {
      if ( !*v13 )
      {
LABEL_15:
        if ( a3 )
          *a3 = v11;
        if ( a4 )
          *a4 = v12;
        return (unsigned int)v9;
      }
      v9 = pszDest != 0LL ? -2147024774 : -2147024809;
    }
    if ( (dwFlags & 0x1C00) != 0 && cchDest )
    {
      StringExHandleOtherFlagsW(pszDest, 2 * cchDest, v10, &ppszDestEnd, pcchNewDestLength, dwFlags);
      v11 = ppszDestEnd;
      v12 = pcchNewDestLength[0];
    }
    if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147024774 )
      goto LABEL_15;
  }
  return (unsigned int)v9;
}
