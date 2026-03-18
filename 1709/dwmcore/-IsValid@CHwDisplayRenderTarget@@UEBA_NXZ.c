/*
 * XREFs of ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x18002BBF0
 * Callers:
 *     ?GetPixelFormatInfo@CHwDisplayRenderTarget@@UEBA?AUPixelFormatInfo@@XZ @ 0x18002B520 (-GetPixelFormatInfo@CHwDisplayRenderTarget@@UEBA-AUPixelFormatInfo@@XZ.c)
 *     ?ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z @ 0x18002B960 (-ShouldPresent@CHwDisplayRenderTarget@@MEBAJ_NPEA_NPEAI@Z.c)
 *     ?RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18002BA64 (-RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?GetLogicalBackBuffer@CHwDisplayRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z @ 0x18002BC80 (-GetLogicalBackBuffer@CHwDisplayRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z.c)
 *     ?GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z @ 0x18002BD00 (-GetVBlankEvent@CHwDisplayRenderTarget@@UEAAJPEAPEAX@Z.c)
 *     ?SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI_N@Z @ 0x18002BDC0 (-SetSyncRefreshCountWaitTarget@CHwDisplayRenderTarget@@UEAAJI_N@Z.c)
 *     ?AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z @ 0x18002BF40 (-AdvanceFrame@CHwDisplayRenderTarget@@UEAAX_K_N@Z.c)
 *     ?CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ @ 0x18002C000 (-CheckDeviceState@CHwDisplayRenderTarget@@UEBAJXZ.c)
 *     ?NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18002C140 (-NotifyRenderedRect@CHwDisplayRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?IsHardwareProtected@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x18002C2B0 (-IsHardwareProtected@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z @ 0x18002EC30 (-GetPresentStatistics@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_FRAME_STATISTICS_DWM@@@Z.c)
 *     ?GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z @ 0x18002EF60 (-GetLastPresentCount@CHwFullScreenRenderTarget@@UEAAJPEAI@Z.c)
 *     ?IsValid@CHwDisplayRenderTarget@@WMA@EBA_NXZ @ 0x1800C6C80 (-IsValid@CHwDisplayRenderTarget@@WMA@EBA_NXZ.c)
 *     ?GetLogicalBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z @ 0x1801B8070 (-GetLogicalBackBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEAPEAVCD3DSurface@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

char __fastcall CHwDisplayRenderTarget::IsValid(CHwDisplayRenderTarget *this)
{
  __int64 v1; // rcx
  char v2; // bl

  v1 = *((_QWORD *)this + 29);
  v2 = 0;
  if ( v1 )
    return (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v1 + 32LL))(v1) != 0;
  return v2;
}
