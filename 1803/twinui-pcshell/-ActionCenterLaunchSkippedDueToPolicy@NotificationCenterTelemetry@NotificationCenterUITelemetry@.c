/*
 * XREFs of ?ActionCenterLaunchSkippedDueToPolicy@NotificationCenterTelemetry@NotificationCenterUITelemetry@@SAXXZ @ 0x1801537A4
 * Callers:
 *     ?Show@CActionCenterExperienceManager@@AEAAJXZ @ 0x18007C01C (-Show@CActionCenterExperienceManager@@AEAAJXZ.c)
 *     ?Show@CControlCenterExperienceManager@@AEAAJXZ @ 0x180158D70 (-Show@CControlCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void NotificationCenterUITelemetry::NotificationCenterTelemetry::ActionCenterLaunchSkippedDueToPolicy(void)
{
  void *v0; // r8
  const struct _TlgProvider_t *v1; // rcx
  const struct _TlgProvider_t *v2; // rcx
  WINBOOL fPending; // [rsp+30h] [rbp-48h] BYREF
  LPVOID Context; // [rsp+38h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF

  Context = 0LL;
  if ( InitOnceBeginInitialize(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, &fPending, &Context) && fPending )
  {
    Context = qword_1804387D8;
    qword_1804387D8[0] = &LockScreenServiceLogging::`vftable';
    qword_1804387F0 = (struct _TlgProvider_t *)&`NotificationCenterLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_f4c52185d8a4a8e42bb1421645a7adf9_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804387D8, qword_1804387F0, v0);
    InitOnceComplete(&`NotificationCenterLogging::Instance'::`2'::wrapper, 0, qword_1804387D8);
  }
  v1 = (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
  if ( *(_DWORD *)v1 > 5u )
  {
    if ( TlgKeywordOn(v1, 0x200000000000uLL) )
      TlgWrite(v2, &unk_18038BB8A, 0LL, 0LL, 2u, &pData);
  }
}
