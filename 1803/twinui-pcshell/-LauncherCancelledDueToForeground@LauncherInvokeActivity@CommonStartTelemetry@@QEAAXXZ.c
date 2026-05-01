/*
 * XREFs of ?LauncherCancelledDueToForeground@LauncherInvokeActivity@CommonStartTelemetry@@QEAAXXZ @ 0x18022F578
 * Callers:
 *     ?HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z @ 0x1800789B0 (-HideStartAndCortana@XamlLauncherState@@UEAAXW4IMMERSIVELAUNCHERDISMISSMETHOD@@@Z.c)
 *     ?OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience@Shell@Internal@Windows@@PEAUIInspectable@@@Z @ 0x18022FBC0 (-OnCortanaFailedToGetForeground@XamlLauncherState@@QEAAJPEAUICortanaExperienceManager@Experience.c)
 *     ?OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ @ 0x1802304A4 (-OnStartFailedToGetForegroundImpl@XamlLauncherState@@AEAAJXZ.c)
 * Callees:
 *     _TlgKeywordOn @ 0x18005AB44 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x18005AB68 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180098190 (__security_check_cookie.c)
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

void __fastcall CommonStartTelemetry::LauncherInvokeActivity::LauncherCancelledDueToForeground(
        CommonStartTelemetry::LauncherInvokeActivity *this)
{
  void *v2; // r8
  const struct _TlgProvider_t *v3; // rcx
  const struct _TlgProvider_t *v4; // rcx
  WINBOOL v5; // [rsp+30h] [rbp-48h] BYREF
  _QWORD *v6; // [rsp+38h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp-38h] BYREF

  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, &v5, (LPVOID *)&v6) && v5 )
  {
    v6 = qword_1804389D0;
    qword_1804389D0[0] = &LockScreenServiceLogging::`vftable';
    qword_1804389E8 = (struct _TlgProvider_t *)&`CommonStartTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_d4015babfde9ac14d130539030d425b5_::_lambda_invoker_cdecl_);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_1804389D0, qword_1804389E8, v2);
    InitOnceComplete(&`CommonStartTelemetryLogging::Instance'::`2'::wrapper, 0, qword_1804389D0);
  }
  v3 = (const struct _TlgProvider_t *)v6[1];
  if ( *(_DWORD *)v3 > 5u )
  {
    if ( TlgKeywordOn(v3, 0x400000000000uLL) )
      TlgWrite(v4, &unk_1803999FF, (LPCGUID)(*((_QWORD *)this + 6) + 8LL), 0LL, 2u, &pData);
  }
}
