/*
 * XREFs of VidMmReleaseDmaBuffer @ 0x1C001ED40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmReleaseDmaBuffer(VIDMM_DMA_POOL **a1)
{
  VIDMM_DMA_POOL::ReleaseBuffer(a1[17], (struct _VIDMM_DMA_BUFFER *)a1, 0);
}
