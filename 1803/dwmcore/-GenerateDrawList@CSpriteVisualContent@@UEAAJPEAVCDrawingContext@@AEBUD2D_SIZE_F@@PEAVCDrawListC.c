/*
 * XREFs of ?GenerateDrawList@CSpriteVisualContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAVCDrawListCache@@@Z @ 0x18009CE90
 * Callers:
 *     ?DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18009B2F0 (-DrawAsDrawList@CContent@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TMilRect_@MUMilRe.c)
 * Callees:
 *     ??_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z @ 0x1800059D0 (--_ECPrimitiveGroupDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??R?$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z @ 0x18008A9D4 (--R-$default_delete@VCDrawListBrush@@@std@@QEBAXPEAVCDrawListBrush@@@Z.c)
 *     ??_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z @ 0x18008B9E0 (--_ECGeometryOnlyDrawListBrush@@UEAAPEAXI@Z.c)
 *     ??1CBrushDrawListGenerator@@QEAA@XZ @ 0x18008CC14 (--1CBrushDrawListGenerator@@QEAA@XZ.c)
 *     ?GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@PEAVCRenderingEffectFactory@@@Z @ 0x18008CC4C (-GenerateDrawList@CBrushDrawListGenerator@@QEAAJPEAVCDrawListEntryBuilder@@PEBVCDrawListBrush@@P.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18008DA30 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBrush@@PEAVCDrawListCache@@@Z @ 0x18008EB6C (-RenderSubgraphs@CBrushRenderingGraph@@QEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEBVCDrawListBr.c)
 *     ??1?$unique_ptr@VCDrawListBrush@@U?$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ @ 0x18008F7E0 (--1-$unique_ptr@VCDrawListBrush@@U-$default_delete@VCDrawListBrush@@@std@@@std@@QEAA@XZ.c)
 *     ?GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180098B70 (-GetBrushParameters@CMaskBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x180099560 (-GetBrushParameters@CSurfaceBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z @ 0x18009AC50 (-GetBrushParameters@CColorBrush@@UEBAJPEAVCBrushDrawListGenerator@@@Z.c)
 *     ?Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z @ 0x18009BE84 (-Update@CDrawListCache@@QEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@@Z.c)
 *     ?CreateLayoutGeometryDrawListBrush@CSpriteVisualContent@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEAPEAVCDrawListBrush@@@Z @ 0x18009CDB0 (-CreateLayoutGeometryDrawListBrush@CSpriteVisualContent@@MEBAJPEAVCDrawingContext@@AEBUD2D_SIZE_.c)
 *     ??0CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD808 (--0CDrawListEntryBuilder@@QEAA@XZ.c)
 *     ??1CDrawListEntryBuilder@@QEAA@XZ @ 0x1800AD960 (--1CDrawListEntryBuilder@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _Init_thread_footer @ 0x1800DB248 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x1800DB2A8 (_Init_thread_header.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSpriteVisualContent::GenerateDrawList(
        CBrushRenderingGraph **this,
        struct CDrawingContext *a2,
        struct D2D_SIZE_F *a3,
        struct CDrawListCache *a4)
{
  CBrushRenderingGraph *v8; // rax
  __int64 (__fastcall *v9)(CSpriteVisualContent *, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListBrush **); // rax
  int v10; // eax
  int v11; // ebx
  __int64 v12; // rcx
  CSurfaceDrawListBrush *v13; // rdx
  CBrushRenderingGraph *v14; // rcx
  CBrushRenderingGraph *v15; // rax
  FLOAT height; // xmm1_4
  __int64 (__fastcall *v17)(CBrushRenderingGraph **, struct CDrawingContext **); // rax
  int BrushParameters; // eax
  int DrawList; // eax
  int v20; // eax
  unsigned int v21; // edi
  CPrimitiveGroupDrawListBrush *v22; // rcx
  CSurfaceDrawListBrush *(__fastcall *v23)(CSurfaceDrawListBrush *, char); // rax
  CSurfaceDrawListBrush **v24; // rsi
  __int64 v25; // rdi
  CGeometryOnlyDrawListBrush *(__fastcall *v26)(CGeometryOnlyDrawListBrush *, char); // rax
  int v28; // eax
  CGeometryOnlyDrawListBrush *v29; // [rsp+30h] [rbp-D0h] BYREF
  CGeometryOnlyDrawListBrush **v30; // [rsp+38h] [rbp-C8h]
  struct CDrawListBrush *v31; // [rsp+40h] [rbp-C0h] BYREF
  char v32; // [rsp+48h] [rbp-B8h]
  struct CDrawingContext *v33; // [rsp+50h] [rbp-B0h] BYREF
  FLOAT width; // [rsp+58h] [rbp-A8h]
  FLOAT v35; // [rsp+5Ch] [rbp-A4h]
  int i; // [rsp+60h] [rbp-A0h]
  __int128 v37; // [rsp+64h] [rbp-9Ch]
  CSurfaceDrawListBrush *v38[4]; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v39; // [rsp+98h] [rbp-68h] BYREF
  __int16 v40; // [rsp+9Ch] [rbp-64h]
  char v41; // [rsp+9Eh] [rbp-62h]
  CMILRefCountBase *v42[310]; // [rsp+A0h] [rbp-60h] BYREF

  if ( dword_1802D6BAC > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_1802D6BAC);
    if ( dword_1802D6BAC == -1 )
    {
      dword_1802D486C = -2147022876;
      Init_thread_footer(&dword_1802D6BAC);
    }
  }
  v32 = 1;
  v29 = 0LL;
  v30 = &v29;
  v8 = *this;
  v31 = 0LL;
  v9 = (__int64 (__fastcall *)(CSpriteVisualContent *, struct CDrawingContext *, const struct D2D_SIZE_F *, struct CDrawListBrush **))*((_QWORD *)v8 + 39);
  if ( v9 == CSpriteVisualContent::CreateLayoutGeometryDrawListBrush )
    v10 = CSpriteVisualContent::CreateLayoutGeometryDrawListBrush((CSpriteVisualContent *)this, a2, a3, &v31);
  else
    v10 = v9((CSpriteVisualContent *)this, a2, a3, &v31);
  v11 = v10;
  if ( v32 )
  {
    v12 = (__int64)v30;
    v13 = *v30;
    *v30 = v31;
    if ( v13 )
      std::default_delete<CDrawListBrush>::operator()(v12, v13);
  }
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802D4868, 2u, v11, 0xD1u);
    goto LABEL_21;
  }
  v14 = this[8];
  if ( !v14 )
  {
    v15 = *this;
    height = a3->height;
    width = a3->width;
    v17 = (__int64 (__fastcall *)(CBrushRenderingGraph **, struct CDrawingContext **))*((_QWORD *)v15 + 37);
    v35 = height;
    v33 = a2;
    i = 0;
    v37 = _xmm;
    memset(v38, 0, sizeof(v38));
    v39 = 0;
    v40 = 256;
    v41 = 0;
    if ( (char *)v17 == (char *)CSurfaceBrush::GetBrushParameters )
    {
      BrushParameters = CSurfaceBrush::GetBrushParameters(
                          (CPrimitiveGroupDrawListGenerator ***)this,
                          (struct CBrushDrawListGenerator *)&v33);
    }
    else if ( (char *)v17 == (char *)CMaskBrush::GetBrushParameters )
    {
      BrushParameters = CMaskBrush::GetBrushParameters((CMaskBrush *)this, (struct CBrushDrawListGenerator *)&v33);
    }
    else if ( (char *)v17 == (char *)CColorBrush::GetBrushParameters )
    {
      BrushParameters = CColorBrush::GetBrushParameters((CColorBrush *)this, (struct CBrushDrawListGenerator *)&v33);
    }
    else
    {
      BrushParameters = v17(this, &v33);
    }
    v11 = BrushParameters;
    if ( BrushParameters < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802D4868, 2u, BrushParameters, 0xD6u);
    }
    else
    {
      CDrawListEntryBuilder::CDrawListEntryBuilder((CDrawListEntryBuilder *)v42);
      DrawList = CBrushDrawListGenerator::GenerateDrawList((CBrushDrawListGenerator *)&v33, v42, v29, 0LL);
      v11 = DrawList;
      if ( DrawList < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802D4868, 2u, DrawList, 0xD9u);
      }
      else
      {
        v20 = CDrawListCache::Update(a4, a2, (struct CDrawListEntryBuilder *)v42);
        v11 = v20;
        if ( v20 >= 0 )
        {
          CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v42);
          v21 = 0;
          v37 = _xmm;
          LOBYTE(v40) = 0;
          for ( i = 0; v21 < v39; ++v21 )
          {
            v22 = v38[v21];
            v38[v21] = 0LL;
            if ( v22 )
            {
              v23 = **(CSurfaceDrawListBrush *(__fastcall ***)(CSurfaceDrawListBrush *, char))v22;
              if ( v23 == CPrimitiveGroupDrawListBrush::`vector deleting destructor' )
              {
                CPrimitiveGroupDrawListBrush::`vector deleting destructor'(v22, 1);
              }
              else if ( v23 == CSurfaceDrawListBrush::`vector deleting destructor' )
              {
                CSurfaceDrawListBrush::`vector deleting destructor'(v22, 1);
              }
              else
              {
                v23(v22, 1);
              }
            }
          }
          v39 = 0;
          v24 = (CSurfaceDrawListBrush **)&v39;
          v25 = 4LL;
          do
          {
            std::unique_ptr<CDrawListBrush>::~unique_ptr<CDrawListBrush>(--v24);
            --v25;
          }
          while ( v25 );
          goto LABEL_21;
        }
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802D4868, 2u, v20, 0xDAu);
      }
      CDrawListEntryBuilder::~CDrawListEntryBuilder((CDrawListEntryBuilder *)v42);
    }
    CBrushDrawListGenerator::~CBrushDrawListGenerator((CBrushDrawListGenerator *)&v33);
    goto LABEL_21;
  }
  if ( *((_BYTE *)a2 + 6831) )
  {
    v28 = CBrushRenderingGraph::RenderSubgraphs(v14, a2, a3, v29, a4);
    v11 = v28;
    if ( v28 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, &dword_1802D4868, 2u, v28, 0xE4u);
  }
LABEL_21:
  if ( v29 )
  {
    v26 = **(CGeometryOnlyDrawListBrush *(__fastcall ***)(CGeometryOnlyDrawListBrush *, char))v29;
    if ( v26 == CGeometryOnlyDrawListBrush::`vector deleting destructor' )
      CGeometryOnlyDrawListBrush::`vector deleting destructor'(v29, 1);
    else
      v26(v29, 1);
  }
  return (unsigned int)v11;
}
