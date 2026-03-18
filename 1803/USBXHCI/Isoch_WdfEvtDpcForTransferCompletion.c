/*
 * XREFs of Isoch_WdfEvtDpcForTransferCompletion @ 0x1C0029E90
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Isoch_ProcessTransferCompletion @ 0x1C0026E14 (Isoch_ProcessTransferCompletion.c)
 */

void __fastcall Isoch_WdfEvtDpcForTransferCompletion(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 912))(WdfDriverGlobals, a1);
  Isoch_ProcessTransferCompletion(v1, 0);
}
