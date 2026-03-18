/*
 * XREFs of ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180034DC0
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180026030 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800350E0 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18003D90C (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PE.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097BAC (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18015CD60 (-DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x180017080 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x18003524C (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x180191838 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 *     ?AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@@@Z @ 0x180191A10 (-AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@.c)
 *     ?CreateEmptyPathGeometry@CShape@@SAJPEAPEAUID2D1PathGeometry@@@Z @ 0x1801CB364 (-CreateEmptyPathGeometry@CShape@@SAJPEAPEAUID2D1PathGeometry@@@Z.c)
 *     ?GetPixelAlignedRectangles@CRegionShape@@QEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1801CBCB4 (-GetPixelAlignedRectangles@CRegionShape@@QEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CM.c)
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x1801DAEAC (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 */

__int64 __fastcall CRegionShape::GetD2DGeometry(
        CRegionShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  int v5; // ebx
  struct ID2D1Geometry *v7; // rcx
  int *v8; // rsi
  int v10; // eax
  struct CD2DFactory *v11; // r15
  unsigned __int64 RectCount; // rbx
  CInputSinkStruct::InputQueueInfo *v13; // rax
  unsigned int v14; // eax
  enum D2D1_FACTORY_TYPE v15; // ecx
  struct CD2DFactory *v16; // rax
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  unsigned int i; // ebx
  __int64 j; // rcx
  int v23; // eax
  unsigned int v24; // [rsp+20h] [rbp-78h]
  struct ID2D1PathGeometry *v25; // [rsp+30h] [rbp-68h] BYREF
  struct ID2D1GeometrySink *v26; // [rsp+38h] [rbp-60h] BYREF
  float v27[4]; // [rsp+40h] [rbp-58h] BYREF

  v5 = 0;
  v7 = (struct ID2D1Geometry *)*((_QWORD *)this + 1);
  v8 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( v7 )
  {
    if ( !a2 )
      goto LABEL_3;
    v11 = 0LL;
    RectCount = CRegionShape::GetRectCount(this);
    v13 = (CInputSinkStruct::InputQueueInfo *)operator new(saturated_mul(RectCount, 0x10uLL));
    v8 = (int *)v13;
    if ( !v13 )
    {
      v8 = 0LL;
      v24 = 300;
      v5 = -2147024882;
      goto LABEL_40;
    }
    `vector constructor iterator'(
      v13,
      16LL,
      (unsigned int)RectCount,
      COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
    v14 = CRegionShape::GetRectCount(this);
    CRegionShape::GetPixelAlignedRectangles(this, v8, v14);
    EnterCriticalSection(&CriticalSection);
    v16 = qword_18026EF28;
    v5 = 0;
    if ( !qword_18026EF28 )
    {
      v17 = CD2DFactory::Create(v15, 0, &qword_18026EF28);
      v5 = v17;
      if ( v17 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x10Fu);
        goto LABEL_32;
      }
      v18 = CMesh2DEffect::Register(qword_18026EF28);
      v5 = v18;
      if ( v18 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v18, 0x13Fu);
      if ( v5 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x111u);
LABEL_32:
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x3FFu);
        goto LABEL_23;
      }
      v16 = qword_18026EF28;
    }
    v11 = v16;
LABEL_23:
    LeaveCriticalSection(&CriticalSection);
    if ( v5 >= 0 )
    {
      v19 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v11 + 3) + 80LL))(
              *((_QWORD *)v11 + 3),
              &v25);
      v5 = v19;
      if ( v19 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v19, 0x135u);
        goto LABEL_5;
      }
      v20 = (*(__int64 (__fastcall **)(struct ID2D1PathGeometry *, struct ID2D1GeometrySink **))(*(_QWORD *)v25 + 136LL))(
              v25,
              &v26);
      v5 = v20;
      if ( v20 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, 0x136u);
        goto LABEL_5;
      }
      for ( i = 0; i < CRegionShape::GetRectCount(this); ++i )
      {
        for ( j = 0LL; j < 4; ++j )
          v27[j] = (float)v8[4 * i + j];
        AddTransformedRectToD2DRgnGeometrySink((const struct MilRectF *)v27, a2, v26);
      }
      v23 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v26 + 72LL))(v26);
      v5 = v23;
      if ( v23 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0x146u);
        goto LABEL_5;
      }
      goto LABEL_35;
    }
    v24 = 307;
LABEL_40:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v24);
    goto LABEL_5;
  }
  v10 = CShape::CreateEmptyPathGeometry(&v25);
  v5 = v10;
  if ( v10 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v10, 0x11Cu);
    goto LABEL_5;
  }
LABEL_35:
  v7 = v25;
LABEL_3:
  *a3 = v7;
  if ( v7 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v7 + 8LL))(v7);
LABEL_5:
  if ( v25 )
    (*(void (__fastcall **)(struct ID2D1PathGeometry *))(*(_QWORD *)v25 + 16LL))(v25);
  if ( v26 )
    (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v26 + 16LL))(v26);
  if ( v8 )
    HeapFree(WPF::g_processHeap, 0, v8);
  return (unsigned int)v5;
}
