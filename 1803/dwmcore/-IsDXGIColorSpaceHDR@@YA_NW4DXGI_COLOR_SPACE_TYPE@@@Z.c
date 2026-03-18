/*
 * XREFs of ?IsDXGIColorSpaceHDR@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800B694C
 * Callers:
 *     ?IsHDRContent@CCompositionSurfaceBitmap@@UEBA_NXZ @ 0x1800072D0 (-IsHDRContent@CCompositionSurfaceBitmap@@UEBA_NXZ.c)
 *     ?IsHDRContent@CRenderTargetBitmap@@QEBA_NXZ @ 0x18001D190 (-IsHDRContent@CRenderTargetBitmap@@QEBA_NXZ.c)
 *     ?GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBAJPEAW4ParallelModePolicy@@@Z @ 0x18005A26C (-GetActualParallelModePolicy@CPartitionVerticalBlankScheduler@@AEBAJPEAW4ParallelModePolicy@@@Z.c)
 *     ?Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilStretch@@@Z @ 0x1800B622C (-Update@RenderTargetBitmapInfo@CCachedVisualImage@@QEAAJAEBUMilRectF@@VDisplayId@@_NW4Enum@MilSt.c)
 *     ?IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z @ 0x1800B6694 (-IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z.c)
 *     ?ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800DCF88 (-ConvertSDRBoostToSDRWhiteLevel@@YAIMW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
 *     ?Create@CPlaneCaptureRenderTargetEngine@@QEAAJPEBUMILCMD_PLANECAPTURERENDERTARGET_CREATE@@@Z @ 0x18015B638 (-Create@CPlaneCaptureRenderTargetEngine@@QEAAJPEBUMILCMD_PLANECAPTURERENDERTARGET_CREATE@@@Z.c)
 *     ?IsHDRTarget@CDrawingContext@@QEBA_NXZ @ 0x180171614 (-IsHDRTarget@CDrawingContext@@QEBA_NXZ.c)
 *     ?IsHDRContent@CDeviceTextureImageSource@@UEBA_NXZ @ 0x1802168C0 (-IsHDRContent@CDeviceTextureImageSource@@UEBA_NXZ.c)
 * Callees:
 *     ?IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z @ 0x1800B696C (-IsDXGIColorSpaceRec2020@@YA_NW4DXGI_COLOR_SPACE_TYPE@@@Z.c)
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
