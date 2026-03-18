/*
 * XREFs of ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x18008695C
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x180026030 (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18009711C (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x18015CD60 (-DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180034E90 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?Init@CRegionShape@@IEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180034EDC (-Init@CRegionShape@@IEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x1800684E0 (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@UtagRECT@@$0BA@$0A@@@@Z @ 0x180088D38 (--$AppendAllRectangles@V-$DynArrayIA@UtagRECT@@$0BA@$0A@@@@CRegion@@QEBAJPEAV-$DynArrayIA@UtagRE.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CRegionShape::Create(const struct CRegion *a1, struct CRegionShape **a2)
{
  struct CRegionShape *v2; // rbx
  signed int appended; // eax
  unsigned int v5; // edi
  struct CRegionShape *v6; // rax
  signed int v7; // eax
  void *v9[2]; // [rsp+30h] [rbp-138h] BYREF
  int v10; // [rsp+40h] [rbp-128h]
  int v11; // [rsp+44h] [rbp-124h]
  unsigned int v12; // [rsp+48h] [rbp-120h]
  _BYTE v13[256]; // [rsp+50h] [rbp-118h] BYREF

  v10 = 16;
  v2 = 0LL;
  v9[0] = v13;
  *a2 = 0LL;
  v12 = 0;
  v9[1] = v13;
  v11 = 16;
  appended = CRegion::AppendAllRectangles<DynArrayIA<tagRECT,16,0>>(a1, v9);
  v5 = appended;
  if ( appended < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, appended, 0x1Bu);
  }
  else
  {
    v6 = (struct CRegionShape *)operator new(0x10uLL);
    v2 = v6;
    if ( v6 )
    {
      *((_QWORD *)v6 + 1) = 0LL;
      *(_QWORD *)v6 = &CRegionShape::`vftable';
    }
    else
    {
      v2 = 0LL;
    }
    if ( !v2 )
    {
      v5 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, 0x8007000E, 0x1Eu);
      goto LABEL_7;
    }
    v7 = CRegionShape::Init((__int64)v2, (__int64)v9[0], v12);
    v5 = v7;
    if ( v7 >= 0 )
    {
      *a2 = v2;
      goto LABEL_7;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v7, 0x22u);
  }
  if ( v2 )
    CRegionShape::`vector deleting destructor'(v2, 1);
LABEL_7:
  DynArrayImpl<1>::~DynArrayImpl<1>(v9);
  return v5;
}
