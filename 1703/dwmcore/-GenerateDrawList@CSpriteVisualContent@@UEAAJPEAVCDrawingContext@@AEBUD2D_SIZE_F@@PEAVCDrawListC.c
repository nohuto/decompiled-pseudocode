/*
 * XREFs of ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18008CAF0
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18008F660 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x1800186FC (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180038860 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180039590 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ??0CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x18003F8F0 (--0CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 *     ??1CDrawListPrimitiveBuilder@@QEAA@XZ @ 0x18003FA50 (--1CDrawListPrimitiveBuilder@@QEAA@XZ.c)
 *     ?Reset@CBrushDrawListGenerator@@QEAAXXZ @ 0x1800585B8 (-Reset@CBrushDrawListGenerator@@QEAAXXZ.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x1800586FC (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z @ 0x1800587E4 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListPrimitiveBuilder@@@Z.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180059DA0 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18008B8C0 (-GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x1800AB4C8 (-Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisualContent::GenerateDrawList(
        CBrushRenderingGraph **this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v6; // ebx
  CBrushRenderingGraph *v7; // rax
  __int64 (__fastcall *v8)(CColorBrush *, struct CBrushDrawListGenerator *); // rax
  int BrushParameters; // eax
  int DrawList; // eax
  int v11; // eax
  __int64 v12; // rdi
  CSurfaceDrawListBrush **v13; // rsi
  __int64 v14; // rcx
  int v16; // eax
  _QWORD v17[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v18; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v19; // [rsp+50h] [rbp-B0h]
  int v20; // [rsp+58h] [rbp-A8h]
  __int64 v21; // [rsp+60h] [rbp-A0h]
  __int128 v22; // [rsp+68h] [rbp-98h]
  __int64 v23; // [rsp+78h] [rbp-88h]
  __int64 v24; // [rsp+80h] [rbp-80h]
  __int64 v25; // [rsp+88h] [rbp-78h]
  __int64 v26; // [rsp+90h] [rbp-70h]
  int v27; // [rsp+98h] [rbp-68h] BYREF
  char v28; // [rsp+9Ch] [rbp-64h]
  CMILRefCountBase *v29[8]; // [rsp+A0h] [rbp-60h] BYREF
  unsigned int v30; // [rsp+E0h] [rbp-20h]
  int v31; // [rsp+108h] [rbp+8h]

  v6 = 0;
  if ( !this[8] )
  {
    v7 = *this;
    v17[1] = *a3;
    v8 = (__int64 (__fastcall *)(CColorBrush *, struct CBrushDrawListGenerator *))*((_QWORD *)v7 + 30);
    v17[0] = a2;
    v19 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v20 = 0;
    v21 = 0LL;
    v23 = 0LL;
    v24 = 0LL;
    v25 = 0LL;
    v26 = 0LL;
    v27 = 0;
    v28 = 0;
    v22 = _xmm;
    v18 = _xmm;
    if ( v8 == CMaskBrush::GetBrushParameters )
    {
      BrushParameters = CMaskBrush::GetBrushParameters((CMaskBrush *)this, (struct CBrushDrawListGenerator *)v17);
    }
    else if ( v8 == CColorBrush::GetBrushParameters )
    {
      BrushParameters = CColorBrush::GetBrushParameters((CColorBrush *)this, (struct CBrushDrawListGenerator *)v17);
    }
    else if ( v8 == CSurfaceBrush::GetBrushParameters )
    {
      BrushParameters = CSurfaceBrush::GetBrushParameters((CSurfaceBrush *)this, (struct CBrushDrawListGenerator *)v17);
    }
    else
    {
      BrushParameters = v8((CColorBrush *)this, (struct CBrushDrawListGenerator *)v17);
    }
    v6 = BrushParameters;
    if ( BrushParameters < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, BrushParameters, 0x90u);
    }
    else
    {
      CDrawListPrimitiveBuilder::CDrawListPrimitiveBuilder((CDrawListPrimitiveBuilder *)v29);
      DrawList = CBrushDrawListGenerator::GenerateDrawList((CBrushDrawListGenerator *)v17, v29);
      v6 = DrawList;
      if ( DrawList < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, DrawList, 0x93u);
      }
      else
      {
        v11 = CDrawListCache::Update(
                a4,
                *(_QWORD *)(*((_QWORD *)a2 + 4) + 400LL),
                (struct CDrawListEntry **)v29[5],
                v30,
                (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)a2 + 66) != 0),
                v31 != 0);
        v6 = v11;
        if ( v11 >= 0 )
        {
          CDrawListPrimitiveBuilder::~CDrawListPrimitiveBuilder((CDrawListPrimitiveBuilder *)v29);
          CBrushDrawListGenerator::Reset((CBrushDrawListGenerator *)v17);
          v12 = 4LL;
          v13 = (CSurfaceDrawListBrush **)&v27;
          do
          {
            std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(--v13);
            --v12;
          }
          while ( v12 );
          v14 = v21;
          if ( v21 )
          {
            v21 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 8LL))(v14);
          }
          return v6;
        }
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x94u);
      }
      CDrawListPrimitiveBuilder::~CDrawListPrimitiveBuilder((CDrawListPrimitiveBuilder *)v29);
    }
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)v17);
    return v6;
  }
  if ( *((_BYTE *)a2 + 6775) )
  {
    v16 = CBrushRenderingGraph::RenderSubgraphs(this[8], a2, a3, a4);
    v6 = v16;
    if ( v16 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x9Au);
  }
  return v6;
}
