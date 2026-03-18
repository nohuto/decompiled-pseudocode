/*
 * XREFs of Bulk_WdfEvtDpcForTransferCompletion @ 0x1C002F780
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Bulk_ProcessTransferCompletion @ 0x1C002CBD8 (Bulk_ProcessTransferCompletion.c)
 */

void __fastcall Bulk_WdfEvtDpcForTransferCompletion(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 912))(WdfDriverGlobals, a1);
  Bulk_ProcessTransferCompletion(v1, 0);
}
