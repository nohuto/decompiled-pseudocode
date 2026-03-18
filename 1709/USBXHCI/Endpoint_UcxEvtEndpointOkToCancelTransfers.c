/*
 * XREFs of Endpoint_UcxEvtEndpointOkToCancelTransfers @ 0x1C001C180
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     ESM_AddEvent @ 0x1C003DBEC (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_UcxEvtEndpointOkToCancelTransfers(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004E1D8);
  return ESM_AddEvent((PVOID)(v1 + 288));
}
