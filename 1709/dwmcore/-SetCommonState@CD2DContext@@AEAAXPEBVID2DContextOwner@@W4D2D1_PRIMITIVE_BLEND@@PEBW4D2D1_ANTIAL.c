/*
 * XREFs of ?SetCommonState@CD2DContext@@AEAAXPEBVID2DContextOwner@@W4D2D1_PRIMITIVE_BLEND@@PEBW4D2D1_ANTIALIAS_MODE@@PEAUD2D_MATRIX_3X2_F@@@Z @ 0x180043A58
 * Callers:
 *     ?FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMILSurfaceRect_@RectUniqueness@@@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180044E00 (-FillRectangles@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUD2D_RECT_F@@IPEAUID2D1Brush@@AEBV-$T.c)
 *     ?DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_ANTIALIAS_MODE@@W4D2D1_INTERPOLATION_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180044F60 (-DrawBitmap@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAUID2D1Bitmap1@@PEBUD2D_RECT_F@@2MW4D2D1_A.c)
 *     ?DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartner@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@M_N@Z @ 0x1801A9A80 (-DrawGenericInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUIDCompositionDirectInkWetStrokePartn.c)
 *     ?DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkStyle@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801A9BA0 (-DrawInk@CD2DContext@@UEAAJPEBVID2DContextOwner@@PEAUID2D1Ink@@AEBU_D3DCOLORVALUE@@PEAUID2D1InkS.c)
 *     ?DrawTextW@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@W4D2D1_DRAW_TEXT_OPTIONS@@W4DWRITE_MEASURING_MODE@@@Z @ 0x1801A9C50 (-DrawTextW@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEAGIPEAUIDWriteTextFormat@@AEBUD2D_RECT_F@@A.c)
 *     ?FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOLORVALUE@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801AA000 (-FillRectangleWithSolidColor@CD2DContext@@MEAAJPEBVID2DContextOwner@@AEBUD2D_RECT_F@@AEBU_D3DCOL.c)
 *     ?FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANTIALIAS_MODE@@W4D2D1_PRIMITIVE_BLEND@@@Z @ 0x1801AA4A0 (-FillShape@CD2DContext@@MEAAJPEBVID2DContextOwner@@PEBUID2D1Geometry@@PEAUID2D1Brush@@W4D2D1_ANT.c)
 * Callees:
 *     ?SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z @ 0x180043D84 (-SetPrimitiveBlend@CD2DContext@@IEAAXW4D2D1_PRIMITIVE_BLEND@@@Z.c)
 *     ?SetAntiAliasMode@CD2DContext@@IEAAXW4D2D1_ANTIALIAS_MODE@@@Z @ 0x180043DAC (-SetAntiAliasMode@CD2DContext@@IEAAXW4D2D1_ANTIALIAS_MODE@@@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CD2DContext::SetCommonState(
        CD2DContext *this,
        const struct ID2DContextOwner *a2,
        enum D2D1_PRIMITIVE_BLEND a3,
        enum D2D1_ANTIALIAS_MODE *a4,
        struct D2D_MATRIX_3X2_F *a5)
{
  __int64 v8; // xmm1_8
  __int128 v9; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+30h] [rbp-38h]

  (*(void (__fastcall **)(const struct ID2DContextOwner *, __int128 *))(*(_QWORD *)a2 + 16LL))(a2, &v9);
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this + 22) + 240LL))(*((_QWORD *)this + 22), &v9);
  CD2DContext::SetPrimitiveBlend(this, a3);
  if ( a4 )
    CD2DContext::SetAntiAliasMode(this, *a4);
  if ( a5 )
  {
    v8 = v10;
    *(_OWORD *)&a5->m11 = v9;
    *(_QWORD *)&a5->m[2][0] = v8;
  }
}
