/*
 * XREFs of ??$UserPresenceFlags@_N_N_N_N@TaskFlowDataEngineTelemetry@@SAX$$QEA_N000@Z @ 0x1801A9260
 * Callers:
 *     ?OnIdleStateFlagsChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJW4SESSION_IDLE_STATE_FLAGS@@@Z @ 0x1801A9940 (-OnIdleStateFlagsChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJW.c)
 * Callees:
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

TLG_STATUS __fastcall TaskFlowDataEngineTelemetry::UserPresenceFlags<bool,bool,bool,bool>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3,
        unsigned __int8 *a4)
{
  void *v8; // r8
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v10; // rcx
  int v11; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-49h] BYREF
  int v13; // [rsp+3Ch] [rbp-45h] BYREF
  int v14; // [rsp+40h] [rbp-41h] BYREF
  int v15; // [rsp+44h] [rbp-3Dh] BYREF
  int v16; // [rsp+48h] [rbp-39h] BYREF
  LPVOID Context; // [rsp+50h] [rbp-31h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-29h] BYREF
  int *v19; // [rsp+78h] [rbp-9h]
  int v20; // [rsp+80h] [rbp-1h]
  int v21; // [rsp+84h] [rbp+3h]
  int *v22; // [rsp+88h] [rbp+7h]
  int v23; // [rsp+90h] [rbp+Fh]
  int v24; // [rsp+94h] [rbp+13h]
  int *v25; // [rsp+98h] [rbp+17h]
  int v26; // [rsp+A0h] [rbp+1Fh]
  int v27; // [rsp+A4h] [rbp+23h]
  int *v28; // [rsp+A8h] [rbp+27h]
  int v29; // [rsp+B0h] [rbp+2Fh]
  int v30; // [rsp+B4h] [rbp+33h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_1804388F0;
    qword_1804388F0[0] = &LockScreenServiceLogging::`vftable';
    qword_180438908 = (struct _TlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804388F0, qword_180438908, v8);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_1804388F0);
  }
  result = (int)Context;
  v10 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v10 > 5u )
  {
    v11 = *a1;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v13 = v11;
    v19 = &v13;
    v14 = *a2;
    v22 = &v14;
    v15 = *a3;
    v25 = &v15;
    v16 = *a4;
    v28 = &v16;
    v20 = 4;
    v23 = 4;
    v26 = 4;
    v29 = 4;
    return TlgWrite(v10, &unk_180392085, 0LL, 0LL, 6u, &pData);
  }
  return result;
}
