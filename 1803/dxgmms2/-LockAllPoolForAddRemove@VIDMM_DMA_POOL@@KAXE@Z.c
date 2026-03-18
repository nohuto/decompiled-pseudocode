/*
 * XREFs of ?LockAllPoolForAddRemove@VIDMM_DMA_POOL@@KAXE@Z @ 0x1C0056DD4
 * Callers:
 *     ?AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z @ 0x1C00573B4 (-AddDmaBufferToPool@VIDMM_DMA_POOL@@IEAAJ_KII@Z.c)
 *     ?RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z @ 0x1C007AAF8 (-RemoveDmaBufferFromPool@VIDMM_DMA_POOL@@IEAAXPEAU_VIDMM_DMA_BUFFER@@@Z.c)
 *     ??1VIDMM_DMA_POOL@@QEAA@XZ @ 0x1C007AD00 (--1VIDMM_DMA_POOL@@QEAA@XZ.c)
 *     ?Init@VIDMM_DMA_POOL@@QEAAJXZ @ 0x1C007B10C (-Init@VIDMM_DMA_POOL@@QEAAJXZ.c)
 *     ?WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z @ 0x1C00A9E30 (-WriteDmaHistoryToMinidump@VIDMM_DMA_POOL@@QEAA_KPEAU_VIDMM_MINIDUMP_HEADER@@PEAE_KK2K@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_DMA_POOL::LockAllPoolForAddRemove(char a1)
{
  if ( a1 )
    ExAcquireResourceExclusiveLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock, 1u);
  else
    ExAcquireResourceSharedLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock, 1u);
}
