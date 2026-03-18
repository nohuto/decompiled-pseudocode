/*
 * XREFs of StringExValidateDestW @ 0x18018CDE8
 * Callers:
 *     ?StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z @ 0x18018CA48 (-StringCchCopyExW@@YAJPEAG_KPEBGPEAPEAGPEA_KK@Z.c)
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x18018CB0C (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall StringExValidateDestW(STRSAFE_PCNZWCH pszDest, size_t cchDest, const size_t cchMax, DWORD dwFlags)
{
  HRESULT result; // eax

  result = 0;
  if ( (dwFlags & 0x100) != 0 )
  {
    if ( !pszDest && cchDest || cchDest > 0x7FFFFFFF )
      return -2147024809;
  }
  else if ( cchDest - 1 > 0x7FFFFFFE )
  {
    return -2147024809;
  }
  return result;
}
