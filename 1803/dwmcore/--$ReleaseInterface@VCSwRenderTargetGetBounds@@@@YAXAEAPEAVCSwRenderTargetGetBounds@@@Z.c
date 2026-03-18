/*
 * XREFs of ??$ReleaseInterface@VCSwRenderTargetGetBounds@@@@YAXAEAPEAVCSwRenderTargetGetBounds@@@Z @ 0x1800C3D4C
 * Callers:
 *     ?EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ @ 0x1800703D0 (-EnsureDrawingContextFrame@CContentBounder@@AEAAJXZ.c)
 *     ?SetDisplayId@CHwTextureRenderTarget@@UEAAXVDisplayId@@@Z @ 0x180078410 (-SetDisplayId@CHwTextureRenderTarget@@UEAAXVDisplayId@@@Z.c)
 *     ?UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z @ 0x180078930 (-UpdatePixelFormatInfo@CHwTextureRenderTarget@@UEAAXAEBUPixelFormatInfo@@@Z.c)
 *     ?Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z @ 0x1800C6944 (-Create@CSwRenderTargetGetBounds@@SAJPEAVCComposition@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?InternalRelease@CMILCOMBase@@QEAAKXZ @ 0x180078D7C (-InternalRelease@CMILCOMBase@@QEAAKXZ.c)
 */

__int64 __fastcall ReleaseInterface<CSwRenderTargetGetBounds>(CMILCOMBase **a1)
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
