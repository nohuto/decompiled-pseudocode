/*
 * XREFs of VidMmInvalidateAllVirtualAddresses @ 0x1C0020C50
 * Callers:
 *     <none>
 * Callees:
 *     ?InvalidateAllVirtualAddresses@VIDMM_GLOBAL@@QEAAXXZ @ 0x1C009B1A8 (-InvalidateAllVirtualAddresses@VIDMM_GLOBAL@@QEAAXXZ.c)
 */

void __fastcall VidMmInvalidateAllVirtualAddresses(VIDMM_GLOBAL *a1)
{
  VIDMM_GLOBAL::InvalidateAllVirtualAddresses(a1);
}
