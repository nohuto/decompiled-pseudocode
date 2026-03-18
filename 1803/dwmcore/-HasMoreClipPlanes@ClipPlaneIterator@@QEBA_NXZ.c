/*
 * XREFs of ?HasMoreClipPlanes@ClipPlaneIterator@@QEBA_NXZ @ 0x18017389C
 * Callers:
 *     ?EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z @ 0x18006CFF0 (-EmitDrawListCache@CDrawingContext@@AEAAJPEAVCDrawListCache@@MW4Enum@MilCompositingMode@@@Z.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009B2F0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ @ 0x180173F08 (-UpdateClippingPlanes@ClipPlaneIterator@@QEAAJXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall ClipPlaneIterator::HasMoreClipPlanes(ClipPlaneIterator *this)
{
  return *((_DWORD *)this + 2) < *((_DWORD *)this + 12) || *((_DWORD *)this + 3) < *((_DWORD *)this + 28);
}
