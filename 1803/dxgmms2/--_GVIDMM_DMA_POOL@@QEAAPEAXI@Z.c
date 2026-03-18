/*
 * XREFs of ??_GVIDMM_DMA_POOL@@QEAAPEAXI@Z @ 0x1C001552C
 * Callers:
 *     VidMmDestoryDmaPool @ 0x1C0015510 (VidMmDestoryDmaPool.c)
 *     ?InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ @ 0x1C007D4AC (-InitDmaPools@VIDMM_GLOBAL@@QEAAJXZ.c)
 *     ??1VIDMM_GLOBAL@@QEAA@XZ @ 0x1C009E970 (--1VIDMM_GLOBAL@@QEAA@XZ.c)
 * Callees:
 *     ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1C007AD00 (--1VIDMM_DMA_POOL@@QEAA@XZ.c)
 */

VIDMM_DMA_POOL *__fastcall VIDMM_DMA_POOL::`scalar deleting destructor'(VIDMM_DMA_POOL *P)
{
  VIDMM_DMA_POOL::~VIDMM_DMA_POOL(P);
  if ( P )
    ExFreePoolWithTag(P, 0);
  return P;
}
