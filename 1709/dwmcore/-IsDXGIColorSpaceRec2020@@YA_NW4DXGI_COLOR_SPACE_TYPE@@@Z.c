/*
 * XREFs of ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180089F54
 * Callers:
 *     ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180089F34 (-IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z @ 0x180143720 (-IsHigherProprity@COverlayContext@@CA_NAEBVOverlayPlaneInfo@1@0@Z.c)
 *     ?VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ @ 0x1801D4154 (-VPBltToDecodeBitmap@CDxHandleYUVBitmapRealization@@IEAAJXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall IsDXGIColorSpaceRec2020(int a1)
{
  char v1; // dl

  v1 = 0;
  if ( a1 == 3 || a1 > 9 && (a1 <= 17 || a1 == 21 || (unsigned int)(a1 - 23) <= 1) )
    return 1;
  return v1;
}
