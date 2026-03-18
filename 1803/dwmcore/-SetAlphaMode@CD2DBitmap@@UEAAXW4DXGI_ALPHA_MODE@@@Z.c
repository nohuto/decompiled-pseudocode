/*
 * XREFs of ?SetAlphaMode@CD2DBitmap@@UEAAXW4DXGI_ALPHA_MODE@@@Z @ 0x1801E5C70
 * Callers:
 *     <none>
 * Callees:
 *     ??$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z @ 0x180021460 (--$ReleaseInterface@VIRenderTargetBitmap@@@@YAXAEAPEAVIRenderTargetBitmap@@@Z.c)
 *     ?InitializeBitmaps@CD2DBitmap@@IEAAJXZ @ 0x180077470 (-InitializeBitmaps@CD2DBitmap@@IEAAJXZ.c)
 */

void __fastcall CD2DBitmap::SetAlphaMode(CD2DBitmap *this, enum DXGI_ALPHA_MODE a2)
{
  if ( *((_DWORD *)this + 29) != a2 )
  {
    *((_DWORD *)this + 29) = a2;
    ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 6);
    ReleaseInterface<IRenderTargetBitmap>((__int64 *)this + 7);
    CD2DBitmap::InitializeBitmaps((CD2DBitmap *)((char *)this - 104));
  }
}
