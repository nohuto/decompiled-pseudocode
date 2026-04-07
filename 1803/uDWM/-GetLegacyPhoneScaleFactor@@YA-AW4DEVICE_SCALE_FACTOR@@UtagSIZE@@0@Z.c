/*
 * XREFs of ?GetLegacyPhoneScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z @ 0x1800AACC8
 * Callers:
 *     ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x180036BBC (-_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z.c)
 * Callees:
 *     ?LoadScalingOverrides@@YAXXZ @ 0x180036F24 (-LoadScalingOverrides@@YAXXZ.c)
 *     ?IsEnabled@CScalingCompatTelemetry@ScalingCompatTelemetry@@SA_NE_K@Z @ 0x1800485FC (-IsEnabled@CScalingCompatTelemetry@ScalingCompatTelemetry@@SA_NE_K@Z.c)
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x180048694 (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 *     atexit @ 0x180049154 (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x18004943F (InitOnceBeginInitialize_0.c)
 *     ?CalcBucketedScaleFactor@@YAIUtagSIZE@@0@Z @ 0x1800AABF4 (-CalcBucketedScaleFactor@@YAIUtagSIZE@@0@Z.c)
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x1800AADA8 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 */

__int64 __fastcall GetLegacyPhoneScaleFactor(struct tagSIZE a1, struct tagSIZE a2)
{
  enum DEVICE_SCALE_FACTOR v4; // esi
  char v5; // cl
  unsigned int v6; // ebx
  __int64 v7; // rcx
  union _RTL_RUN_ONCE *v9; // [rsp+20h] [rbp-18h] BYREF
  int v10; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+50h] [rbp+18h] BYREF
  LPVOID Context; // [rsp+58h] [rbp+20h] BYREF

  LoadScalingOverrides();
  v4 = g_legacyCompatScalingOverride;
  if ( g_legacyCompatScalingOverride == DEVICE_SCALE_FACTOR_INVALID )
    v4 = (unsigned int)CalcBucketedScaleFactor(a1, a2);
  v6 = CalcBucketedScaleFactor(a1, a2);
  if ( !byte_1800C9E6C )
  {
    if ( ScalingCompatTelemetry::CScalingCompatTelemetry::IsEnabled(v5) )
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize_0(
             &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper,
             0,
             &fPending,
             &Context)
        && fPending )
      {
        v9 = &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1800CA290;
        qword_1800CA290 = (__int64)&WindowFrameLogging::`vftable';
        atexit(lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_);
        v10 = 0;
        wil::details::static_lazy<ScalingCompatTelemetry::CScalingCompatTelemetry>::Completer::~Completer((__int64)&v9);
      }
      ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked_(
        v7,
        0LL,
        v6,
        (unsigned int)v4,
        v9);
    }
    byte_1800C9E6C = 1;
  }
  return (unsigned int)v4;
}
