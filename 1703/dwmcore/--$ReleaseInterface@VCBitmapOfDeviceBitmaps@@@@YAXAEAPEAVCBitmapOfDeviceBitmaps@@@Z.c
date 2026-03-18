/*
 * XREFs of ??$ReleaseInterface@VCBitmapOfDeviceBitmaps@@@@YAXAEAPEAVCBitmapOfDeviceBitmaps@@@Z @ 0x18004B9C0
 * Callers:
 *     ?UpdateDisplayId@CHwTextureRenderTarget@@UEAA_NVDisplayId@@@Z @ 0x180049690 (-UpdateDisplayId@CHwTextureRenderTarget@@UEAA_NVDisplayId@@@Z.c)
 *     ?UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x1800497D0 (-UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?ReleaseDeviceBitmapResources@CGdiSpriteBitmap@@IEAAXXZ @ 0x180055914 (-ReleaseDeviceBitmapResources@CGdiSpriteBitmap@@IEAAXXZ.c)
 *     ?AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z @ 0x18012D59C (-AddBuffer@CFlipChain@@AEAAJPEAPEAVCBitmapOfDeviceBitmaps@@@Z.c)
 *     ?ResetBuffers@CFlipChain@@IEAAJXZ @ 0x180163FE4 (-ResetBuffers@CFlipChain@@IEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180048FE4 (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CBitmapOfDeviceBitmaps>(CMILCOMBase **a1)
{
  CMILCOMBase *v2; // rcx
  __int64 result; // rax

  v2 = *a1;
  if ( v2 )
  {
    result = CMILCOMBase::InternalRelease(v2);
    *a1 = 0LL;
  }
  return result;
}
