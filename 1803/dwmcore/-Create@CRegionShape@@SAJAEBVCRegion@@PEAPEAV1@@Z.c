/*
 * XREFs of ?Create@CRegionShape@@SAJAEBVCRegion@@PEAPEAV1@@Z @ 0x180002F4C
 * Callers:
 *     ?CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ @ 0x18000335C (-CreateHitTestRegions@CPrimitiveGroup@@AEBAJXZ.c)
 *     ?TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18008B3F0 (-TryOptimizedCombinePaths@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 *     ?DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCDrawListCache@@@Z @ 0x180185D60 (-DrawAsDrawList@CCompositionSkyBoxBrush@@UEAAJPEAVCDrawingContext@@AEBUD2D_SIZE_F@@PEA_NPEAV-$TM.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180063E50 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?Init@CRegionShape@@IEAAJPEBV?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@I@Z @ 0x180063E84 (-Init@CRegionShape@@IEAAJPEBV-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniquene.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??$AppendAllRectangles@V?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@CRegion@@QEBAJPEAV?$DynArrayIA@V?$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@RectUniqueness@@@@$0BA@$0A@@@@Z @ 0x18007D87C (--$AppendAllRectangles@V-$DynArrayIA@V-$TMilRect_@HUtagRECT@@UMilPointAndSizeL@@U_CMilRectL_@Rec.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CRegionShape::Create(const struct CRegion *a1, struct CRegionShape **a2)
{
  struct CRegionShape *v2; // rbx
  int v4; // edi
  struct CRegionShape *v5; // rax
  unsigned int v7; // eax
  _QWORD v8[2]; // [rsp+30h] [rbp-138h] BYREF
  int v9; // [rsp+40h] [rbp-128h]
  int v10; // [rsp+44h] [rbp-124h]
  unsigned int v11; // [rsp+48h] [rbp-120h]
  _BYTE v12[256]; // [rsp+50h] [rbp-118h] BYREF

  v2 = 0LL;
  *a2 = 0LL;
  v11 = 0;
  v8[0] = v12;
  v8[1] = v12;
  v9 = 16;
  v10 = 16;
  v4 = CRegion::AppendAllRectangles<DynArrayIA<TMilRect_<int,tagRECT,MilPointAndSizeL,RectUniqueness::_CMilRectL_>,16,0>>(
         a1,
         v8);
  if ( v4 < 0 )
  {
    v7 = 27;
  }
  else
  {
    v5 = (struct CRegionShape *)operator new(0x18uLL);
    v2 = v5;
    if ( v5 )
    {
      *((_QWORD *)v5 + 1) = 0LL;
      *((_QWORD *)v5 + 2) = 0LL;
      *(_QWORD *)v5 = &CRegionShape::`vftable';
    }
    else
    {
      v2 = 0LL;
    }
    if ( !v2 )
    {
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2147024882, 0x1Eu);
      goto LABEL_7;
    }
    v4 = CRegionShape::Init(v2, v8[0], v11);
    if ( v4 >= 0 )
    {
      *a2 = v2;
      goto LABEL_7;
    }
    v7 = 34;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, v7);
  if ( v2 )
    CRegionShape::`vector deleting destructor'(v2, 1u);
LABEL_7:
  DynArrayImpl<0>::~DynArrayImpl<0>(v8);
  return (unsigned int)v4;
}
