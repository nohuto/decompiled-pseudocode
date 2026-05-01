/*
 * XREFs of ?LogStringPrintf@details@wil@@YAPEA_WPEA_WPEB_W1ZZ @ 0x1801F8DC4
 * Callers:
 *     ?GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z @ 0x1801F8460 (-GetFailureLogString@wil@@YAJPEA_W_KAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     StringVPrintfWorkerW_0 @ 0x1801F93C0 (StringVPrintfWorkerW_0.c)
 */

STRSAFE_LPWSTR wil::details::LogStringPrintf(
        STRSAFE_LPWSTR pszDest,
        STRSAFE_LPWSTR a2,
        wchar_t *a3,
        const wchar_t *a4,
        ...)
{
  STRSAFE_LPWSTR v4; // rbx
  size_t v6; // rcx
  __int64 v7; // rax
  const wchar_t *v9; // [rsp+68h] [rbp+20h] BYREF

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
    StringVPrintfWorkerW_0(v4, v6, (size_t *)a3, a3, (va_list)&v9);
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
