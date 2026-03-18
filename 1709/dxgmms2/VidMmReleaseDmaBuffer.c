/*
 * XREFs of VidMmReleaseDmaBuffer @ 0x1C0020D00
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z @ 0x1C000217C (-ReleaseBuffer@VIDMM_DMA_POOL@@QEAAXPEAU_VIDMM_DMA_BUFFER@@E@Z.c)
 */

void __fastcall VidMmReleaseDmaBuffer(VIDMM_DMA_POOL **a1)
{
  VIDMM_DMA_POOL::ReleaseBuffer(a1[17], (struct _VIDMM_DMA_BUFFER *)a1, 0);
}
