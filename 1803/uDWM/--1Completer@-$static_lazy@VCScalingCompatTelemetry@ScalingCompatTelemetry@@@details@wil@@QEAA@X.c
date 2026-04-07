/*
 * XREFs of ??1Completer@?$static_lazy@VCScalingCompatTelemetry@ScalingCompatTelemetry@@@details@wil@@QEAA@XZ @ 0x180048694
 * Callers:
 *     ?GetLegacyModernScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@K@Z @ 0x180036D4C (-GetLegacyModernScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@K@Z.c)
 *     ?IsEnabled@CScalingCompatTelemetry@ScalingCompatTelemetry@@SA_NE_K@Z @ 0x1800485FC (-IsEnabled@CScalingCompatTelemetry@ScalingCompatTelemetry@@SA_NE_K@Z.c)
 *     ?GetLegacyPhoneScaleFactor@@YA?AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z @ 0x1800AACC8 (-GetLegacyPhoneScaleFactor@@YA-AW4DEVICE_SCALE_FACTOR@@UtagSIZE@@0@Z.c)
 * Callees:
 *     ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x1800486F8 (-get@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

BOOL __fastcall wil::details::static_lazy<ScalingCompatTelemetry::CScalingCompatTelemetry>::Completer::~Completer(
        __int64 a1)
{
  DWORD v1; // edx
  LPINIT_ONCE v3; // rbx
  union _RTL_RUN_ONCE v4; // rdx
  union _RTL_RUN_ONCE v5; // rax

  v1 = *(_DWORD *)(a1 + 8);
  if ( !v1 )
  {
    v3 = *(LPINIT_ONCE *)a1;
    v4.Ptr = *(PVOID *)(wil::details::static_lazy<ScalingCompatLogging>::get(
                          a1,
                          lambda_830a858705f438bc5eb56dc5316ebd68_::_lambda_invoker_cdecl_)
                      + 8);
    v5.Ptr = v3[1].Ptr;
    v3[2].Ptr = v4.Ptr;
    LOBYTE(v3[3].Ptr) = 0;
    HIDWORD(v3[3].Ptr) = 1;
    (*((void (__fastcall **)(LPINIT_ONCE))v5.Ptr + 1))(v3 + 1);
    v1 = *(_DWORD *)(a1 + 8);
  }
  return InitOnceComplete_0(*(LPINIT_ONCE *)a1, v1, (LPVOID)(*(_QWORD *)a1 + 8LL));
}
