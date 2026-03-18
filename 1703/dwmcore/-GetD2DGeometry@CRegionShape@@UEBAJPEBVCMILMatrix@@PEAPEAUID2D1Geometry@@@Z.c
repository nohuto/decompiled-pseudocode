/*
 * XREFs of ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18006F1C0
 * Callers:
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180006A80 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000B598 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PEAPEAUID2D1Geometry@@PEA_N@Z @ 0x18000E1D8 (-D2DGeometryFromGeometry@CDrawingContext@@AEAAJPEBUD2D_SIZE_F@@AEAVCGeometry@@AEBVCMILMatrix@@PE.c)
 *     ?FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCContextState@@PEBVCShape@@PEBVCMILMatrix@@PEBV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@PEAVCMILBrush@@MAEBV6@W4Enum@MilCompositingMode@@@Z @ 0x180049D78 (-FillPathWithBrush@CHwSurfaceRenderTarget@@IEAAJPEAVID2DContext@@PEBVID2DContextOwner@@PEBUCCont.c)
 *     ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x18006F050 (-GetTightBounds@CRegionShape@@UEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@Rec.c)
 * Callees:
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800429E0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetRectCount@CRegionShape@@QEBAIXZ @ 0x18006F270 (-GetRectCount@CRegionShape@@QEBAIXZ.c)
 *     ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1800B3474 (--_H@YAXPEAX_K1P6APEAX0@Z@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@@@Z @ 0x180188230 (-AddTransformedRectToD2DRgnGeometrySink@@YAXAEBUMilRectF@@PEBVCMILMatrix@@PEAUID2D1GeometrySink@.c)
 *     ?CreateEmptyPathGeometry@CShape@@SAJPEAPEAUID2D1PathGeometry@@@Z @ 0x1801B01B0 (-CreateEmptyPathGeometry@CShape@@SAJPEAPEAUID2D1PathGeometry@@@Z.c)
 *     ?GetPixelAlignedRectangles@CRegionShape@@QEBAXPEAV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x1801B08C4 (-GetPixelAlignedRectangles@CRegionShape@@QEBAXPEAV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CM.c)
 */

__int64 __fastcall CRegionShape::GetD2DGeometry(
        CRegionShape *this,
        const struct CMILMatrix *a2,
        struct ID2D1Geometry **a3)
{
  struct ID2D1Geometry *v4; // rcx
  unsigned int v7; // ebx
  CInputSinkStruct::InputQueueInfo *v8; // rsi
  int v10; // eax
  unsigned __int64 RectCount; // rbx
  CInputSinkStruct::InputQueueInfo *v12; // rax
  unsigned int v13; // eax
  CD3DDeviceManager *v14; // rcx
  int D2DFactoryNoRef; // eax
  int v16; // eax
  int v17; // eax
  unsigned int i; // ebx
  __int64 j; // rdx
  int v20; // eax
  struct ID2D1PathGeometry *v21; // [rsp+30h] [rbp-58h] BYREF
  struct ID2D1GeometrySink *v22; // [rsp+38h] [rbp-50h] BYREF
  struct CD2DFactory *v23[2]; // [rsp+40h] [rbp-48h] BYREF

  v4 = (struct ID2D1Geometry *)*((_QWORD *)this + 1);
  v21 = 0LL;
  v22 = 0LL;
  v7 = 0;
  v8 = 0LL;
  if ( v4 )
  {
    if ( !a2 )
      goto LABEL_3;
    v23[0] = 0LL;
    RectCount = CRegionShape::GetRectCount(this);
    v12 = (CInputSinkStruct::InputQueueInfo *)operator new(saturated_mul(RectCount, 0x10uLL));
    v8 = v12;
    if ( !v12 )
    {
      v7 = -2147024882;
      v8 = 0LL;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x105u);
      goto LABEL_5;
    }
    `vector constructor iterator'(
      v12,
      0x10uLL,
      (unsigned int)RectCount,
      (void *(*)(void *))COverlayContext::OverlayPlaneInfo::OverlayPlaneInfo);
    v13 = CRegionShape::GetRectCount(this);
    CRegionShape::GetPixelAlignedRectangles(this, v8, v13);
    D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef(v14, v23);
    v7 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, D2DFactoryNoRef, 0x10Cu);
      goto LABEL_5;
    }
    v16 = (*(__int64 (__fastcall **)(_QWORD, struct ID2D1PathGeometry **))(**((_QWORD **)v23[0] + 3) + 80LL))(
            *((_QWORD *)v23[0] + 3),
            &v21);
    v7 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x10Eu);
      goto LABEL_5;
    }
    v17 = (*(__int64 (__fastcall **)(struct ID2D1PathGeometry *, struct ID2D1GeometrySink **))(*(_QWORD *)v21 + 136LL))(
            v21,
            &v22);
    v7 = v17;
    if ( v17 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x10Fu);
      goto LABEL_5;
    }
    for ( i = 0; i < CRegionShape::GetRectCount(this); ++i )
    {
      for ( j = 0LL; j < 4; ++j )
        *((float *)v23 + j) = (float)*(int *)((char *)v23
                                            + 4 * j
                                            + (CInputSinkStruct::InputQueueInfo *)((char *)v8 + 16 * i)
                                            - (CInputSinkStruct::InputQueueInfo *)v23);
      AddTransformedRectToD2DRgnGeometrySink((const struct MilRectF *)v23, a2, v22);
    }
    v20 = (*(__int64 (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v22 + 72LL))(v22);
    v7 = v20;
    if ( v20 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x11Fu);
      goto LABEL_5;
    }
  }
  else
  {
    v10 = CShape::CreateEmptyPathGeometry(&v21);
    v7 = v10;
    if ( v10 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, 0xF5u);
      goto LABEL_5;
    }
  }
  v4 = v21;
LABEL_3:
  *a3 = v4;
  if ( v4 )
    (*(void (__fastcall **)(struct ID2D1Geometry *))(*(_QWORD *)v4 + 8LL))(v4);
LABEL_5:
  if ( v21 )
    (*(void (__fastcall **)(struct ID2D1PathGeometry *))(*(_QWORD *)v21 + 16LL))(v21);
  if ( v22 )
    (*(void (__fastcall **)(struct ID2D1GeometrySink *))(*(_QWORD *)v22 + 16LL))(v22);
  if ( v8 )
    HeapFree(WPF::g_processHeap, 0, v8);
  return v7;
}
