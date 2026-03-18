/*
 * XREFs of ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180089F34
 * Callers:
 *     ?IsHDRContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x180028D30 (-IsHDRContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsHDRContent@CRenderTargetBitmap@@QEBA_NXZ @ 0x18008B578 (-IsHDRContent@CRenderTargetBitmap@@QEBA_NXZ.c)
 *     ?GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBAJPEAW4ParallelModePolicy@@@Z @ 0x1800C4A30 (-GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBAJPEAW4ParallelModePolicy@@@Z.c)
 *     ?ProcessCreate@CPlaneCaptureRenderTargetEngine@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PLANECAPTURERENDERTARGET_CREATE@@@Z @ 0x180139CDC (-ProcessCreate@CPlaneCaptureRenderTargetEngine@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PLANECAPTURE.c)
 *     ?IsHDRContent@CDeviceTextureImageSource@@UEBA_NXZ @ 0x1801D4A00 (-IsHDRContent@CDeviceTextureImageSource@@UEBA_NXZ.c)
 * Callees:
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x180089F54 (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 */

char __fastcall IsDXGIColorSpaceHDR(enum DXGI_COLOR_SPACE_TYPE a1)
{
  bool v1; // al
  char v2; // cl

  if ( a1 == DXGI_COLOR_SPACE_RGB_FULL_G10_NONE_P709 )
    return 1;
  v1 = IsDXGIColorSpaceRec2020(a1);
  v2 = 0;
  if ( v1 )
    return 1;
  return v2;
}
