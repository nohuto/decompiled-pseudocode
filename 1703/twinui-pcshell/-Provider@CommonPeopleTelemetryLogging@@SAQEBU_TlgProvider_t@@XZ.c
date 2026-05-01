/*
 * XREFs of ?Provider@CommonPeopleTelemetryLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800A087C
 * Callers:
 *     ?StopActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@MEAAXXZ @ 0x1800A0980 (-StopActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z @ 0x1800A0F94 (-StartActivity@ShowPeopleBarFlyout@CommonPeopleTelemetry@@QEAAXUPoint@Foundation@Windows@@@Z.c)
 *     ?StopActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@MEAAXXZ @ 0x1800A1120 (-StopActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAAXW4PeopleFlyoutAction@@@Z @ 0x1800A14F0 (-StartActivity@HidePeopleBarFlyout@CommonPeopleTelemetry@@QEAAXW4PeopleFlyoutAction@@@Z.c)
 *     ??1?$ActivityData@VCommonPeopleTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800A16C0 (--1-$ActivityData@VCommonPeopleTelemetryLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Acti.c)
 *     ?zInternalStart@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1800A3380 (-zInternalStart@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflecto.c)
 *     ?NotifyFailure@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800A3400 (-NotifyFailure@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflector.c)
 *     ?Stop@?$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800A39C8 (-Stop@-$ActivityBase@VCommonPeopleTelemetryLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ?Instance@CommonPeopleTelemetry@@KAPEAV1@XZ @ 0x1800E730C (-Instance@CommonPeopleTelemetry@@KAPEAV1@XZ.c)
 *     ?StopActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@MEAAXXZ @ 0x1800E7400 (-StopActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXXZ @ 0x1800E77D0 (-StartActivity@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXXZ.c)
 *     ?PeoplePaneSwitchToView@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXXZ @ 0x1800E796C (-PeoplePaneSwitchToView@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXXZ.c)
 *     ?PeoplePaneNewView@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXXZ @ 0x1800E79EC (-PeoplePaneNewView@PeoplePaneAppLaunch@CommonPeopleTelemetry@@QEAAXXZ.c)
 *     ?PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z @ 0x1800E7A6C (-PeoplePaneViewChanged_@CommonPeopleTelemetry@@QEBAXW4PeoplePaneViewChange@@@Z.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x18019472C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *CommonPeopleTelemetryLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`CommonPeopleTelemetryLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_180244A88;
    qword_180244A88 = (__int64)&QuickConnectLoggingProvider::`vftable';
    qword_180244AA0 = (TraceLoggingHProvider)&`CommonPeopleTelemetryLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_d2dfcefe90c696f2f984ba2092e12d6b_::_lambda_invoker_cdecl_);
    qword_180244A90 = (__int64)qword_180244AA0;
    byte_180244A98 = 1;
    TraceLoggingRegister(qword_180244AA0);
    dword_180244A9C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180244A88 + 8))(&qword_180244A88);
    InitOnceComplete(&`CommonPeopleTelemetryLogging::Instance'::`2'::wrapper, 0, &qword_180244A88);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
