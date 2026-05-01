/*
 * XREFs of ?Provider@XamlSwitcherLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x18012B3A8
 * Callers:
 *     ?StopActivity@MonitorFrameCreated@XamlSwitcherTelemetry@@MEAAXXZ @ 0x18012B4B0 (-StopActivity@MonitorFrameCreated@XamlSwitcherTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@MonitorFrameCreated@XamlSwitcherTelemetry@@QEAAXXZ @ 0x18012B948 (-StartActivity@MonitorFrameCreated@XamlSwitcherTelemetry@@QEAAXXZ.c)
 *     ?Stop@MonitorFrameCreated@XamlSwitcherTelemetry@@QEAAX_NUtagRECT@@@Z @ 0x18012BAD8 (-Stop@MonitorFrameCreated@XamlSwitcherTelemetry@@QEAAX_NUtagRECT@@@Z.c)
 *     ??1?$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x18012BFE8 (--1-$ActivityData@VXamlSwitcherLogging@@U_TlgReflectorTag_Param0IsProviderType@@@-$ActivityBase@.c)
 *     ?NotifyFailure@?$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x18012F780 (-NotifyFailure@-$ActivityBase@VXamlSwitcherLogging@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x18019472C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801976E0 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *XamlSwitcherLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`XamlSwitcherLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_180245178;
    qword_180245178 = (__int64)&XamlSwitcherLogging::`vftable';
    qword_180245190 = (TraceLoggingHProvider)&`XamlSwitcherLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_6341f906d56bba57ec18edd8305f3a60_::_lambda_invoker_cdecl_);
    qword_180245180 = (__int64)qword_180245190;
    byte_180245188 = 1;
    TraceLoggingRegister(qword_180245190);
    dword_18024518C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_180245178 + 8))(&qword_180245178);
    InitOnceComplete(&`XamlSwitcherLogging::Instance'::`2'::wrapper, 0, &qword_180245178);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
