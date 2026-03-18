/*
 * XREFs of Control_WdfEvtWorkItemForTransferCompletion @ 0x1C00244F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Control_ProcessTransferCompletion @ 0x1C0021EC8 (Control_ProcessTransferCompletion.c)
 */

void __fastcall Control_WdfEvtWorkItemForTransferCompletion(__int64 a1)
{
  KIRQL v2; // di
  __int64 v3; // rax

  v2 = KfRaiseIrql(2u);
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01023 + 3048))(WdfDriverGlobals, a1);
  Control_ProcessTransferCompletion(v3, 1);
  KeLowerIrql(v2);
}
