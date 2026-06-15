/*
 * XREFs of ?FallbackTelemetryCallback@AudioSrvTelemetryProvider@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x18005DCB0
 * Callers:
 *     ?GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z @ 0x18005DB90 (-GetContextAndNotifyFailure@details@wil@@YAXPEAUFailureInfo@2@PEAD_K@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@P6AXXZ@Z @ 0x180008688 (-get@-$static_lazy@VAudioSrvTelemetryProvider@@@details@wil@@QEAAPEAVAudioSrvTelemetryProvider@@.c)
 *     ?OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z @ 0x18005DD70 (-OnErrorReported@TraceLoggingProvider@wil@@MEAAX_NAEBUFailureInfo@2@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800657D0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall AudioSrvTelemetryProvider::FallbackTelemetryCallback(__int64 a1, const struct wil::FailureInfo *a2)
{
  bool v3; // di
  wil::TraceLoggingProvider *v4; // rcx
  void (*v5)(wil::TraceLoggingProvider *__hidden, bool, const struct wil::FailureInfo *); // rax
  void (*v6)(wil::TraceLoggingProvider *__hidden, bool, const struct wil::FailureInfo *); // rdx

  v3 = a1;
  v4 = (wil::TraceLoggingProvider *)wil::details::static_lazy<AudioSrvTelemetryProvider>::get(
                                      a1,
                                      lambda_b4cb8953ddd9016186cd5ae31274160b_::_lambda_invoker_cdecl_);
  v6 = wil::TraceLoggingProvider::OnErrorReported;
  v5 = *(void (**)(wil::TraceLoggingProvider *__hidden, bool, const struct wil::FailureInfo *))(*(_QWORD *)v4 + 16LL);
  LOBYTE(v6) = v3;
  if ( v5 == wil::TraceLoggingProvider::OnErrorReported )
    wil::TraceLoggingProvider::OnErrorReported(v4, v3, a2);
  else
    ((void (__fastcall *)(wil::TraceLoggingProvider *, void (*)(wil::TraceLoggingProvider *__hidden, bool, const struct wil::FailureInfo *), const struct wil::FailureInfo *))v5)(
      v4,
      v6,
      a2);
}
