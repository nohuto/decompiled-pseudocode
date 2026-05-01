/*
 * XREFs of ?get@?$static_lazy@VTrayNotificationAreaLogging@@@details@wil@@QEAAPEAVTrayNotificationAreaLogging@@P6AXXZ@Z @ 0x180264444
 * Callers:
 *     ??1?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1802630B8 (--1-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ?NotifyFailure@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1802635D0 (-NotifyFailure@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0Is.c)
 *     ?ReportStopActivity@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x180263CD8 (-ReportStopActivity@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Par.c)
 *     ?StartActivity@FindAppInfoContext@TrayNotificationsTelemetry@@QEAAXPEAUHSTRING__@@@Z @ 0x180263F6C (-StartActivity@FindAppInfoContext@TrayNotificationsTelemetry@@QEAAXPEAUHSTRING__@@@Z.c)
 *     ?Stop@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1802640C0 (-Stop@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?StopActivity@FindAppInfoContext@TrayNotificationsTelemetry@@MEAAXXZ @ 0x1802641D0 (-StopActivity@FindAppInfoContext@TrayNotificationsTelemetry@@MEAAXXZ.c)
 * Callees:
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

_QWORD *__fastcall wil::details::static_lazy<TrayNotificationAreaLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void *v3; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`TrayNotificationAreaLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v5, (LPVOID *)&v6)
    && (_DWORD)v5 )
  {
    v6 = qword_180438D58;
    qword_180438D58[0] = &LockScreenServiceLogging::`vftable';
    qword_180438D70 = (struct _TlgProvider_t *)&`TrayNotificationAreaLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438D58, qword_180438D70, v3);
    InitOnceComplete(&`TrayNotificationAreaLogging::Instance'::`2'::wrapper, 0, qword_180438D58);
  }
  return v6;
}
