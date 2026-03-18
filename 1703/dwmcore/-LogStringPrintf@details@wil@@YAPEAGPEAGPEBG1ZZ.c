/*
 * XREFs of ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x180137598
 * Callers:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180136C4C (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     StringVPrintfWorkerW @ 0x1800BB68C (StringVPrintfWorkerW.c)
 */

STRSAFE_LPWSTR wil::details::LogStringPrintf(
        STRSAFE_LPWSTR pszDest,
        STRSAFE_LPWSTR a2,
        size_t *a3,
        const unsigned __int16 *a4,
        ...)
{
  STRSAFE_LPWSTR v4; // rbx
  size_t v6; // rcx
  __int64 v7; // rax
  const unsigned __int16 *v9; // [rsp+68h] [rbp+20h] BYREF

  v9 = a4;
  v4 = pszDest;
  v6 = a2 - pszDest;
  if ( v6 - 1 > 0x7FFFFFFE )
  {
    if ( v6 )
      *v4 = 0;
  }
  else
  {
    StringVPrintfWorkerW(v4, v6, a3, (STRSAFE_LPCWSTR)a3, (va_list)&v9);
  }
  if ( a2 != v4 )
  {
    v7 = -1LL;
    do
      ++v7;
    while ( v4[v7] );
    v4 += v7;
  }
  return v4;
}
