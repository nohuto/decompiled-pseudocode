/*
 * XREFs of MapChildVaSpace @ 0x1C002316C
 * Callers:
 *     ?MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJ_KKKPEAPEAXPEA_K1@Z @ 0x1C00A8C08 (-MapHostVirtualAddressToGuest@VIDMM_PROCESS@@QEAAJ_KKKPEAPEAXPEA_K1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0017A50 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall MapChildVaSpace(__int64 a1, _QWORD *a2, __int64 a3)
{
  return DxgCoreInterface[67](a1, a2, a3);
}
