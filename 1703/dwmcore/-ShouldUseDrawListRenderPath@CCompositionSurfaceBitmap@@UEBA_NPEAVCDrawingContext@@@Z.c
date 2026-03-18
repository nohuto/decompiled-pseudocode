/*
 * XREFs of ?ShouldUseDrawListRenderPath@CCompositionSurfaceBitmap@@UEBA_NPEAVCDrawingContext@@@Z @ 0x18000B1D0
 * Callers:
 *     ?RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z @ 0x180086EC0 (-RenderContent@CVisual@@UEAAJPEAVCDrawingContext@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CCompositionSurfaceBitmap::ShouldUseDrawListRenderPath(
        CCompositionSurfaceBitmap *this,
        struct CDrawingContext *a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( *((_BYTE *)this + 524) || *((_BYTE *)a2 + 728) && *((_DWORD *)a2 + 172) )
    return 1LL;
  return result;
}
