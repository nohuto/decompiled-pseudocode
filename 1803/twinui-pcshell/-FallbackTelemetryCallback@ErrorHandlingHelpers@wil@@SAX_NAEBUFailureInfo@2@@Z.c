/*
 * XREFs of ?FallbackTelemetryCallback@ErrorHandlingHelpers@wil@@SAX_NAEBUFailureInfo@2@@Z @ 0x180086940
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x180086850 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x1800755A0 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall wil::ErrorHandlingHelpers::FallbackTelemetryCallback(char a1, const struct wil::FailureInfo *a2)
{
  void (__fastcall *v4)(TraceLoggingHProvider *, char, const struct wil::FailureInfo *); // rax
  void (__fastcall *v5)(TraceLoggingHProvider *, char, const struct wil::FailureInfo *); // rdx
  WINBOOL v6; // [rsp+30h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = 0LL;
  if ( InitOnceBeginInitialize(&`wil::ErrorHandlingHelpers::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v7) && v6 )
  {
    v7 = (wil::TraceLoggingProvider *)qword_1804388A0;
    qword_1804388A0[0] = &LockScreenServiceLogging::`vftable';
    qword_1804388B8 = (struct _TlgProvider_t *)&`wil::ErrorHandlingHelpers::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_8d5ca15cf69e69dee1fdb0dcddeb1e66_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804388A0, qword_1804388B8);
    InitOnceComplete(&`wil::ErrorHandlingHelpers::Instance'::`2'::wrapper, 0, qword_1804388A0);
  }
  v5 = wil::TraceLoggingProvider::OnErrorReported;
  v4 = *(void (__fastcall **)(TraceLoggingHProvider *, char, const struct wil::FailureInfo *))(*(_QWORD *)v7 + 16LL);
  LOBYTE(v5) = a1;
  if ( v4 == wil::TraceLoggingProvider::OnErrorReported )
    wil::TraceLoggingProvider::OnErrorReported((TraceLoggingHProvider *)v7, a1, a2);
  else
    v4((TraceLoggingHProvider *)v7, (char)v5, a2);
}
