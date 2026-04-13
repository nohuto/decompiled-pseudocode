/*
 * XREFs of ?FallbackTelemetryCallback@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX_NAEBUFailureInfo@wil@@@Z @ 0x180025EE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180008A20 (-ReportTelemetryFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z @ 0x180008CB8 (-ReportTraceLoggingFailure@TraceLoggingProvider@wil@@IEAAXAEBUFailureInfo@2@@Z.c)
 *     ?Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@@XZ @ 0x180025AC8 (-Provider@ContentDeliveryManagerLogging@Background@ContentDeliveryManager@@SAQEBU_TlgProvider_t@.c)
 *     atexit @ 0x1800C0E68 (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1800C1AD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::FallbackTelemetryCallback(
        char a1,
        const struct wil::FailureInfo *a2)
{
  WINBOOL v4; // [rsp+30h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v5; // [rsp+40h] [rbp+18h] BYREF

  v5 = 0LL;
  if ( InitOnceBeginInitialize(
         &`ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::wrapper,
         0,
         &v4,
         (LPVOID *)&v5)
    && v4 )
  {
    qword_18017BEB8 = (__int64)&CreativeFramework::Logging::ShellPlacementLogging::`vftable';
    v5 = (wil::TraceLoggingProvider *)&qword_18017BEB8;
    atexit(lambda_f445b1b04a1e911cb28a3e84927aae7d_::_lambda_invoker_cdecl_);
    qword_18017BEC0 = (__int64)ContentDeliveryManager::Background::ContentDeliveryManagerLogging::Provider();
    byte_18017BEC8 = 0;
    dword_18017BECC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_18017BEB8 + 8))(&qword_18017BEB8);
    InitOnceComplete(
      &`ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::Instance'::`2'::wrapper,
      0,
      &qword_18017BEB8);
  }
  if ( !a1 )
  {
    if ( *((_DWORD *)v5 + 5) == 1 )
    {
      wil::TraceLoggingProvider::ReportTelemetryFailure(v5, a2);
    }
    else if ( *((_DWORD *)v5 + 5) == 2 )
    {
      wil::TraceLoggingProvider::ReportTraceLoggingFailure(v5, a2);
    }
  }
}
