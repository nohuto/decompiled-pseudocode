/*
 * XREFs of VidMmInitDmaPool @ 0x1C0015960
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C007B10C (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 */

__int64 __fastcall VidMmInitDmaPool(VIDMM_DMA_POOL *a1)
{
  return VIDMM_DMA_POOL::Init(a1);
}
