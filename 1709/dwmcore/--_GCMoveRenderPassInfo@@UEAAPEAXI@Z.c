/*
 * XREFs of ??_GCMoveRenderPassInfo@@UEAAPEAXI@Z @ 0x18014DE20
 * Callers:
 *     ?CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInfo@@@Z @ 0x180176E78 (-CreateMoveRenderPassInfoForContext@CVisual@@IEAAJPEAVCDrawingContext@@PEAPEAVCMoveRenderPassInf.c)
 *     ?ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@@@Z @ 0x180177C88 (-ReleaseMoveRenderPassInfoForContext@CVisual@@QEAAXPEAVCDrawingContext@@PEAVCMoveRenderPassInfo@.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@SAXPEAX@Z @ 0x1800466F8 (-Free@ProcessHeapImpl@WPF@@SAXPEAX@Z.c)
 *     ??1CMoveRenderPassInfo@@UEAA@XZ @ 0x18014DDC8 (--1CMoveRenderPassInfo@@UEAA@XZ.c)
 */

void **__fastcall CMoveRenderPassInfo::`scalar deleting destructor'(void **this, char a2)
{
  CMoveRenderPassInfo::~CMoveRenderPassInfo(this);
  if ( (a2 & 1) != 0 )
    WPF::ProcessHeapImpl::Free(this);
  return this;
}
