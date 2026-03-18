/*
 * XREFs of StringVPrintfWorkerW @ 0x140007304
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1400072AC (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 * Callees:
 *     _vsnwprintf @ 0x140003E08 (_vsnwprintf.c)
 */

HRESULT __stdcall StringVPrintfWorkerW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_LPCWSTR pszFormat,
        va_list argList)
{
  size_t v5; // rbx
  int v7; // eax
  bool v8; // zf
  HRESULT result; // eax

  v5 = cchDest - 1;
  v7 = vsnwprintf(pszDest, cchDest - 1, pszFormat, argList);
  if ( v7 < 0 || (v8 = v7 == v5, v7 > v5) )
  {
    result = -2147024774;
    goto LABEL_6;
  }
  result = 0;
  if ( v8 )
LABEL_6:
    pszDest[v5] = 0;
  return result;
}
