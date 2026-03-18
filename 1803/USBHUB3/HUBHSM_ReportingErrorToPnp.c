/*
 * XREFs of HUBHSM_ReportingErrorToPnp @ 0x1C0007B60
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0039BA0 (_guard_dispatch_icall_nop.c)
 *     HUBMISC_ReportPnPFailureProblem @ 0x1C006E518 (HUBMISC_ReportPnPFailureProblem.c)
 */

__int64 __fastcall HUBHSM_ReportingErrorToPnp(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(a1 + 960);
  if ( *(_DWORD *)(v1 + 2588) )
    HUBMISC_ReportPnPFailureProblem(*(_QWORD *)(v1 + 16));
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, __int64))(WdfFunctions_01015 + 696))(
    WdfDriverGlobals,
    *(_QWORD *)(v1 + 16),
    2LL);
  return 2053LL;
}
