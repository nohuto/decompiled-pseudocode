/*
 * XREFs of ?SwitchItemInvoked_@MultitaskingViewTelemetry@@QEBAX_KI@Z @ 0x1802A0950
 * Callers:
 *     ?InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z @ 0x1802A0820 (-InvokeSwitchItem@CGridTelemetryController@@UEAAXPEAUISwitchItem@@@Z.c)
 * Callees:
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180104258 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall MultitaskingViewTelemetry::SwitchItemInvoked_(MultitaskingViewTelemetry *this, __int64 a2, int a3)
{
  void *v3; // r8
  const struct _TlgProvider_t *v4; // rcx
  const struct _TlgProvider_t *v5; // rcx
  WINBOOL fPending; // [rsp+38h] [rbp-9h] BYREF
  LPVOID Context; // [rsp+40h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp+7h] BYREF
  __int64 *v9; // [rsp+68h] [rbp+27h]
  int v10; // [rsp+70h] [rbp+2Fh]
  int v11; // [rsp+74h] [rbp+33h]
  int *v12; // [rsp+78h] [rbp+37h]
  int v13; // [rsp+80h] [rbp+3Fh]
  int v14; // [rsp+84h] [rbp+43h]
  __int64 v15; // [rsp+B0h] [rbp+6Fh] BYREF
  int v16; // [rsp+B8h] [rbp+77h] BYREF

  v16 = a3;
  v15 = a2;
  Context = 0LL;
  if ( InitOnceBeginInitialize(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1804387B0;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_1804387B0);
    qword_1804387B0[0] = &ImmersiveIconsLogging::`vftable';
    qword_1804387C8 = (struct _TlgProvider_t *)&`WindowManagementLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f79d5b8d2c405e687024ad1f66b4c06d_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387B0, qword_1804387C8, v3);
    InitOnceComplete(&`WindowManagementLogging::Instance'::`2'::wrapper, 0, qword_1804387B0);
  }
  v4 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v4 > 5u )
  {
    if ( TlgKeywordOn(v4, 0x400000000000uLL) )
    {
      v11 = 0;
      v14 = 0;
      v9 = &v15;
      v12 = &v16;
      v10 = 8;
      v13 = 4;
      TlgWrite(v5, &unk_18039C48E, 0LL, 0LL, 4u, &pData);
    }
  }
}
