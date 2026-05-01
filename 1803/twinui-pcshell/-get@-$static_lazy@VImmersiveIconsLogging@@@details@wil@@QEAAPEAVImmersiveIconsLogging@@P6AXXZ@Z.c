/*
 * XREFs of ?get@?$static_lazy@VImmersiveIconsLogging@@@details@wil@@QEAAPEAVImmersiveIconsLogging@@P6AXXZ@Z @ 0x180304CA4
 * Callers:
 *     ??1?$ActivityData@VImmersiveIconsLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1803026AC (--1-$ActivityData@VImmersiveIconsLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBas.c)
 *     ?NotifyFailure@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180304010 (-NotifyFailure@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?ReportStopActivity@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x18030449C (-ReportStopActivity@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsP.c)
 *     ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x1803047E8 (-StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z.c)
 *     ?Stop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180304928 (-Stop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?StopActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@MEAAXXZ @ 0x180304A30 (-StopActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@MEAAXXZ.c)
 * Callees:
 *     atexit @ 0x180098A9C (atexit.c)
 *     ??0TraceLoggingProvider@wil@@IEAA@XZ @ 0x180104258 (--0TraceLoggingProvider@wil@@IEAA@XZ.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

_QWORD *__fastcall wil::details::static_lazy<ImmersiveIconsLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void *v3; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`ImmersiveIconsLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v5, (LPVOID *)&v6)
    && (_DWORD)v5 )
  {
    v6 = qword_180438E10;
    wil::TraceLoggingProvider::TraceLoggingProvider((wil::TraceLoggingProvider *)qword_180438E10);
    qword_180438E10[0] = &ImmersiveIconsLogging::`vftable';
    qword_180438E28 = (struct _TlgProvider_t *)&`ImmersiveIconsLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438E10, qword_180438E28, v3);
    InitOnceComplete(&`ImmersiveIconsLogging::Instance'::`2'::wrapper, 0, qword_180438E10);
  }
  return v6;
}
