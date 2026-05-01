/*
 * XREFs of ?IsEnabled@StartWindowTelemetry@@SA_NE_K@Z @ 0x18022F4EC
 * Callers:
 *     ?OnMessage@XamlLauncherState@@UEAAJI_K_J@Z @ 0x18022FF10 (-OnMessage@XamlLauncherState@@UEAAJI_K_J@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180075568 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     ?Create@StartWindowTelemetry@@IEAAXXZ @ 0x180093CA0 (-Create@StartWindowTelemetry@@IEAAXXZ.c)
 *     atexit @ 0x180098A9C (atexit.c)
 */

char __fastcall StartWindowTelemetry::IsEnabled(char a1)
{
  WINBOOL v2; // [rsp+30h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v3; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v2) = a1;
  v3 = 0LL;
  if ( InitOnceBeginInitialize(&`StartWindowTelemetry::Instance'::`2'::wrapper, 0, &v2, (LPVOID *)&v3) && v2 )
  {
    v3 = (wil::TraceLoggingProvider *)qword_180438058;
    qword_180438058[0] = &IamTraceLogging::`vftable';
    atexit(lambda_7be3e90a96589580164e7896806c54b3_::_lambda_invoker_cdecl_);
    StartWindowTelemetry::Create((StartWindowTelemetry *)qword_180438058);
    InitOnceComplete(&`StartWindowTelemetry::Instance'::`2'::wrapper, 0, qword_180438058);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v3);
}
