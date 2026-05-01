/*
 * XREFs of ?Instance@ShoulderTapExperienceManagerTelemetry@@KAPEAV1@XZ @ 0x1800B3714
 * Callers:
 *     ?ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z @ 0x1800B4810 (-ShoulderTap@CShoulderTapExperienceManager@@UEAAJPEAUHSTRING__@@000HHH000@Z.c)
 *     ?PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ @ 0x1800B4D54 (-PositionShoulderTap@CShoulderTapExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?Provider@ShoulderTapExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ @ 0x1800B3618 (-Provider@ShoulderTapExperienceManagerLogging@@SAQEBU_TlgProvider_t@@XZ.c)
 *     atexit @ 0x1801E277C (atexit.c)
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

struct ShoulderTapExperienceManagerTelemetry *ShoulderTapExperienceManagerTelemetry::Instance(void)
{
  WINBOOL fPending; // [rsp+30h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+38h] [rbp+10h] BYREF

  InitOnceBeginInitialize(&`ShoulderTapExperienceManagerTelemetry::Instance'::`2'::wrapper, 0, &fPending, &Context);
  if ( fPending )
  {
    qword_1802BAE70 = (__int64)&IamTraceLogging::`vftable';
    Context = &qword_1802BAE70;
    atexit(lambda_43b277c613f9e9ea449b850c5995e33f_::_lambda_invoker_cdecl_);
    qword_1802BAE78 = (__int64)ShoulderTapExperienceManagerLogging::Provider();
    byte_1802BAE80 = 0;
    dword_1802BAE84 = 1;
    (*(void (__fastcall **)(__int64 *))(qword_1802BAE70 + 8))(&qword_1802BAE70);
    InitOnceComplete(&`ShoulderTapExperienceManagerTelemetry::Instance'::`2'::wrapper, 0, &qword_1802BAE70);
  }
  return (struct ShoulderTapExperienceManagerTelemetry *)Context;
}
