/*
 * XREFs of ?what@ResultException@wil@@UEBAPEBDXZ @ 0x140034A70
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x14001CE40 (__security_check_cookie.c)
 *     _alloca_probe @ 0x14001E700 (_alloca_probe.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x140032DCC (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x140034444 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x14003494C (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 */

const char *__fastcall wil::ResultException::what(
        wil::ResultException *this,
        __int64 a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  wil::details::shared_buffer *v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r8
  _BYTE Source[1024]; // [rsp+20h] [rbp-1418h] BYREF
  wchar_t pszDest[2048]; // [rsp+420h] [rbp-1018h] BYREF

  v4 = (wil::ResultException *)((char *)this + 184);
  v5 = 0LL;
  if ( !*((_QWORD *)this + 23) )
  {
    wil::GetFailureLogString(pszDest, (unsigned __int16 *)0x800, (__int64)this + 24, a4);
    wil::details::StringCchPrintfA((wil::details *)Source, (char *)0x400, "%ws", (const char *)pszDest);
    v6 = -1LL;
    do
      ++v6;
    while ( Source[v6] );
    wil::details::shared_buffer::create(v4, Source, v6 + 1);
  }
  if ( *(_QWORD *)v4 )
    return (const char *)(*(_QWORD *)v4 + 4LL);
  return (const char *)v5;
}
