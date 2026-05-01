/*
 * XREFs of ??$UserPresenceDataCreated@AEAW4UserPresenceState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_J@TaskFlowDataEngineTelemetry@@SAXAEAW4UserPresenceState@DataEngine@TaskFlow@Shell@Internal@Windows@@AEA_J@Z @ 0x1801A912C
 * Callers:
 *     ?OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z @ 0x1801A97A0 (-OnIdleStateChanged@UserPresenceListener@DataEngine@TaskFlow@Shell@Internal@Windows@@UEAAJH@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

TLG_STATUS __fastcall TaskFlowDataEngineTelemetry::UserPresenceDataCreated<enum Windows::Internal::Shell::TaskFlow::DataEngine::UserPresenceState &,__int64 &>(
        int *a1,
        __int64 *a2)
{
  void *v4; // r8
  TLG_STATUS result; // eax
  const struct _TlgProvider_t *v6; // rcx
  int v7; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-19h] BYREF
  int v9; // [rsp+3Ch] [rbp-15h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-11h] BYREF
  __int64 v11; // [rsp+48h] [rbp-9h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp+7h] BYREF
  int *v13; // [rsp+78h] [rbp+27h]
  int v14; // [rsp+80h] [rbp+2Fh]
  int v15; // [rsp+84h] [rbp+33h]
  __int64 *v16; // [rsp+88h] [rbp+37h]
  int v17; // [rsp+90h] [rbp+3Fh]
  int v18; // [rsp+94h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_1804388F0;
    qword_1804388F0[0] = &LockScreenServiceLogging::`vftable';
    qword_180438908 = (struct _TlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804388F0, qword_180438908, v4);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_1804388F0);
  }
  result = (int)Context;
  v6 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v6 > 5u )
  {
    v7 = *a1;
    v15 = 0;
    v18 = 0;
    v9 = v7;
    v13 = &v9;
    v11 = *a2;
    v16 = &v11;
    v14 = 4;
    v17 = 8;
    return TlgWrite(v6, &unk_180392040, 0LL, 0LL, 4u, &pData);
  }
  return result;
}
