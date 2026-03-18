/*
 * XREFs of ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180088FE0
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000335C (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V?$span@$$CBUD2D1_GRADIENT_STOP@@$0?0@gsl@@_N3W4D2D1_EXTEND_MODE@@@Z @ 0x18001269C (-Generate@CGradientSource@@IEAAJPEAVCD3DDeviceLevel1@@AEBVRetrievalParams@1@V-$span@$$CBUD2D1_GR.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180063DA0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?Init@CRegionShape@@IEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180063E84 (-Init@CRegionShape@@IEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ?InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z @ 0x1800968C8 (-InitializeD2D@CD2DContext@@IEAAJPEAUIDXGIDeviceDWM@@@Z.c)
 *     ?DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z @ 0x18015EF00 (-DrawBspPolygonList@CDrawingContext@@QEAAJPEAVCVisual@@0@Z.c)
 *     ?GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x18018B7F0 (-GetShapeDataCore@CEllipseGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETPATHDATA@@PEBXI@Z @ 0x180197A20 (-ProcessSetPathData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SE.c)
 *     ?GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z @ 0x180198BF0 (-GetShapeDataCore@CLineGeometry@@MEBAJPEBUD2D_SIZE_F@@PEAVCShapePtr@@@Z.c)
 *     ?ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PATHGEOMETRY_SETPATH@@@Z @ 0x18019DE48 (-ProcessSetPath@CPathGeometry@@QEAAJPEAVCResourceTable@@PEBUMILCMD_PATHGEOMETRY_SETPATH@@@Z.c)
 *     ?EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ @ 0x1801A4A4C (-EnsureStrokeStyleForBounds@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ @ 0x1801A4B54 (-EnsureStrokeStyleForRender@CSpriteVectorShape@@AEAAJXZ.c)
 *     ?EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ @ 0x180209860 (-EnsureD2DGeometry@CRectanglesShape@@IEBAJXZ.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180209AE0 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?CreateEmptyPathGeometry@CShape@@SAJPEAPEAUID2D1PathGeometry@@@Z @ 0x18020A0CC (-CreateEmptyPathGeometry@CShape@@SAJPEAPEAUID2D1PathGeometry@@@Z.c)
 *     ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18020A1C0 (-D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18020AB80 (-GetD2DGeometry@CComplexShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?GetD2DGeometry@CTransformingGeometrySink@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z @ 0x18020ACD8 (-GetD2DGeometry@CTransformingGeometrySink@@AEAAJPEBUID2D1Geometry@@PEAPEAU2@@Z.c)
 *     ?CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@@Z @ 0x18020CDB0 (-CreateFullRectD2DGeometry@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@PEAPEAUID2D1PathGeometry@@.c)
 *     ?IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometry@@_N@Z @ 0x18020D0A4 (-IntersectGeometryBuilder@CRoundedRectangleShape@@CAJPEBUMilPoint2F@@QEBHPEAPEAUID2D1PathGeometr.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCCriticalSection@@@@QEAA@XZ @ 0x180089DE4 (--1-$CGuard@VCCriticalSection@@@@QEAA@XZ.c)
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x1800C1A04 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x1800C97D0 (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 */

__int64 __fastcall CD3DDeviceManager::HandleGetD2DFactoryNoRef(CD3DDeviceManager *this, struct CD2DFactory **a2)
{
  enum D2D1_FACTORY_TYPE v3; // ecx
  struct CD2DFactory *v4; // rax
  int v5; // ebx
  int v7; // eax
  unsigned int v8; // eax
  struct _RTL_CRITICAL_SECTION *v9; // [rsp+40h] [rbp+8h] BYREF

  v9 = &stru_1802D6738;
  EnterCriticalSection(&stru_1802D6738);
  v4 = qword_1802D6768;
  v5 = 0;
  if ( qword_1802D6768 )
    goto LABEL_2;
  v5 = CD2DFactory::Create(v3, 0, &qword_1802D6768);
  if ( v5 < 0 )
  {
    v8 = 270;
    goto LABEL_11;
  }
  v7 = CMesh2DEffect::Register(qword_1802D6768);
  v5 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x141u);
  if ( v5 < 0 )
  {
    v8 = 272;
LABEL_11:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v8);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x403u);
    goto LABEL_3;
  }
  v4 = qword_1802D6768;
LABEL_2:
  *a2 = v4;
LABEL_3:
  CGuard<CCriticalSection>::~CGuard<CCriticalSection>(&v9);
  return (unsigned int)v5;
}
