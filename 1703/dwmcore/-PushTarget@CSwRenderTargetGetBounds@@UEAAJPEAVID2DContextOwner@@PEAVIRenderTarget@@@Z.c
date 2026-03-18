/*
 * XREFs of ?PushTarget@CSwRenderTargetGetBounds@@UEAAJPEAVID2DContextOwner@@PEAVIRenderTarget@@@Z @ 0x18003DC40
 * Callers:
 *     ?BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV?$TValueResource@UMilColorTransform@@UMILCMD_COLORTRANSFORMRESOURCE@@$0DJ@@@2PEAVCHwndRenderTarget@@@Z @ 0x1800AA100 (-BeginFrame@CDrawingContext@@QEAAJPEAVIRenderTarget@@PEBU_D3DCOLORVALUE@@_NPEBVCMILMatrix@@PEAV-.c)
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
