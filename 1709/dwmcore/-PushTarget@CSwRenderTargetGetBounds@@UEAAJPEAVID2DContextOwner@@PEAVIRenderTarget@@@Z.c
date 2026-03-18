/*
 * XREFs of ?PushTarget@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x18002C7C0
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0BE@@@2PEAVCHwndRenderTarget@@@Z @ 0x180041E30 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
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
