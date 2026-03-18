/*
 * XREFs of Control_WdfEvtDpcForTransferCompletion @ 0x1C00265D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00086E0 (_guard_dispatch_icall_nop.c)
 *     Control_ProcessTransferCompletion @ 0x1C0024658 (Control_ProcessTransferCompletion.c)
 */

void __fastcall Control_WdfEvtDpcForTransferCompletion(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 912))(WdfDriverGlobals, a1);
  Control_ProcessTransferCompletion(v1, 0);
}
