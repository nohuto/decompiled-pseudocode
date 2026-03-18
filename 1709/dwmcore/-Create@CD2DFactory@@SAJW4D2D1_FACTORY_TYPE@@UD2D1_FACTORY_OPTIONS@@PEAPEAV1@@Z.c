/*
 * XREFs of ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x180191838
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180026030 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180034DC0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?Init@CRegionShape@@IEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180034EDC (-Init@CRegionShape@@IEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180035430 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ @ 0x18003562C (-EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800457B4 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?Generate@CGradientSource@@QEAAJPEAVCDrawingContext@@V?$span@$$CBUD2D1_GRADIENT_STOP@@@gsl@@_NW4D2D1_EXTEND_MODE@@2@Z @ 0x180071CD8 (-Generate@CGradientSource@@QEAAJPEAVCDrawingContext@@V-$span@$$CBUD2D1_GRADIENT_STOP@@@gsl@@_NW4.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097BAC (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18013C558 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?CreateEmptyPathGeometry@CShape@@SAJPEAPEAUID2D1PathGeometry@@@Z @ 0x1801CB364 (-CreateEmptyPathGeometry@CShape@@SAJPEAPEAUID2D1PathGeometry@@@Z.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801CB710 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CTransformingGeometrySink@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x1801CB930 (-GetD2DGeometry@CTransformingGeometrySink@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 *     ?CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@@Z @ 0x1801CC130 (-CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@.c)
 *     ?IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometry@@_N@Z @ 0x1801CC4E4 (-IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometr.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Init@CD2DFactory@@AEAAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@@Z @ 0x180191930 (-Init@CD2DFactory@@AEAAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@@Z.c)
 */

__int64 __fastcall CD2DFactory::Create(
        enum D2D1_FACTORY_TYPE a1,
        struct D2D1_FACTORY_OPTIONS a2,
        struct CD2DFactory **a3)
{
  CD2DFactory *v5; // rax
  CD2DFactory *v6; // rdi
  unsigned int v7; // ebx
  enum D2D1_FACTORY_TYPE v8; // edx
  signed int v9; // eax

  v5 = (CD2DFactory *)operator new(0x28uLL);
  v6 = v5;
  if ( v5 )
  {
    *((_QWORD *)v5 + 1) = &CMILRefCountBase::`vftable';
    *((_DWORD *)v5 + 4) = 0;
    *((_QWORD *)v5 + 3) = 0LL;
    *((_QWORD *)v5 + 4) = 0LL;
    *(_QWORD *)v5 = &CD2DFactory::`vftable'{for `IUnknown'};
    *((_QWORD *)v5 + 1) = &CD2DFactory::`vftable'{for `CMILRefCountBase'};
  }
  else
  {
    v6 = 0LL;
  }
  if ( v6 )
  {
    (*(void (__fastcall **)(CD2DFactory *))(*(_QWORD *)v6 + 8LL))(v6);
    v9 = CD2DFactory::Init(v6, v8, a2);
    v7 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v9, 0x20u);
    }
    else
    {
      *a3 = v6;
      v6 = 0LL;
    }
  }
  else
  {
    v7 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x19u);
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v6);
  return v7;
}
