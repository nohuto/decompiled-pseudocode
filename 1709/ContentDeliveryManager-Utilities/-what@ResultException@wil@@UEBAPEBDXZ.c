/*
 * XREFs of ?what@ResultException@wil@@UEBAPEBDXZ @ 0x180002350
 * Callers:
 *     <none>
 * Callees:
 *     ?GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z @ 0x1800018BC (-GetFailureLogString@wil@@YAJPEAG_KAEBUFailureInfo@1@@Z.c)
 *     ?create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z @ 0x180001B08 (-create@shared_buffer@details@wil@@QEAA_NPEBX_K@Z.c)
 *     ?StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ @ 0x180001F4C (-StringCchPrintfA@details@wil@@YAJPEAD_KPEBDZZ.c)
 *     __security_check_cookie @ 0x1800B39D0 (__security_check_cookie.c)
 *     _alloca_probe @ 0x1800B4D70 (_alloca_probe.c)
 */

const char *__fastcall wil::ResultException::what(
        wil::ResultException *this,
        __int64 a2,
        __int64 a3,
        const struct wil::FailureInfo *a4)
{
  LPVOID *v4; // rbx
  __int64 v5; // r8
  char v7[1024]; // [rsp+20h] [rbp-1418h] BYREF
  wchar_t v8[2048]; // [rsp+420h] [rbp-1018h] BYREF

  v4 = (LPVOID *)((char *)this + 184);
  if ( !*((_QWORD *)this + 23) )
  {
    wil::GetFailureLogString(v8, (unsigned __int16 *)0x800, (__int64)this + 24, a4);
    wil::details::StringCchPrintfA((wil::details *)v7, (char *)0x400, "%ws", (const char *)v8);
    v5 = -1LL;
    do
      ++v5;
    while ( v7[v5] );
    wil::details::shared_buffer::create(v4, v7, v5 + 1);
  }
  return (const char *)(((unsigned __int64)*v4 + 4) & -(__int64)(*v4 != 0LL));
}
