/*
 * XREFs of UnmapChildMmioSpace @ 0x1C0020B1C
 * Callers:
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1@Z @ 0x1C00A2208 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K1@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00180A0 (_guard_dispatch_icall_nop.c)
 */

__int64 UnmapChildMmioSpace()
{
  return ((__int64 (*)(void))DxgCoreInterface[56])();
}
