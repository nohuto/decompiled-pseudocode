/*
 * XREFs of ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAXW4BufferCompositionMode@@_N@Z @ 0x180007380
 * Callers:
 *     ?DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z @ 0x180007DA8 (-DrawAsOverlay@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEA_N@Z.c)
 * Callees:
 *     ?IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ @ 0x180007B74 (-IsSwapChain@CCompositionSurfaceBitmap@@QEBA_NXZ.c)
 *     ?SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z @ 0x180008F30 (-SetCompositionMode@CCompositionSurfaceInfo@@QEAAXW4BufferCompositionMode@@_N@Z.c)
 */

char __fastcall CCompositionSurfaceBitmap::SetCompositionMode(__int64 a1)
{
  char result; // al
  __int64 v2; // r9
  unsigned int v3; // r10d

  result = CCompositionSurfaceBitmap::IsSwapChain((CCompositionSurfaceBitmap *)(a1 - 56));
  if ( result )
    return CCompositionSurfaceInfo::SetCompositionMode(*(_QWORD *)(v2 + 32), v3);
  return result;
}
