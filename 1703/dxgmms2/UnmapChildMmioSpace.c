/*
 * XREFs of UnmapChildMmioSpace @ 0x1C001EC40
 * Callers:
 *     ?UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K@Z @ 0x1C0099E00 (-UnmapHostAddressesFromGuest@VIDMM_PROCESS@@QEAAXPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 UnmapChildMmioSpace()
{
  return ((__int64 (*)(void))DxgCoreInterface[56])();
}
