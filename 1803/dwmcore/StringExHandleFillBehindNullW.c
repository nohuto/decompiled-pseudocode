/*
 * XREFs of StringExHandleFillBehindNullW @ 0x18018CD0C
 * Callers:
 *     ?StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ @ 0x18018CB0C (-StringCchPrintfExW@@YAJPEAG_KPEAPEAGPEA_KKPEBGZZ.c)
 * Callees:
 *     memset_0 @ 0x1800DB710 (memset_0.c)
 */

HRESULT __stdcall StringExHandleFillBehindNullW(STRSAFE_LPWSTR pszDestEnd, size_t cbRemaining, DWORD dwFlags)
{
  if ( cbRemaining > 2 )
    memset_0(pszDestEnd + 1, (unsigned __int8)dwFlags, cbRemaining - 2);
  return 0;
}
