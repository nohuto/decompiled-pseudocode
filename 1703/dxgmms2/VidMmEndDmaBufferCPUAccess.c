/*
 * XREFs of VidMmEndDmaBufferCPUAccess @ 0x1C0013060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VidMmEndDmaBufferCPUAccess(VIDMM_DMA_POOL **a1)
{
  VIDMM_DMA_POOL::EndCPUAccess(a1[17], (struct _VIDMM_DMA_BUFFER *)a1);
}
