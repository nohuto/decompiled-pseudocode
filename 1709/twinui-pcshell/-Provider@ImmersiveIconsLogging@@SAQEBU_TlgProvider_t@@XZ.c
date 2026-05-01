/*
 * XREFs of ?Provider@ImmersiveIconsLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1801CA2B4
 * Callers:
 *     ??1?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x1801CA3B4 (--1-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil.c)
 *     ?StopActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@MEAAXXZ @ 0x1801CA440 (-StopActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@MEAAXXZ.c)
 *     ?StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z @ 0x1801CA8A4 (-StartActivity@LoadIconW@ImmersiveIconsLoggingTelemetry@@QEAAXPEBG@Z.c)
 *     ?NotifyFailure@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x1801CBDA0 (-NotifyFailure@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProvid.c)
 *     ?Stop@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x1801CC3B4 (-Stop@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@.c)
 *     ?reset@?$shared_object@V?$ActivityData@VImmersiveIconsLogging@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@@details@wil@@QEAAXXZ @ 0x1801CC4C0 (-reset@-$shared_object@V-$ActivityData@VImmersiveIconsLogging@@U_TlgReflectorTag_Param0IsProvide.c)
 *     ?ReportStopActivity@?$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@AEAAXJ@Z @ 0x1801CC5F8 (-ReportStopActivity@-$ActivityBase@VImmersiveIconsLogging@@$00$0A@$04U_TlgReflectorTag_Param0IsP.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *ImmersiveIconsLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`ImmersiveIconsLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1802BAC98;
    qword_1802BAC98 = (__int64)&ImmersiveIconsLogging::`vftable';
    qword_1802BACB0 = (TraceLoggingHProvider)&`ImmersiveIconsLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_ff1cb61a894a675aef28afa9d97db49a_::_lambda_invoker_cdecl_);
    qword_1802BACA0 = (__int64)qword_1802BACB0;
    byte_1802BACA8 = 1;
    TraceLoggingRegister(qword_1802BACB0);
    dword_1802BACAC = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BAC98 + 8))(&qword_1802BAC98);
    InitOnceComplete(&`ImmersiveIconsLogging::Instance'::`2'::wrapper, 0, &qword_1802BAC98);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
