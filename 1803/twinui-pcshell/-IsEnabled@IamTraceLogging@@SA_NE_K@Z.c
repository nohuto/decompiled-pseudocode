/*
 * XREFs of ?IsEnabled@IamTraceLogging@@SA_NE_K@Z @ 0x1801088A0
 * Callers:
 *     ??$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z @ 0x180102B84 (--$PendingActivation@AEBQEAUHWND__@@@IamTraceLogging@@SAXAEBQEAUHWND__@@@Z.c)
 * Callees:
 *     ?IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z @ 0x180075568 (-IsEnabled_@TraceLoggingProvider@wil@@IEBA_NE_K@Z.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Create@CAppManagerTelemetry@@IEAAXXZ @ 0x180105D94 (-Create@CAppManagerTelemetry@@IEAAXXZ.c)
 */

char __fastcall IamTraceLogging::IsEnabled(char a1)
{
  WINBOOL v2; // [rsp+30h] [rbp+8h] BYREF
  wil::TraceLoggingProvider *v3; // [rsp+38h] [rbp+10h] BYREF

  LOBYTE(v2) = a1;
  v3 = 0LL;
  if ( InitOnceBeginInitialize(&`IamTraceLogging::Instance'::`2'::wrapper, 0, &v2, (LPVOID *)&v3) && v2 )
  {
    v3 = (wil::TraceLoggingProvider *)qword_1804386B8;
    qword_1804386B8[0] = &IamTraceLogging::`vftable';
    atexit(lambda_119a121fb38785c27806b92be2d82d86_::_lambda_invoker_cdecl_);
    CAppManagerTelemetry::Create((CAppManagerTelemetry *)qword_1804386B8);
    InitOnceComplete(&`IamTraceLogging::Instance'::`2'::wrapper, 0, qword_1804386B8);
  }
  return wil::TraceLoggingProvider::IsEnabled_(v3);
}
