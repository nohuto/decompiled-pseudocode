/*
 * XREFs of ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180036D4C
 * Callers:
 *     ?_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z @ 0x180036BBC (-_initimpl@CImmersiveOrPrimaryMonitor@@CAJPEAUHMONITOR__@@QEAUSCALINGINFO@@@Z.c)
 *     ?GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z @ 0x180036CA8 (-GetStartTilesScaleFactor@@YAXAEBU_DPI_INFORMATION@@PEAI@Z.c)
 * Callees:
 *     ?LoadScalingOverrides@@YAXXZ @ 0x180036F24 (-LoadScalingOverrides@@YAXXZ.c)
 *     ?IsEnabled@CScalingCompatTelemetry@ScalingCompatTelemetry@@SA_NE_K@Z @ 0x1800485FC (-IsEnabled@CScalingCompatTelemetry@ScalingCompatTelemetry@@SA_NE_K@Z.c)
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x180048694 (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 *     atexit @ 0x180049154 (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x18004943F (InitOnceBeginInitialize_0.c)
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x1800AADA8 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 */

__int64 __fastcall GetLegacyModernScaleFactor(unsigned int a1)
{
  unsigned __int64 v2; // rdx
  unsigned __int8 *v3; // rcx
  enum DEVICE_SCALE_FACTOR v4; // ebx
  __int64 v5; // rax
  __int64 v7; // rcx
  union _RTL_RUN_ONCE *v8; // [rsp+20h] [rbp-18h] BYREF
  int v9; // [rsp+28h] [rbp-10h]
  WINBOOL fPending; // [rsp+40h] [rbp+8h] BYREF
  LPVOID Context; // [rsp+48h] [rbp+10h] BYREF

  LoadScalingOverrides();
  v4 = g_legacyCompatScalingOverride;
  if ( g_legacyCompatScalingOverride == DEVICE_SCALE_FACTOR_INVALID )
  {
    LODWORD(v2) = 0;
    v3 = &_ImageBase;
    v5 = 0LL;
    v4 = SCALE_100_PERCENT;
    do
    {
      if ( a1 >= *(_DWORD *)((char *)&ModernScaleFactorCutoffs + v5) )
        v4 = *(_DWORD *)((char *)&unk_1800B4D04 + v5);
      v2 = (unsigned int)(v2 + 1);
      v5 += 4LL;
    }
    while ( (unsigned int)v2 < 2 );
  }
  if ( !byte_1800C9E6C )
  {
    if ( ScalingCompatTelemetry::CScalingCompatTelemetry::IsEnabled((unsigned __int8)v3, v2) )
    {
      Context = 0LL;
      if ( InitOnceBeginInitialize_0(
             &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper,
             0,
             &fPending,
             &Context)
        && fPending )
      {
        v8 = &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper;
        Context = &qword_1800CA290;
        qword_1800CA290 = (__int64)&WindowFrameLogging::`vftable';
        atexit(lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_);
        v9 = 0;
        wil::details::static_lazy<ScalingCompatTelemetry::CScalingCompatTelemetry>::Completer::~Completer(&v8);
      }
      ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked_(
        v7,
        1LL,
        a1,
        (unsigned int)v4,
        v8);
    }
    byte_1800C9E6C = 1;
  }
  return (unsigned int)v4;
}
