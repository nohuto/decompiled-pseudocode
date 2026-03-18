/*
 * XREFs of IntelPptFilter_EvtDestoryCallback @ 0x1C003C1D0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00029C0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall IntelPptFilter_EvtDestoryCallback(__int64 a1)
{
  __int64 v1; // rax

  v1 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01023 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C004B0E8);
  MmUnlockPagableImageSection(*(PVOID *)(v1 + 56));
}
