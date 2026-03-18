/*
 * XREFs of Bulk_Transfer_Complete @ 0x1C002F15C
 * Callers:
 *     Bulk_CompleteTransfers @ 0x1C002B38C (Bulk_CompleteTransfers.c)
 *     Bulk_RetrieveNextStage @ 0x1C002D78C (Bulk_RetrieveNextStage.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 *     Bulk_Transfer_PrepareForCompletion @ 0x1C002F35C (Bulk_Transfer_PrepareForCompletion.c)
 */

void __fastcall Bulk_Transfer_Complete(__int64 a1, __int64 a2)
{
  KIRQL v3; // bl

  Bulk_Transfer_PrepareForCompletion();
  v3 = KfRaiseIrql(2u);
  (*(void (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD, _QWORD))(WdfFunctions_01023 + 2104))(
    WdfDriverGlobals,
    *(_QWORD *)(a2 + 24),
    *(unsigned int *)(a2 + 72));
  KeLowerIrql(v3);
}
