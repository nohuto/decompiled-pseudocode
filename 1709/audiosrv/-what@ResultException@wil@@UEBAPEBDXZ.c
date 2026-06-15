/*
 * XREFs of ?what@ResultException@wil@@UEBAPEBDXZ @ 0x18005F410
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180032AC0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x180036B20 (_alloca_probe.c)
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x18005D57C (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x18005ED30 (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x18005F2F4 (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 */

const char *__fastcall wil::ResultException::what(
        wil::ResultException *this,
        __int64 a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  wil::details::shared_buffer *v4; // rbx
  __int64 v5; // r8
  char Source[1024]; // [rsp+20h] [rbp-1418h] BYREF
  char v8[4096]; // [rsp+420h] [rbp-1018h] BYREF

  v4 = (wil::ResultException *)((char *)this + 184);
  if ( !*((_QWORD *)this + 23) )
  {
    wil::GetFailureLogString((wil *)v8, (unsigned __int16 *)0x800, (__int64)this + 24, a4);
    wil::details::StringCchPrintfA((wil::details *)Source, (char *)0x400, "%ws", v8);
    v5 = -1LL;
    do
      ++v5;
    while ( Source[v5] );
    wil::details::shared_buffer::create(v4, Source, v5 + 1);
  }
  return (const char *)((*(_QWORD *)v4 + 4LL) & -(__int64)(*(_QWORD *)v4 != 0LL));
}
