/*
 * XREFs of ?InternalRelease@?$ComPtr@VCD3DTexture@@@WRL@Microsoft@@IEAAKXZ @ 0x180019928
 * Callers:
 *     ?GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA?AVMatrix3x3@@I@Z @ 0x180009A40 (-GetDestToTexSpaceTransform@CTreeEffectLayer@@QEAA-AVMatrix3x3@@I@Z.c)
 *     ?UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V?$span@$$CBE$0?0@gsl@@@Z @ 0x180013378 (-UpdateGradientStrip@CAtlasTexture@@QEAAXPEBVCAtlasEntry@@V-$span@$$CBE$0-0@gsl@@@Z.c)
 *     ?Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z @ 0x180013458 (-Initialize@CAtlasTexture@@AEAAJPEAVCD3DDeviceLevel1@@I@Z.c)
 *     ?GetDXGIResourceAndSubResourceIndex@CPlaneCaptureRenderTargetEngine@@QEAAJPEAPEAUIDXGIResource@@PEAI@Z @ 0x18015BDE4 (-GetDXGIResourceAndSubResourceIndex@CPlaneCaptureRenderTargetEngine@@QEAAJPEAPEAUIDXGIResource@@.c)
 *     ?CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAndSizeL@@2W4SurfaceShaderType@@@Z @ 0x180176660 (-CopyAndTransform@CGammaBlendLayer@@AEAAJPEAVCDrawingContext@@PEAVIRenderTarget@@AEBUMilPointAnd.c)
 *     ?RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z @ 0x1801771EC (-RenderLayer@CResampleLayer@@IEAAJPEAVCDrawingContext@@@Z.c)
 *     ?CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z @ 0x1801EBE80 (-CopyFrom@CAtlasTexture@@QEAAXPEBV1@PEAI@Z.c)
 *     ??1CDeviceTextureImageSource@@MEAA@XZ @ 0x180216558 (--1CDeviceTextureImageSource@@MEAA@XZ.c)
 * Callees:
 *     ?Release@CD3DLockableTexture@@UEAAKXZ @ 0x1800219C0 (-Release@CD3DLockableTexture@@UEAAKXZ.c)
 */

unsigned int __fastcall Microsoft::WRL::ComPtr<CD3DTexture>::InternalRelease(CD3DLockableTexture **a1)
{
  unsigned int result; // eax
  CD3DLockableTexture *v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 8LL);
    if ( (char *)v4 == (char *)CD3DLockableTexture::Release )
      return CD3DLockableTexture::Release(v3);
    else
      return v4();
  }
  return result;
}
