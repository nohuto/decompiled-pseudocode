/*
 * XREFs of ?LogStringPrintf@details@wil@@YAPEAGPEAGPEBG1ZZ @ 0x180001A04
 * Callers:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x180001A4C (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 * Callees:
 *     ?StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z @ 0x180001900 (-StringCchVPrintfW@@YAJPEA_W_KPEB_WPEAD@Z.c)
 */

unsigned __int16 *wil::details::LogStringPrintf(
        wchar_t *this,
        char *a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4,
        ...)
{
  unsigned __int16 *v5; // rdi
  __int64 v6; // rax
  const unsigned __int16 *v8; // [rsp+58h] [rbp+20h] BYREF

  v8 = a4;
  v5 = this;
  StringCchVPrintfW(this, (a2 - (char *)this) >> 1, a3, (va_list)&v8);
  if ( a2 != (char *)v5 )
  {
    v6 = -1LL;
    do
      ++v6;
    while ( v5[v6] );
    v5 += v6;
  }
  return v5;
}
