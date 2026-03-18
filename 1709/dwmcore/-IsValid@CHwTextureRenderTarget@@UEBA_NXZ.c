/*
 * XREFs of ?IsValid@CHwTextureRenderTarget@@UEBA_NXZ @ 0x180090150
 * Callers:
 *     ?FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRenderTargetBitmap@@@Z @ 0x18008CFE4 (-FindMatchingBitmap@CRenderTargetBitmapCache@@AEAAJIIAEBUPixelFormatInfo@@_N1PEAPEAVCScratchRend.c)
 *     ?GetDeviceNoRef@CHwSurfaceRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z @ 0x18008F880 (-GetDeviceNoRef@CHwSurfaceRenderTarget@@MEBAJPEAPEAVCD3DDeviceLevel1@@@Z.c)
 *     ?IsValid@CHwTextureRenderTarget@@WMA@EBA_NXZ @ 0x1800C6A60 (-IsValid@CHwTextureRenderTarget@@WMA@EBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CHwTextureRenderTarget::IsValid(CHwTextureRenderTarget *this)
{
  __int64 v1; // rdx
  bool result; // al

  v1 = *((_QWORD *)this + 28);
  result = 0;
  if ( v1 )
    return *(_BYTE *)(v1 + 69) != 0;
  return result;
}
