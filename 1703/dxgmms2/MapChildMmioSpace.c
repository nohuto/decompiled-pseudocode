/*
 * XREFs of MapChildMmioSpace @ 0x1C001EC10
 * Callers:
 *     ?MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@IPEAPEAXPEA_K@Z @ 0x1C0099AF8 (-MapHostAddressesToGuest@VIDMM_PROCESS@@QEAAJPEAU_MDL@@IPEAPEAXPEA_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0015BC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MapChildMmioSpace(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64))DxgCoreInterface[55])(a1);
}
