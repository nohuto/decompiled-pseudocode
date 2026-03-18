/*
 * XREFs of ??1CWorkBuffer@Internal@FastRegion@@QEAA@XZ @ 0x18011BDAC
 * Callers:
 *     ?AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z @ 0x18002F200 (-AddToCurrentFrameInvalidRegion@CHwFullScreenRenderTarget@@MEAAJAEBVCRegion@@@Z.c)
 *     ?OccludeRegions@CMegaRectCollection@@AEAAJXZ @ 0x1800345F0 (-OccludeRegions@CMegaRectCollection@@AEAAJXZ.c)
 *     ?UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFER_ATTRIBUTES@@PEAUHRGN__@@PEBUScrollOptimization@@_N@Z @ 0x18004AEE0 (-UpdateRenderingRealization@CCompositionSurfaceInfo@@AEAA_NPEAVCBitmapRealization@@PEBUCSM_BUFFE.c)
 *     ?ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z @ 0x1800ABB40 (-ProcessCommandBatch@CComposition@@IEAAJPEBXIPEAVCChannelContext@@@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 */

void __fastcall FastRegion::Internal::CWorkBuffer::~CWorkBuffer(void **this)
{
  if ( this + 2 != this[1] )
    WPF::ProcessHeapImpl::Free(this[1]);
}
