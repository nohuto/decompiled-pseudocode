/*
 * XREFs of ??$SignalProcessingListenerCountersReport@AEAIAEAI@TaskFlowDataEngineTelemetry@@SAXAEAI0@Z @ 0x1801A240C
 * Callers:
 *     ?UnsubscribeFromServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z @ 0x1801A7640 (-UnsubscribeFromServices@TaskFlowImmersiveShellBroker@@UEAAJPEAUIServiceProvider@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

BOOLEAN TaskFlowDataEngineTelemetry::SignalProcessingListenerCountersReport<unsigned int &,unsigned int &>()
{
  void *v0; // r8
  BOOLEAN result; // al
  const struct _TlgProvider_t *v2; // rcx
  const struct _TlgProvider_t *v3; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-9h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  unsigned int *v7; // [rsp+60h] [rbp+27h]
  int v8; // [rsp+68h] [rbp+2Fh]
  int v9; // [rsp+6Ch] [rbp+33h]
  unsigned int *v10; // [rsp+70h] [rbp+37h]
  int v11; // [rsp+78h] [rbp+3Fh]
  int v12; // [rsp+7Ch] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_1804388F0;
    qword_1804388F0[0] = &LockScreenServiceLogging::`vftable';
    qword_180438908 = (struct _TlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804388F0, qword_180438908, v0);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_1804388F0);
  }
  result = (unsigned __int8)Context;
  v2 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v2 > 5u )
  {
    result = TlgKeywordOn(v2, 0x400000000000uLL);
    if ( result )
    {
      v9 = 0;
      v12 = 0;
      v7 = &ListenerTelemetryReport::m_knownFailureCounter;
      v10 = &ListenerTelemetryReport::m_unknownFailureCounter;
      v8 = 4;
      v11 = 4;
      return TlgWrite(v3, &unk_180391E9F, 0LL, 0LL, 4u, &pData);
    }
  }
  return result;
}
