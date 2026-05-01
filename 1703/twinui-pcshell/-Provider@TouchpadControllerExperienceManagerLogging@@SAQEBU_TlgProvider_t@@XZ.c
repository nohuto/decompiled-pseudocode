/*
 * XREFs of ?Provider@TouchpadControllerExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B55DC
 * Callers:
 *     ?StopActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@MEAAXXZ @ 0x1800B56E0 (-StopActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x1800B5D74 (-StartActivity@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ.c)
 *     ?Show@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x1800B5F64 (-Show@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ.c)
 *     ?Hide@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ @ 0x1800B5FE4 (-Hide@TouchpadLaunched@TouchpadControllerExperienceManagerTelemetry@@QEAAXXZ.c)
 *     ??1?$ActivityData@VTouchpadControllerExperienceManagerLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1800B60D8 (--1-$ActivityData@VTouchpadControllerExperienceManagerLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?NotifyFailure@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1800B8B20 (-NotifyFailure@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04.c)
 *     ?Stop@?$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1800B9164 (-Stop@-$ActivityBase@VTouchpadControllerExperienceManagerLogging@@$00$0EAAAAAAAAAAA@$04U_TlgRefl.c)
 *     ??$ControllerMoved@AEAJAEAJAEBU_GUID@@@TouchpadControllerExperienceManagerTelemetry@@SAXAEAJ0AEBU_GUID@@@Z @ 0x1800B94A8 (--$ControllerMoved@AEAJAEAJAEBU_GUID@@@TouchpadControllerExperienceManagerTelemetry@@SAXAEAJ0AEB.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x18019472C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *TouchpadControllerExperienceManagerLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`TouchpadControllerExperienceManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1802450A8;
    qword_1802450A8 = (__int64)&QuickConnectLoggingProvider::`vftable';
    qword_1802450C0 = (TraceLoggingHProvider)&`TouchpadControllerExperienceManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_fcbe7e8e9d69bc7433d8ee1b3dc43461_::_lambda_invoker_cdecl_);
    qword_1802450B0 = (__int64)qword_1802450C0;
    byte_1802450B8 = 1;
    TraceLoggingRegister(qword_1802450C0);
    dword_1802450BC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802450A8 + 8))(&qword_1802450A8);
    InitOnceComplete(&`TouchpadControllerExperienceManagerLogging::Instance'::`2'::wrapper, 0, &qword_1802450A8);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
