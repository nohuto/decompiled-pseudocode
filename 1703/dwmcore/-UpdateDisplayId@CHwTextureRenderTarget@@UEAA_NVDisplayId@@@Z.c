/*
 * XREFs of ?UpdateDisplayId@CHwTextureRenderTarget@@UEAA_NVDisplayId@@@Z @ 0x180049690
 * Callers:
 *     ?GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelFormatInfo@@_N33PEAPEAVIRenderTargetBitmap@@@Z @ 0x180006588 (-GetRenderTargetBitmap@CRenderTargetBitmapCache@@AEAAJAEBVCResourceTag@@IIVDisplayId@@PEAUPixelF.c)
 *     ?SetDisplayId@CHwTextureRenderTarget@@UEAAXVDisplayId@@@Z @ 0x180049310 (-SetDisplayId@CHwTextureRenderTarget@@UEAAXVDisplayId@@@Z.c)
 * Callees:
 *     ??$ReleaseInterface@VCBitmapOfDeviceBitmaps@@@@YAXAEAPEAVCBitmapOfDeviceBitmaps@@@Z @ 0x18004B9C0 (--$ReleaseInterface@VCBitmapOfDeviceBitmaps@@@@YAXAEAPEAVCBitmapOfDeviceBitmaps@@@Z.c)
 */

char __fastcall CHwTextureRenderTarget::UpdateDisplayId(__int64 a1, int a2)
{
  char result; // al

  result = 0;
  if ( a2 != *(_DWORD *)(a1 + 116) )
  {
    *(_DWORD *)(a1 + 116) = a2;
    ReleaseInterface<CBitmapOfDeviceBitmaps>(a1 + 240);
    return 1;
  }
  return result;
}
