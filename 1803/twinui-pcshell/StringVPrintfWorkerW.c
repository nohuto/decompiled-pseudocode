/*
 * XREFs of StringVPrintfWorkerW @ 0x18001D330
 * Callers:
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x18001D0C0 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJ.c)
 *     ?StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z @ 0x1800FF5F0 (-StringCchVPrintfW@@YAJPEAG_KPEBGPEAD@Z.c)
 * Callees:
 *     _vsnwprintf @ 0x180099240 (_vsnwprintf.c)
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
