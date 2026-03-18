/*
 * XREFs of ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x1801DAEAC
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
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CMesh2DEffect::Register(struct CD2DFactory *a1)
{
  __int64 v1; // rcx
  _QWORD v3[10]; // [rsp+40h] [rbp-68h] BYREF

  v1 = *((_QWORD *)a1 + 3);
  v3[0] = L"matWorldToProjection";
  v3[1] = ValueSetter<long (CMesh2DEffect::*)(D2D_MATRIX_4X4_F),{public: long CMesh2DEffect::SetWorldToProjection(D2D_MATRIX_4X4_F),0},ID2D1EffectImpl>;
  v3[2] = ValueGetter<D2D_MATRIX_4X4_F (CMesh2DEffect::*)(void)const,{public: D2D_MATRIX_4X4_F CMesh2DEffect::GetWorldToProjection(void)const,0},ID2D1EffectImpl>;
  v3[3] = L"matTextureTransform";
  v3[4] = ValueSetter<long (CMesh2DEffect::*)(D2D_MATRIX_3X2_F),{public: long CMesh2DEffect::SetTextureTransform(D2D_MATRIX_3X2_F),0},ID2D1EffectImpl>;
  v3[5] = ValueGetter<D2D_MATRIX_3X2_F (CMesh2DEffect::*)(void)const,{public: D2D_MATRIX_3X2_F CMesh2DEffect::GetTextureTransform(void)const,0},ID2D1EffectImpl>;
  v3[6] = L"vertices";
  v3[7] = BlobSetter<long (CMesh2DEffect::*)(unsigned char const *,unsigned int),{public: long CMesh2DEffect::SetVertices(unsigned char const *,unsigned int),0},ID2D1EffectImpl>;
  v3[8] = BlobGetter<long (CMesh2DEffect::*)(unsigned char *,unsigned int,unsigned int *)const,{public: long CMesh2DEffect::GetVertices(unsigned char *,unsigned int,unsigned int *)const,0},ID2D1EffectImpl>;
  return (*(__int64 (__fastcall **)(__int64, GUID *, const wchar_t *, _QWORD *, int, __int64 (__fastcall *)(struct IUnknown **)))(*(_QWORD *)v1 + 184LL))(
           v1,
           &CLSID_Mesh2DEffect,
           L"<?xml version='1.0'?><Effect> <!-- System Properties --> <Property name='DisplayName' type='string' value='DW"
            "M Mesh2D Vertex Shader Effect'/> <Property name='Author' type='string' value='Microsoft Corporation'/> <Prop"
            "erty name='Category' type='string'/> <Property name='Description' type='string' value='A vertex shader for b"
            "asic rendering of sets of triangles.'/> <!-- Each effect can have 0 or more inputs --> <Inputs> <Input name="
            "'Source'/> </Inputs> <!-- Custom Properties go here --> <Property name='matWorldToProjection' type='matrix4x"
            "4'> <Property name='DisplayName' type='string' value='World To Projection Transform'/> </Property> <Property"
            " name='matTextureTransform' type='matrix3x2'> <Property name='DisplayName' type='string' value='Texture Tran"
            "sform'/> </Property> <Property name='vertices' type='blob'> <Property name='DisplayName' type='string' value"
            "='Vertices'/> </Property> </Effect>",
           v3,
           3,
           CMesh2DEffect::Create);
}
