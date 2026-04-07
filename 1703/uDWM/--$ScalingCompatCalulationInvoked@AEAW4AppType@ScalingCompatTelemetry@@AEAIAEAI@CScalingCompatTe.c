/*
 * XREFs of ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x180049DE4
 * Callers:
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180013F00 (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?GetLegacyPhoneScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z @ 0x1800A3514 (-GetLegacyPhoneScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z.c)
 * Callees:
 *     ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x18003E9A8 (-ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@.c)
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x180049ED4 (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 *     atexit @ 0x18004D034 (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x18004D10E (InitOnceBeginInitialize_0.c)
 */

int __fastcall ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked<enum ScalingCompatTelemetry::AppType &,unsigned int &,unsigned int &>(
        int *a1,
        int *a2,
        int *a3)
{
  int result; // eax
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
    Context = &qword_1800C11D0;
    qword_1800C11D0 = (__int64)&WindowFrameLogging::`vftable';
    atexit(lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_);
    v11 = 0;
    wil::details::static_lazy<ScalingCompatTelemetry::CScalingCompatTelemetry>::Completer::~Completer(&v10);
  }
  result = (int)Context;
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
      Context = &qword_1800C11D0;
      qword_1800C11D0 = (__int64)&WindowFrameLogging::`vftable';
      atexit(lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_);
      v11 = 0;
      wil::details::static_lazy<ScalingCompatTelemetry::CScalingCompatTelemetry>::Completer::~Completer(&v10);
    }
    return ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked_(v8, *a1, *a2, *a3);
  }
  return result;
}
