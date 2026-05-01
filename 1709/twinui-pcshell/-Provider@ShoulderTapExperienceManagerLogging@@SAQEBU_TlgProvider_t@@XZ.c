/*
 * XREFs of ?Provider@ShoulderTapExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B3618
 * Callers:
 *     ?Instance@ShoulderTapExperienceManagerTelemetry@@KAPEAV1@XZ @ 0x1800B3714 (-Instance@ShoulderTapExperienceManagerTelemetry@@KAPEAV1@XZ.c)
 *     ?ShoulderTap_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG00HHH@Z @ 0x1800B37F4 (-ShoulderTap_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG00HHH@Z.c)
 *     ?PositionShoulderTapStart_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG@Z @ 0x1800B3978 (-PositionShoulderTapStart_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBG@Z.c)
 *     ?PositionShoulderTapEnd_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBGHHHHHHHHHHHHH@Z @ 0x1800B3A28 (-PositionShoulderTapEnd_@ShoulderTapExperienceManagerTelemetry@@QEAAXPEBGHHHHHHHHHHHHH@Z.c)
 * Callees:
 *     TraceLoggingRegister @ 0x180001078 (TraceLoggingRegister.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

const struct _TlgProvider_t *ShoulderTapExperienceManagerLogging::Provider(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`ShoulderTapExperienceManagerLogging::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    Context = &qword_1802BAE48;
    qword_1802BAE48 = (__int64)&LockScreenServiceLogging::`vftable';
    qword_1802BAE60 = (TraceLoggingHProvider)&`ShoulderTapExperienceManagerLogging::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(lambda_e47dc56054974f6441f4df3a6c4c9af5_::_lambda_invoker_cdecl_);
    qword_1802BAE50 = (__int64)qword_1802BAE60;
    byte_1802BAE58 = 1;
    TraceLoggingRegister(qword_1802BAE60);
    dword_1802BAE5C = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BAE48 + 8))(&qword_1802BAE48);
    InitOnceComplete(&`ShoulderTapExperienceManagerLogging::Instance'::`2'::wrapper, 0, &qword_1802BAE48);
  }
  return (const struct _TlgProvider_t *)*((_QWORD *)Context + 1);
}
