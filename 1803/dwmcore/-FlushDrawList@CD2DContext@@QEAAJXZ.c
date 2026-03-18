/*
 * XREFs of ?FlushDrawList@CD2DContext@@QEAAJXZ @ 0x180095C2C
 * Callers:
 *     ?Flush@CD2DContext@@MEAAJPEBVID2DContextOwner@@@Z @ 0x180095B90 (-Flush@CD2DContext@@MEAAJPEBVID2DContextOwner@@@Z.c)
 *     ?FillEffect@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POINT_2F@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x180095DB0 (-FillEffect@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Effect@@PEBUD2D_RECT_F@@PEBUD2D_POI.c)
 *     ?Clear@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z @ 0x180095E70 (-Clear@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBU_D3DCOLORVALUE@@@Z.c)
 *     ?PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MATRIX_3X2_F@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_LAYER_OPTIONS1@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180096720 (-PushLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@AEBUD2D_RECT_F@@PEAUID2D1Geometry@@PEAUD2D_MA.c)
 *     ?PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z @ 0x1800967C0 (-PopLayer@CD2DContext@@MEAAXPEBVID2DContextOwner@@@Z.c)
 *     ?Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@@Z @ 0x18009C040 (-Render@CHWDrawListEntry@@UEAAJPEAVCDrawingContext@@AEBVCMILMatrix@@MW4Enum@MilCompositingMode@@.c)
 *     ?EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@@Z @ 0x18013E050 (-EnsureHwCallbackRenderer@CD2DContext@@IEAAJPEAVCHwLightCollectionBuffer@@PEAVClipPlaneInfoRef@@.c)
 *     ?DrawCoRenderContent@CDrawingContext@@QEAAJPEAVCCoRenderContent@@@Z @ 0x18015F1C0 (-DrawCoRenderContent@CDrawingContext@@QEAAJPEAVCCoRenderContent@@@Z.c)
 *     ?DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z @ 0x18015F8D0 (-DrawDwm3DRE@CDrawingContext@@QEAAJPEAUIDwm3DRESceneViewer@@AEBVCMILMatrix@@_N@Z.c)
 *     ?AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z @ 0x1801E1870 (-AppendWARPDrawListEntry@CD2DContext@@QEAAJPEAVCWARPDrawListEntry@@@Z.c)
 *     ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801E1FE0 (-DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_A.c)
 *     ?DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@M_N@Z @ 0x1801E2580 (-DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartn.c)
 *     ?DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801E26A0 (-DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkS.c)
 *     ?DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommandList@@MW4D2D1_ANTIALIAS_MODE@@W4D2D1_DRAW_COMPOSITOR_COMMAND_LIST_OPTIONS@@I_N@Z @ 0x1801E2750 (-DrawLegacyCommandList@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1PrivateCompositorCommand.c)
 *     ?DrawShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1StrokeStyle1@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801E2AA0 (-DrawShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@MPEAUID2D1.c)
 *     ?DrawTextW@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z @ 0x1801E2C70 (-DrawTextW@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@A.c)
 *     ?DrawYCbCrBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_SUBSAMPLING@@PEBUD2D_RECT_F@@MW4D2D1_INTERPOLATION_MODE@@W4D2D1_COMPOSITE_MODE@@@Z @ 0x1801E2D50 (-DrawYCbCrBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@1W4D2D1_YCBCR_CHROMA_.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801E3010 (-FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ?FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801E34D0 (-FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV-$T.c)
 *     ?FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801E35B0 (-FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANT.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z @ 0x180095BF0 (-DrawCustomCallbackRendererInternal@CD2DContext@@AEAAJPEAUID2D1PrivateCompositorRenderer@@@Z.c)
 *     ?EnsureBeginDraw@CD2DContext@@AEAAXXZ @ 0x180096E20 (-EnsureBeginDraw@CD2DContext@@AEAAXXZ.c)
 *     ??$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z @ 0x1800C3D28 (--$ReleaseInterface@VCWARPCallbackRenderer@@@@YAXAEAPEAVCWARPCallbackRenderer@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CD2DContext::FlushDrawList(CD2DContext *this)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  int v4; // eax
  __int64 v5; // rbx
  int v6; // ecx
  __int64 v7; // rax
  __int64 v8; // rcx
  volatile signed __int32 *v9; // rcx
  struct ID2D1PrivateCompositorRenderer **v11; // rsi
  __int64 v12; // rdx
  int v13; // eax
  _BYTE v14[16]; // [rsp+38h] [rbp-20h] BYREF

  v1 = *((_QWORD *)this + 56);
  v2 = 0LL;
  if ( v1 )
  {
    v4 = *((_DWORD *)this + 86);
    if ( v4 )
      v2 = *(_QWORD *)(*((_QWORD *)this + 40) + 8LL * (unsigned int)(v4 - 1));
    v5 = *(_QWORD *)(v2 + 24);
    *(_DWORD *)(v1 + 92) = *((_DWORD *)this + 8);
    v6 = *(_DWORD *)((*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v5 + 24LL))(v5, v14) + 8);
    *(_DWORD *)(v1 + 112) = v6;
    if ( v6 == 1 )
      *(float *)(v1 + 116) = (*(float (__fastcall **)(__int64))(*(_QWORD *)v5 + 168LL))(v5);
    v7 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 112LL))(v5);
    *(float *)(v1 + 96) = 2.0 / (float)*(int *)(v7 + 140);
    LODWORD(v7) = *(_DWORD *)(v7 + 144);
    *(_DWORD *)(v1 + 104) = -1082130432;
    *(_DWORD *)(v1 + 108) = 1065353216;
    *(float *)(v1 + 100) = -2.0 / (float)(int)v7;
    v2 = *((_QWORD *)this + 56);
    CD2DContext::EnsureBeginDraw(this);
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)this + 23) + 120LL))(*((_QWORD *)this + 23), v2);
    v8 = *((_QWORD *)this + 56);
    LODWORD(v2) = 0;
    if ( v8 )
    {
      v9 = (volatile signed __int32 *)(v8 + 8);
      if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 && v9 )
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 16LL))(v9, 1LL);
      *((_QWORD *)this + 56) = 0LL;
    }
  }
  else
  {
    v11 = (struct ID2D1PrivateCompositorRenderer **)((char *)this + 456);
    v12 = *((_QWORD *)this + 57);
    if ( v12 )
    {
      *(_DWORD *)(v12 + 44) = *((_DWORD *)this + 8);
      *(_OWORD *)(v12 + 48) = *(_OWORD *)((char *)this + 424);
      *(_DWORD *)(v12 + 64) = *((_DWORD *)this + 110);
      *(_BYTE *)(v12 + 68) = 1;
      v13 = CD2DContext::DrawCustomCallbackRendererInternal(this, *v11);
      LODWORD(v2) = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x331u);
      else
        ReleaseInterface<CWARPCallbackRenderer>(v11);
    }
  }
  return (unsigned int)v2;
}
