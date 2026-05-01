/*
 * XREFs of ?Provider@XamlSwitcherLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1801557A8
 * Callers:
 *     ?StopActivity@MonitorFrameCreated@XamlSwitcherTelemetry@@MEAAXXZ @ 0x1801558B0 (-StopActivity@MonitorFrameCreated@XamlSwitcherTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@MonitorFrameCreated@XamlSwitcherTelemetry@@QEAAXXZ @ 0x180155C74 (-StartActivity@MonitorFrameCreated@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?Stop@MonitorFrameCreated@XamlSwitcherTelemetry@@QEAAX_NUtagRECT@@@Z @ 0x180155E00 (-Stop@MonitorFrameCreated@XamlSwitcherTelemetry@@QEAAX_NUtagRECT@@@Z.c)
 *     ?StopActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@MEAAXXZ @ 0x1801562A0 (-StopActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXXZ @ 0x18015687C (-StartActivity@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAX_N@Z @ 0x180156A08 (-Stop@ShowXamlTaskView@XamlSwitcherTelemetry@@QEAAX_N@Z.c)
 *     ??1?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180156E78 (--1-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@.c)
 *     ?NotifyFailure@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18015CF30 (-NotifyFailure@-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *XamlSwitcherLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`XamlSwitcherLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1802BB000;
    qword_1802BB000 = (__int64)&XamlSwitcherLogging::`vftable';
    qword_1802BB018 = (TraceLoggingHProvider)&`XamlSwitcherLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_);
    qword_1802BB008 = (__int64)qword_1802BB018;
    byte_1802BB010 = 1;
    TraceLoggingRegister(qword_1802BB018);
    dword_1802BB014 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BB000 + 8))(&qword_1802BB000);
    InitOnceComplete(&`XamlSwitcherLogging::Instance'::`2'::wrapper, 0, &qword_1802BB000);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
