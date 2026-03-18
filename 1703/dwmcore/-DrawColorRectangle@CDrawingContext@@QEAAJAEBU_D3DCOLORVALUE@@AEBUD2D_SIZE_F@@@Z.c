/*
 * XREFs of ?DrawColorRectangle@CDrawingContext@@QEAAJAEBU_D3DCOLORVALUE@@AEBUD2D_SIZE_F@@@Z @ 0x18014B514
 * Callers:
 *     ?DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z @ 0x18000EC78 (-DrawPrimitiveGroup@CDrawingContext@@QEAAJPEAVCPrimitiveGroup@@_NPEAI@Z.c)
 *     ?DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@@PEBVCMILMatrix@@@Z @ 0x18000EFFC (-DrawCommandListBitmapRepresentation@CDrawingContext@@QEAAJPEAVCCommandListBitmapRepresentation@.c)
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008F660 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 *     ?DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z @ 0x18014BA88 (-DrawOverlayArea@CDrawingContext@@QEAAJPEAVISwapChainContent@@PEAVCShape@@_N2@Z.c)
 * Callees:
 *     ?Reset@CDrawListPrimitiveBuilder@@QEAAXXZ @ 0x18003F86C (-Reset@CDrawListPrimitiveBuilder@@QEAAXXZ.c)
 *     ??0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18005864C (--0CBrushDrawListGenerator@@QEAA@PEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800586FC (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z @ 0x1800587E4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsBounding@CDrawingContext@@QEBA_NXZ @ 0x1800A1D6C (-IsBounding@CDrawingContext@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?Render@CDrawListPrimitiveBuilder@@QEAAJPEAVCDrawingContext@@@Z @ 0x18015C3A0 (-Render@CDrawListPrimitiveBuilder@@QEAAJPEAVCDrawingContext@@@Z.c)
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
  CDrawListPrimitiveBuilder *v10; // rsi
  int DrawList; // eax
  int v12; // eax
  _BYTE v14[56]; // [rsp+30h] [rbp-88h] BYREF
  __int128 v15; // [rsp+68h] [rbp-50h]
  char v16; // [rsp+9Ch] [rbp-1Ch]

  v4 = 0;
  if ( !(unsigned __int8)CDrawingContext::IsBounding(this) )
  {
    CBrushDrawListGenerator::CBrushDrawListGenerator((CBrushDrawListGenerator *)v14, v5, v6, 0LL);
    v8 = *v7;
    v10 = (CDrawListPrimitiveBuilder *)(v9 + 3984);
    v16 = 0;
    v15 = v8;
    DrawList = CBrushDrawListGenerator::GenerateDrawList(
                 (CBrushDrawListGenerator *)v14,
                 (CMILRefCountBase **)(v9 + 3984));
    v4 = DrawList;
    if ( DrawList < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawList, 0xC00u);
    }
    else
    {
      v12 = CDrawListPrimitiveBuilder::Render(v10, this);
      v4 = v12;
      if ( v12 < 0 )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xC01u);
    }
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v14);
  }
  CDrawListPrimitiveBuilder::Reset((CDrawingContext *)((char *)this + 3984));
  return v4;
}
