/*
 * XREFs of ?Provider@TrayNotificationAreaLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1801B9A88
 * Callers:
 *     ??1?$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801B9B84 (--1-$ActivityData@VTrayNotificationAreaLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$Activ.c)
 *     ?StopActivity@FindAppInfoContext@TrayNotificationsTelemetry@@MEAAXXZ @ 0x1801B9C20 (-StopActivity@FindAppInfoContext@TrayNotificationsTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@FindAppInfoContext@TrayNotificationsTelemetry@@QEAAXPEAUHSTRING__@@@Z @ 0x1801BA134 (-StartActivity@FindAppInfoContext@TrayNotificationsTelemetry@@QEAAXPEAUHSTRING__@@@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1801BA5A0 (-NotifyFailure@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0Is.c)
 *     ?Stop@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801BABBC (-Stop@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderT.c)
 *     ?ReportStopActivity@?$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1801BAFCC (-ReportStopActivity@-$ActivityBase@VTrayNotificationAreaLogging@@$00$0A@$04U_TlgReflectorTag_Par.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *TrayNotificationAreaLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`TrayNotificationAreaLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1802BB030;
    qword_1802BB030 = (__int64)&LockScreenServiceLogging::`vftable';
    qword_1802BB048 = (TraceLoggingHProvider)&`TrayNotificationAreaLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_0975fe2f1555e85eda3261a2a36018a8_::_lambda_invoker_cdecl_);
    qword_1802BB038 = (__int64)qword_1802BB048;
    byte_1802BB040 = 1;
    TraceLoggingRegister(qword_1802BB048);
    dword_1802BB044 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BB030 + 8))(&qword_1802BB030);
    InitOnceComplete(&`TrayNotificationAreaLogging::Instance'::`2'::wrapper, 0, &qword_1802BB030);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
