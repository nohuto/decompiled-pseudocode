/*
 * XREFs of ?IsEnabled@CScalingCompatTelemetry@ScalingCompatTelemetry@@SA_NE_K@Z @ 0x1800485FC
 * Callers:
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180036D4C (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?GetLegacyPhoneScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z @ 0x1800AACC8 (-GetLegacyPhoneScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x180048694 (--1Completer@-$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@X.c)
 *     atexit @ 0x180049154 (atexit.c)
 *     InitOnceBeginInitialize_0 @ 0x18004943F (InitOnceBeginInitialize_0.c)
 */

char __fastcall ScalingCompatTelemetry::CScalingCompatTelemetry::IsEnabled(char a1)
{
  char v1; // bl
  _DWORD *v2; // rcx
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v7; // [rsp+48h] [rbp+10h] BYREF

  LOBYTE(v6) = a1;
  v1 = 0;
  v7 = 0LL;
  if ( InitOnceBeginInitialize_0(
         &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper,
         0,
         &v6,
         (LPVOID *)&v7)
    && v6 )
  {
    v4 = &`ScalingCompatTelemetry::CScalingCompatTelemetry::Instance'::`2'::wrapper;
    v7 = &qword_1800CA290;
    qword_1800CA290 = (__int64)&WindowFrameLogging::`vftable';
    atexit(lambda_7c6f95392d1fa211f578d6d8eb47d107_::_lambda_invoker_cdecl_);
    v5 = 0;
    wil::details::static_lazy<ScalingCompatTelemetry::CScalingCompatTelemetry>::Completer::~Completer(&v4);
  }
  v2 = (_DWORD *)v7[1];
  if ( v2 && *v2 )
    return 1;
  return v1;
}
