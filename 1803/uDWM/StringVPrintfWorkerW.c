/*
 * XREFs of StringVPrintfWorkerW @ 0x18003D1D4
 * Callers:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x18003D184 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x18006DE14 (-LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringVPrintfWorkerW(
        STRSAFE_LPWSTR pszDest,
        size_t cchDest,
        size_t *pcchNewDestLength,
        STRSAFE_LPCWSTR pszFormat,
        va_list argList)
{
  size_t v5; // rdi
  HRESULT v7; // ebx
  int v8; // eax

  v5 = cchDest - 1;
  v7 = 0;
  v8 = _vsnwprintf(pszDest, cchDest - 1, pszFormat, argList);
  if ( v8 < 0 || v8 > v5 )
  {
    pszDest[v5] = 0;
    return -2147024774;
  }
  else if ( v8 == v5 )
  {
    pszDest[v5] = 0;
  }
  return v7;
}
