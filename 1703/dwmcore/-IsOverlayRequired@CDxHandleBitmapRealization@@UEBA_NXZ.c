/*
 * XREFs of ?IsOverlayRequired@CDxHandleBitmapRealization@@UEBA_NXZ @ 0x18000B460
 * Callers:
 *     ?IsOverlayRequired@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x18000AC80 (-IsOverlayRequired@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDxHandleBitmapRealization::IsOverlayRequired(CDxHandleBitmapRealization *this)
{
  return *((unsigned __int8 *)this + 132) >> 7;
}
