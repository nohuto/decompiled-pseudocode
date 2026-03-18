/*
 * XREFs of ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18013C970
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800231D0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18003EAB0 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?Draw@CPlaneCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1801392C0 (-Draw@CPlaneCaptureRenderTarget@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@.c)
 *     ?RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBUtagRECT@@@Z @ 0x18013F0D4 (-RenderOverlayColor@CDrawingContext@@AEAAJAEBU_D3DCOLORVALUE@@AEBUtagRECT@@@Z.c)
 * Callees:
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x180036C7C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x180048B00 (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180048BB4 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180048CC0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 *     ?Reset@CDrawListEntryBuilder@@QEAAXXZ @ 0x180061838 (-Reset@CDrawListEntryBuilder@@QEAAXXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     ?Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x180152418 (-Render@CDrawListEntryBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
 */

__int64 __fastcall CDrawingContext::DrawColorRectangle(
        CDrawingContext *this,
        const struct _D3DCOLORVALUE *a2,
        const struct D2D_SIZE_F *a3)
{
  unsigned int v4; // ebx
  struct CDrawingContext *v5; // rcx
  const struct D2D_SIZE_F *v6; // r8
  __int128 *v7; // r10
  __int128 v8; // xmm0
  __int64 v9; // rdx
  CDrawListEntryBuilder *v10; // rsi
  signed int DrawList; // eax
  signed int v12; // eax
  _BYTE v14[56]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v15; // [rsp+68h] [rbp-50h]
  char v16; // [rsp+9Dh] [rbp-1Bh]

  v4 = 0;
  if ( !CDrawingContext::IsBounding(this) )
  {
    CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v14, v5, v6, 0LL);
    v8 = *v7;
    v10 = (CDrawListEntryBuilder *)(v9 + 4048);
    v16 = 0;
    v15 = v8;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v14,
                 (CMILRefCountBase **)(v9 + 4048));
    v4 = DrawList;
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, DrawList, 0xAAEu);
    }
    else
    {
      v12 = CDrawListEntryBuilder::Render(v10, this);
      v4 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v12, 0xAAFu);
    }
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v14);
  }
  CDrawListEntryBuilder::Reset((CDrawingContext *)((char *)this + 4048));
  return v4;
}
