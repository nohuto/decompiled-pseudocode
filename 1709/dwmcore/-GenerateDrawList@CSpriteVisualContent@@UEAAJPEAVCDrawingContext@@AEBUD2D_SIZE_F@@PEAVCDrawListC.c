/*
 * XREFs of ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x180022A30
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x1800231D0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ?Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z @ 0x180023AB0 (-Update@CDrawListCache@@QEAAJ_KPEAPEAVCDrawListEntry@@IW4D2D1_ANTIALIAS_MODE@@_N@Z.c)
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180024990 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180025250 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x180048A20 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x180048BB4 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z @ 0x180048CC0 (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@@Z.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800631BC (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x180063320 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18006E670 (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCa.c)
 *     ?GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180070B30 (-GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x180070D50 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x18009F110 (--_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisualContent::GenerateDrawList(
        CBrushRenderingGraph **this,
        struct CDrawingContext *a2,
        const struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  unsigned int v6; // ebx
  FLOAT height; // xmm1_4
  CBrushRenderingGraph *v8; // rax
  int (*v9)(CSurfaceBrush *__hidden, struct CBrushDrawListGenerator *); // rax
  int BrushParameters; // eax
  int DrawList; // eax
  int v12; // eax
  __int64 v13; // rcx
  unsigned int v14; // esi
  unsigned int v15; // eax
  CPrimitiveGroupDrawListBrush *v16; // rcx
  void *(__fastcall *v17)(CSurfaceDrawListBrush *__hidden, unsigned int); // rax
  unsigned int *v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rcx
  int v22; // eax
  struct CDrawingContext *v23; // [rsp+30h] [rbp-D0h] BYREF
  FLOAT width; // [rsp+38h] [rbp-C8h]
  FLOAT v25; // [rsp+3Ch] [rbp-C4h]
  __int128 v26; // [rsp+40h] [rbp-C0h]
  unsigned __int64 v27; // [rsp+50h] [rbp-B0h]
  int v28; // [rsp+58h] [rbp-A8h]
  __int64 v29; // [rsp+60h] [rbp-A0h]
  __int128 i; // [rsp+68h] [rbp-98h]
  CSurfaceDrawListBrush *v31[4]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v32; // [rsp+98h] [rbp-68h] BYREF
  __int16 v33; // [rsp+9Ch] [rbp-64h]
  char v34; // [rsp+9Eh] [rbp-62h]
  _BYTE v35[40]; // [rsp+A0h] [rbp-60h] BYREF
  struct CDrawListEntry **v36; // [rsp+C8h] [rbp-38h]
  unsigned int v37; // [rsp+E0h] [rbp-20h]
  int v38; // [rsp+108h] [rbp+8h]

  v6 = 0;
  if ( !this[8] )
  {
    height = a3->height;
    v8 = *this;
    width = a3->width;
    v26 = _xmm;
    v9 = (int (*)(CSurfaceBrush *__hidden, struct CBrushDrawListGenerator *))*((_QWORD *)v8 + 32);
    v25 = height;
    v23 = a2;
    v27 = _mm_unpacklo_ps((__m128)0LL, (__m128)0LL).m128_u64[0];
    v28 = 0;
    v29 = 0LL;
    memset(v31, 0, sizeof(v31));
    v32 = 0;
    v33 = 1;
    v34 = 1;
    i = _xmm;
    if ( v9 == CSurfaceBrush::GetBrushParameters )
    {
      BrushParameters = CSurfaceBrush::GetBrushParameters((CSurfaceBrush *)this, (struct CBrushDrawListGenerator *)&v23);
    }
    else if ( v9 == CMaskBrush::GetBrushParameters )
    {
      BrushParameters = CMaskBrush::GetBrushParameters((CMaskBrush *)this, (struct CBrushDrawListGenerator *)&v23);
    }
    else if ( v9 == CColorBrush::GetBrushParameters )
    {
      BrushParameters = CColorBrush::GetBrushParameters((CColorBrush *)this, (struct CBrushDrawListGenerator *)&v23);
    }
    else
    {
      BrushParameters = ((__int64 (__fastcall *)(CBrushRenderingGraph **, struct CDrawingContext **))v9)(this, &v23);
    }
    v6 = BrushParameters;
    if ( BrushParameters < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, BrushParameters, 0x98u);
    }
    else
    {
      CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v35);
      DrawList = CBrushDrawListGenerator::GenerateDrawList(
                   (CBrushDrawListGenerator *)&v23,
                   (struct CDrawListEntryBuilder *)v35);
      v6 = DrawList;
      if ( DrawList < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, DrawList, 0x9Bu);
      }
      else
      {
        v12 = CDrawListCache::Update(
                a4,
                *(_QWORD *)(*((_QWORD *)a2 + 4) + 360LL),
                v36,
                v37,
                (enum D2D1_ANTIALIAS_MODE)(*((_DWORD *)a2 + 64) != 0),
                v38 != 0);
        v6 = v12;
        if ( v12 >= 0 )
        {
          CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v35);
          v13 = v29;
          if ( v29 )
          {
            v29 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 8LL))(v13);
          }
          v14 = 0;
          v15 = v32;
          HIBYTE(v33) = 0;
          v28 = 0;
          for ( i = _xmm; v14 < v15; ++v14 )
          {
            if ( v31[v14] )
            {
              v16 = v31[v14];
              if ( v16 )
              {
                v17 = **(void *(__fastcall ***)(CSurfaceDrawListBrush *__hidden, unsigned int))v16;
                if ( v17 == CPrimitiveGroupDrawListBrush::`vector deleting destructor' )
                {
                  CPrimitiveGroupDrawListBrush::`vector deleting destructor'(v16, 1u);
                }
                else if ( v17 == CSurfaceDrawListBrush::`vector deleting destructor' )
                {
                  CSurfaceDrawListBrush::`vector deleting destructor'(v16, 1u);
                }
                else
                {
                  v17(v16, 1u);
                }
              }
              v31[v14] = 0LL;
              v15 = v32;
            }
          }
          v32 = 0;
          v18 = &v32;
          v19 = 4LL;
          do
          {
            v18 -= 2;
            std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(v18);
            --v19;
          }
          while ( v19 );
          v20 = v29;
          if ( v29 )
          {
            v29 = 0LL;
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 8LL))(v20);
          }
          return v6;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, v12, 0x9Cu);
      }
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v35);
    }
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v23);
    return v6;
  }
  if ( *((_BYTE *)a2 + 6831) )
  {
    v22 = CBrushRenderingGraph::RenderSubgraphs(this[8], a2, a3, a4);
    v6 = v22;
    if ( v22 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802024F8, 1u, v22, 0xA2u);
  }
  return v6;
}
