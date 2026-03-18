/*
 * XREFs of Endpoint_WdfEvtStateMachineTimer @ 0x1C0015EF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     ESM_AddEvent @ 0x1C003C210 (ESM_AddEvent.c)
 */

__int64 __fastcall Endpoint_WdfEvtStateMachineTimer(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 2568))(WdfDriverGlobals, a1);
  v2 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         v1,
         off_1C004B1D8);
  return ESM_AddEvent((PVOID)(v2 + 288));
}
