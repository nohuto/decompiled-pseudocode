/*
 * XREFs of ?PushTarget@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x180042720
 * Callers:
 *     ?PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z @ 0x1800654E0 (-PushRenderTarget@CDrawingContext@@QEAAJPEAVIRenderTarget@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSwRenderTargetGetBounds::PushTarget(
        CSwRenderTargetGetBounds *this,
        struct ID2DContextOwner *a2,
        struct IRenderTarget *a3)
{
  ++*((_DWORD *)this + 6);
  return 0LL;
}
