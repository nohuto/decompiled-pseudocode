/*
 * XREFs of ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x1800AC7C4
 * Callers:
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x18000FD68 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?FillEffect@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x18000FFE0 (-FillEffect@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POI.c)
 *     ?PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800100C0 (-PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MA.c)
 *     ?OnColorChanged@CPrimitiveColor@@AEAAXXZ @ 0x1800244A8 (-OnColorChanged@CPrimitiveColor@@AEAAXXZ.c)
 *     ?FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProperties@@@Z @ 0x18002459C (-FindOrCreatePrimitiveProperties@CPrimitiveColor@@AEAAJPEAVID2DContext@@PEAPEAVCD2DPrimitiveProp.c)
 *     ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x1800AC894 (-FlushDrawList@CD2DContext@@QEAAJXZ.c)
 *     ?FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_EXTEND_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800AD490 (-FillShapeWithBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBVCShape@@PEAUID2D1Bitmap1@@AEBUD.c)
 *     ?FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800AD6F0 (-FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANT.c)
 *     ?FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800AD7C0 (-FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV-$T.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800AD860 (-FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1800ADA10 (-DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_A.c)
 *     ?SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800ADB70 (-SetClip@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     ?PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z @ 0x1800AE1F0 (-PopTarget@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAPEAVIRenderTarget@@@Z.c)
 *     ?Clear@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x1800AE550 (-Clear@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x180197CD8 (-AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 *     ?DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@MW4D2D1_COMPOSITE_MODE@@W4D2D1_BORDER_MODE@@W4D2D1_INTERPOLATION_MODE@@@Z @ 0x180198270 (-DrawBitmapWithCompositeMode@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_R.c)
 *     ?DrawGenericInk@CD2DContext@@UEAAJPEAVID2DContextOwner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@PEAUIDCompositionDirectInkPartner@@@Z @ 0x180198830 (-DrawGenericInk@CD2DContext@@UEAAJPEAVID2DContextOwner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_.c)
 *     ?DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801988C0 (-DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkS.c)
 *     ?DrawPencilStroke@CD2DContext@@UEAAJPEAVID2DContextOwner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@PEAUID2D1PencilStroke@@PEBUD2D1_PENCIL_STYLE@@PEAVCCompositionSurfaceBitmap@@AEBUtagRECT@@56M@Z @ 0x180198970 (-DrawPencilStroke@CD2DContext@@UEAAJPEAVID2DContextOwner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIV.c)
 *     ?DrawPerspectiveBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180198B30 (-DrawPerspectiveBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@.c)
 *     ?DrawTextW@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z @ 0x180198C60 (-DrawTextW@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@A.c)
 *     ?DrawYCbCrBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEBUD2D_RECT_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180198D40 (-DrawYCbCrBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_.c)
 * Callees:
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x18007B214 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 *     ?D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z @ 0x1800AC6B8 (-D2DSetTargetInternal@CD2DContext@@IEAAXPEAVCD2DTarget@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     Template_qq @ 0x18013BC88 (Template_qq.c)
 */

void __fastcall CD2DContext::EnsureBeginDraw(CD2DContext *this)
{
  __int64 v2; // rbp
  __int64 v3; // rcx
  __int64 i; // rsi
  __int64 v5; // rdi

  if ( !*((_BYTE *)this + 480) )
  {
    v2 = 0LL;
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(this, &EVTDESC_ETWGUID_DRAWEVENT_Start, 16LL, 0LL);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)this + 22) + 384LL))(*((_QWORD *)this + 22));
    if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20) != 0 )
      Template_qq(v3, &EVTDESC_ETWGUID_DRAWEVENT_Stop, 16LL, 0LL);
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 90); v2 = v5 )
    {
      v5 = *(_QWORD *)(*((_QWORD *)this + 42) + 8 * i);
      if ( v2 )
        *(_BYTE *)(v2 + 48) = 0;
      if ( !*(_BYTE *)(v5 + 48) )
      {
        *(_QWORD *)(v5 + 16) = this;
        CD2DContext::D2DSetTargetInternal(this, (struct CD2DTarget *)v5);
        *(_BYTE *)(v5 + 48) = 1;
        CD2DTarget::ApplyCurrentClip((CD2DTarget *)v5);
      }
      i = (unsigned int)(i + 1);
    }
    *((_BYTE *)this + 480) = 1;
  }
  *((_BYTE *)this + 481) = 1;
}
