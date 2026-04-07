/*
 * XREFs of ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x1800449C8
 * Callers:
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180035248 (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?GetLegacyPhoneScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z @ 0x1800A1C38 (-GetLegacyPhoneScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x180044AB8 (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x180044B18 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 *     atexit @ 0x180045494 (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x180045AFD (InitOnceBeginInitialize_0.c)
 */

LPVOID __fastcall ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked<enum ScalingCompatTelemetry::AppType &,unsigned int &,unsigned int &>(
        unsigned int *a1,
        unsigned int *a2,
        unsigned int *a3)
{
  LPVOID result; // rax
  _DWORD *v7; // rdx
  __int64 v8; // rcx
  LPVOID Context; // [rsp+20h] [rbp-20h] BYREF
  union _RTL_RUN_ONCE *v10; // [rsp+28h] [rbp-18h] BYREF
  int v11; // [rsp+30h] [rbp-10h]
  WINBOOL fPending; // [rsp+88h] [rbp+48h] BYREF

  InitOnceBeginInitialize_0(
    &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper,
    0,
    &fPending,
    &Context);
  if ( fPending )
  {
    v10 = &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper;
    Context = &qword_1800C1A88;
    qword_1800C1A88 = (__int64)&WindowFrameLogging::`vftable';
    atexit(lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_);
    v11 = 0;
    wil::details::static_lazy<ScalingCompatTelemetry::CScalingCompatTelemetry>::Completer::~Completer(&v10);
  }
  result = Context;
  v7 = (_DWORD *)*((_QWORD *)Context + 1);
  if ( v7 && *v7 )
  {
    InitOnceBeginInitialize_0(
      &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper,
      0,
      &fPending,
      &Context);
    if ( fPending )
    {
      v10 = &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper;
      Context = &qword_1800C1A88;
      qword_1800C1A88 = (__int64)&WindowFrameLogging::`vftable';
      atexit(lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_);
      v11 = 0;
      wil::details::static_lazy<ScalingCompatTelemetry::CScalingCompatTelemetry>::Completer::~Completer(&v10);
    }
    return (LPVOID)ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked_(v8, *a1, *a2, *a3);
  }
  return result;
}
