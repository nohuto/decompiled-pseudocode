/*
 * XREFs of ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800429E0
 * Callers:
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180006750 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ @ 0x18000697C (-EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180006A80 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000B598 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?Init@CRegionShape@@IEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x18006EE94 (-Init@CRegionShape@@IEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18006F1C0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800AE7B8 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18014B1C0 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?CreateEmptyPathGeometry@CShape@@SAJPEAPEAUID2D1PathGeometry@@@Z @ 0x1801B01B0 (-CreateEmptyPathGeometry@CShape@@SAJPEAPEAUID2D1PathGeometry@@@Z.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x1801B0490 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CTransformingGeometrySink@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x1801B05F0 (-GetD2DGeometry@CTransformingGeometrySink@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 *     ?CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@@Z @ 0x1801B0CFC (-CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@.c)
 *     ?IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometry@@_N@Z @ 0x1801B104C (-IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometr.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x1800CB444 (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x1800CB9B0 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::HandleGetD2DFactoryNoRef(CD3DDeviceManager *this, struct CD2DFactory **a2)
{
  enum D2D1_FACTORY_TYPE v3; // ecx
  struct CD2DFactory *v4; // rax
  int v5; // ebx
  int v7; // eax
  int v8; // eax

  EnterCriticalSection(&CriticalSection);
  v4 = qword_18023E858;
  v5 = 0;
  if ( qword_18023E858 )
    goto LABEL_2;
  v7 = CD2DFactory::Create(v3, 0, &qword_18023E858);
  v5 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x110u);
    goto LABEL_11;
  }
  v8 = CMesh2DEffect::Register(qword_18023E858);
  v5 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x1B8u);
  if ( v5 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x112u);
LABEL_11:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v5, 0x3F8u);
    goto LABEL_3;
  }
  v4 = qword_18023E858;
LABEL_2:
  *a2 = v4;
LABEL_3:
  LeaveCriticalSection(&CriticalSection);
  return (unsigned int)v5;
}
