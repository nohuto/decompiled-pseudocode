/*
 * XREFs of ?DeInitGlobals@VIDMM_GLOBAL@@SAXXZ @ 0x1C00927A4
 * Callers:
 *     VidMmDeInitGlobals @ 0x1C001EC90 (VidMmDeInitGlobals.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0001DE4 (--3@YAXPEAX@Z.c)
 *     ??_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z @ 0x1C001E66C (--_GVIDMM_PROCESS_FENCE_STORAGE@@QEAAPEAXI@Z.c)
 *     McGenEventUnregister @ 0x1C001F4A4 (McGenEventUnregister.c)
 *     TlgUnregisterAggregateProvider @ 0x1C00ADD68 (TlgUnregisterAggregateProvider.c)
 */

void VIDMM_GLOBAL::DeInitGlobals(void)
{
  PREGHANDLE v0; // rcx

  operator delete(VIDMM_PROCESS::_pDxProcessPerAdapterCount);
  if ( VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage )
    VIDMM_PROCESS_FENCE_STORAGE::`scalar deleting destructor'((VIDMM_PROCESS_FENCE_STORAGE *)VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage);
  VIDMM_PROCESS_FENCE_STORAGE::_GlobalFenceStorage = 0LL;
  if ( VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock )
  {
    ExDeleteResourceLite(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    operator delete(VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock);
    VIDMM_DMA_POOL::_DmaPoolsAddRemoveLock = 0LL;
  }
  if ( VIDMM_GLOBAL::_RotationHistory )
  {
    operator delete(VIDMM_GLOBAL::_RotationHistory);
    VIDMM_GLOBAL::_RotationHistory = 0LL;
    qword_1C003C460 = 0LL;
  }
  TlgUnregisterAggregateProvider();
  McGenEventUnregister(v0);
  Microsoft_Windows_DxgKrnlHandle = 0LL;
}
