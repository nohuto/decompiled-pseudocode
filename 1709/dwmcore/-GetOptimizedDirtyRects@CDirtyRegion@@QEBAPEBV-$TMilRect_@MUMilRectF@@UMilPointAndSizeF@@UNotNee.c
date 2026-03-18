/*
 * XREFs of ?GetOptimizedDirtyRects@CDirtyRegion@@QEBAPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@XZ @ 0x18011BBE0
 * Callers:
 *     ?AddInvalidRects@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdropRegion@@@Z @ 0x1801BE340 (-AddInvalidRects@CHolographicInteropTexture@@UEAAXPEBVCVisualTree@@PEAVCDirtyRegion@@PEAVCBackdr.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDirtyRegion::GetOptimizedDirtyRects(__int64 a1)
{
  __int64 result; // rax

  result = a1 + 2700;
  if ( !*(_BYTE *)(a1 + 2722) )
    return a1 + 956;
  return result;
}
