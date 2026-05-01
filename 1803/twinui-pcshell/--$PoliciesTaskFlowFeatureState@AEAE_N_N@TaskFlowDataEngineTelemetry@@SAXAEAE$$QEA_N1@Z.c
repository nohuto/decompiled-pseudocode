/*
 * XREFs of ??$PoliciesTaskFlowFeatureState@AEAE_N_N@TaskFlowDataEngineTelemetry@@SAXAEAE$$QEA_N1@Z @ 0x1801A2224
 * Callers:
 *     ?ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ @ 0x1801A5F64 (-ReinitializeObjects@TaskFlowImmersiveShellBroker@@AEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

BOOLEAN __fastcall TaskFlowDataEngineTelemetry::PoliciesTaskFlowFeatureState<unsigned char &,bool,bool>(
        unsigned __int8 *a1,
        unsigned __int8 *a2,
        unsigned __int8 *a3)
{
  void *v6; // r8
  BOOLEAN result; // al
  const struct _TlgProvider_t *v8; // rcx
  const struct _TlgProvider_t *v9; // rcx
  int v10; // eax
  WINBOOL fPending; // [rsp+38h] [rbp-29h] BYREF
  int v12; // [rsp+3Ch] [rbp-25h] BYREF
  int v13; // [rsp+40h] [rbp-21h] BYREF
  int v14; // [rsp+44h] [rbp-1Dh] BYREF
  LPVOID Context; // [rsp+48h] [rbp-19h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+58h] [rbp-9h] BYREF
  int *v17; // [rsp+78h] [rbp+17h]
  int v18; // [rsp+80h] [rbp+1Fh]
  int v19; // [rsp+84h] [rbp+23h]
  int *v20; // [rsp+88h] [rbp+27h]
  int v21; // [rsp+90h] [rbp+2Fh]
  int v22; // [rsp+94h] [rbp+33h]
  int *v23; // [rsp+98h] [rbp+37h]
  int v24; // [rsp+A0h] [rbp+3Fh]
  int v25; // [rsp+A4h] [rbp+43h]

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context)
    && fPending )
  {
    Context = qword_1804388F0;
    qword_1804388F0[0] = &LockScreenServiceLogging::`vftable';
    qword_180438908 = (struct _TlgProvider_t *)&`TaskFlowDataEngineTelemetry::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fac79a549a8b210f59d21e9b666a8346_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804388F0, qword_180438908, v6);
    InitOnceComplete(&`TaskFlowDataEngineTelemetry::Instance'::`2'::wrapper, 0, qword_1804388F0);
  }
  result = (unsigned __int8)Context;
  v8 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v8 > 5u )
  {
    result = TlgKeywordOn(v8, 0x400000000000uLL);
    if ( result )
    {
      v10 = *a1;
      v19 = 0;
      v22 = 0;
      v25 = 0;
      v12 = v10;
      v17 = &v12;
      v13 = *a2;
      v20 = &v13;
      v14 = *a3;
      v23 = &v14;
      v18 = 4;
      v21 = 4;
      v24 = 4;
      return TlgWrite(v9, &unk_180391F01, 0LL, 0LL, 5u, &pData);
    }
  }
  return result;
}
