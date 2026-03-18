/*
 * XREFs of ?ValidateDeviceAndSwapChain@CHwDisplayRenderTarget@@IEBAJXZ @ 0x1800464C0
 * Callers:
 *     ?CheckShaderResourceViewSupport@CHwDisplayRenderTarget@@UEAAJPEA_N@Z @ 0x180046640 (-CheckShaderResourceViewSupport@CHwDisplayRenderTarget@@UEAAJPEA_N@Z.c)
 *     ?GetMultiplaneOverlayCaps@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z @ 0x18007C610 (-GetMultiplaneOverlayCaps@CHwFullScreenRenderTarget@@UEAAJPEAUDXGI_MULTIPLANE_OVERLAY_CAPS@@@Z.c)
 *     ?WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z @ 0x1800D85F0 (-WaitForVBlank@CHwDisplayRenderTarget@@UEAAJPEAX@Z.c)
 *     ?RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@@Z @ 0x18013D5EC (-RectToSurfaceRect@CHwDisplayRenderTarget@@IEBA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?DrawMesh2D@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAVCGeometry2D@@PEAVIBitmapSource@@@Z @ 0x1801E7390 (-DrawMesh2D@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextStat.c)
 *     ?DrawPath@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@@PEAULegacyMilBrushContext@@AEBVCShape@@PEAVCLegacyMilBrushRealizer@@5W4Enum@MilCompositingMode@@@Z @ 0x1801E7420 (-DrawPath@CHwDisplayRenderTarget@@UEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEAUCContextState@.c)
 *     ?CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@0@Z @ 0x1801F0FF0 (-CopyLeftToRightBuffer@CHwStereoFullScreenRenderTarget@@UEAAJPEBV-$TMilRect_@MUMilRectF@@UMilPoi.c)
 * Callees:
 *     ?IsValid@CHwDisplayRenderTarget@@UEBA_NXZ @ 0x180046690 (-IsValid@CHwDisplayRenderTarget@@UEBA_NXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::ValidateDeviceAndSwapChain(CHwDisplayRenderTarget *this)
{
  __int64 v1; // rax
  int v2; // ebx
  __int64 (*v3)(void); // rax
  char IsValid; // al

  v1 = *((_QWORD *)this + 28);
  if ( v1 )
  {
    v2 = *(_DWORD *)(v1 + 888);
    if ( v2 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, v2, 0x36Au);
    }
    else
    {
      v3 = *(__int64 (**)(void))(*(_QWORD *)this + 32LL);
      if ( (char *)v3 == (char *)CHwDisplayRenderTarget::IsValid )
        IsValid = CHwDisplayRenderTarget::IsValid(this);
      else
        IsValid = v3();
      if ( !IsValid )
      {
        v2 = -2003304442;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, -2003304442, 0x374u);
      }
    }
  }
  else
  {
    v2 = -2003304307;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_180240F48, 2u, -2003304307, 0x36Eu);
  }
  return (unsigned int)v2;
}
