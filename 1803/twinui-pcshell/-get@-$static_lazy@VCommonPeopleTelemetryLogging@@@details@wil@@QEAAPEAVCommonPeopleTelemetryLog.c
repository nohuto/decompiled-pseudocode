/*
 * XREFs of ?get@?$static_lazy@VCommonPeopleTelemetryLogging@@@details@wil@@QEAAPEAVCommonPeopleTelemetryLogging@@P6AXXZ@Z @ 0x18016DE28
 * Callers:
 *     ??$PeopleBarFlyoutDidntShowInSpecifiedTime@AEBI@CommonPeopleTelemetry@@SAXAEBI@Z @ 0x18016A66C (--$PeopleBarFlyoutDidntShowInSpecifiedTime@AEBI@CommonPeopleTelemetry@@SAXAEBI@Z.c)
 *     ??1?$ActivityData@VCommonPeopleTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18016ABC0 (--1-$ActivityData@VCommonPeopleTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Acti.c)
 *     ?NotifyFailure@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18016BD40 (-NotifyFailure@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflector.c)
 *     ?SessionBecameIdleDuringShow@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXXZ @ 0x18016CFE4 (-SessionBecameIdleDuringShow@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXXZ.c)
 *     ?StartActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAAXW4PeopleFlyoutAction@@@Z @ 0x18016D2A4 (-StartActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAAXW4PeopleFlyoutAction@@@Z.c)
 *     ?StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z @ 0x18016D39C (-StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x18016D4C4 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?StopActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@MEAAXXZ @ 0x18016D5F0 (-StopActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@MEAAXXZ.c)
 *     ?StopActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@MEAAXXZ @ 0x18016D850 (-StopActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@MEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x18016DF18 (-zInternalStart@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ??$PaneDidntShowInSpecifiedTime@AEBW4ViewType@@AEBI@CommonPeopleTelemetry@@SAXAEBW4ViewType@@AEBI@Z @ 0x1801BF4AC (--$PaneDidntShowInSpecifiedTime@AEBW4ViewType@@AEBI@CommonPeopleTelemetry@@SAXAEBW4ViewType@@AEB.c)
 *     ??$PeoplePaneNewView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z @ 0x1801BF564 (--$PeoplePaneNewView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z.c)
 *     ??$PeoplePaneSwitchToView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z @ 0x1801BF604 (--$PeoplePaneSwitchToView@AEAPEBG@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXAEAPEBG@Z.c)
 *     ??1Completer@?$static_lazy@VCommonPeopleTelemetry@@@details@wil@@QEAA@XZ @ 0x1801C08D4 (--1Completer@-$static_lazy@VCommonPeopleTelemetry@@@details@wil@@QEAA@XZ.c)
 *     ?PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z @ 0x1801C40E8 (-PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z.c)
 *     ?StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z @ 0x1801C47E4 (-StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXPEBG@Z.c)
 *     ?StopActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@MEAAXXZ @ 0x1801C4940 (-StopActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@MEAAXXZ.c)
 * Callees:
 *     atexit @ 0x180098A9C (atexit.c)
 *     ?Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z @ 0x18010A05C (-Register@TraceLoggingProvider@wil@@IEAAXQEBU_TlgProvider_t@@@Z.c)
 */

_QWORD *__fastcall wil::details::static_lazy<CommonPeopleTelemetryLogging>::get(__int64 a1, void (__cdecl *a2)())
{
  void *v3; // r8
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  _QWORD *v6; // [rsp+40h] [rbp+18h] BYREF

  v5 = a1;
  v6 = 0LL;
  if ( InitOnceBeginInitialize(&`CommonPeopleTelemetryLogging::Instance'::`2'::wrapper, 0, (PBOOL)&v5, (LPVOID *)&v6)
    && (_DWORD)v5 )
  {
    v6 = qword_180438850;
    qword_180438850[0] = &LockScreenServiceLogging::`vftable';
    qword_180438868 = (struct _TlgProvider_t *)&`CommonPeopleTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    wil::TraceLoggingProvider::Register((wil::TraceLoggingProvider *)qword_180438850, qword_180438868, v3);
    InitOnceComplete(&`CommonPeopleTelemetryLogging::Instance'::`2'::wrapper, 0, qword_180438850);
  }
  return v6;
}
