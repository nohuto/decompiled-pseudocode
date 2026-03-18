/*
 * XREFs of ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x18020A1C0
 * Callers:
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@CAJV?$span@PEBVCDrawListBrush@@$0?0@gsl@@PEAPEAVCShape@@@Z @ 0x18008BCE0 (-ComputeBrushClamp@CBrushDrawListGenerator@@CAJV-$span@PEBVCDrawListBrush@@$0-0@gsl@@PEAPEAVCSha.c)
 *     ?ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z @ 0x18009A300 (-ComputeLayout@CSurfaceBrush@@QEBAJAEBUD2D_SIZE_F@@_NPEAULayoutData@CContent@@PEAPEAVCShape@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800C2BE4 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z @ 0x18001C6E0 (-Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x18001D1D8 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     ??$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z @ 0x1800213F4 (--$ReleaseInterfaceNoNULL@UIWICBitmap@@@@YAXPEAUIWICBitmap@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18002148C (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180025210 (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180063E50 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180064350 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x180088FE0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800C4890 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180209AE0 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x18020A96C (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CShape::D2DCombine(__int64 a1, __int64 a2, __int64 a3, _DWORD *a4, int a5, struct CRegionShape **a6)
{
  CRegionShape *v9; // rsi
  int D2DFactoryNoRef; // eax
  unsigned int v11; // ebx
  __int128 *v12; // rdx
  unsigned int v13; // xmm1_4
  int v14; // xmm0_4
  int v15; // xmm1_4
  unsigned int v16; // r10d
  int v17; // eax
  struct CRectanglesShape *v18; // rcx
  _QWORD *v19; // rax
  int v20; // r9d
  int v21; // eax
  struct CRegionShape *v22; // rax
  CComplexShape *v23; // rax
  unsigned int v25; // [rsp+20h] [rbp-E0h]
  struct ID2D1Geometry *v26; // [rsp+50h] [rbp-B0h] BYREF
  struct ID2D1Geometry *v27; // [rsp+58h] [rbp-A8h] BYREF
  struct ID2D1Geometry *v28; // [rsp+60h] [rbp-A0h] BYREF
  struct CRegionShape *v29; // [rsp+68h] [rbp-98h] BYREF
  struct ID2D1RegionGeometry *v30; // [rsp+70h] [rbp-90h] BYREF
  __int128 v31; // [rsp+78h] [rbp-88h] BYREF
  int v32; // [rsp+88h] [rbp-78h]
  int v33; // [rsp+8Ch] [rbp-74h]
  struct CD2DFactory *v34[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v35[4]; // [rsp+A0h] [rbp-60h] BYREF
  int v36; // [rsp+C0h] [rbp-40h]
  __int64 v37; // [rsp+C4h] [rbp-3Ch]
  _BYTE v38[16]; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v39; // [rsp+E0h] [rbp-20h]
  _QWORD v40[4]; // [rsp+F0h] [rbp-10h] BYREF
  int v41; // [rsp+110h] [rbp+10h]
  __int64 v42; // [rsp+114h] [rbp+14h]
  _BYTE v43[16]; // [rsp+120h] [rbp+20h] BYREF
  __int64 v44; // [rsp+130h] [rbp+30h]

  v40[0] = &CRectanglesShape::`vftable';
  v35[0] = &CRectanglesShape::`vftable';
  v40[2] = v43;
  v40[1] = 0LL;
  v40[3] = v43;
  v44 = 0LL;
  v41 = 1;
  v35[2] = v38;
  v42 = 1LL;
  v35[3] = v38;
  v35[1] = 0LL;
  v9 = 0LL;
  v36 = 1;
  v37 = 1LL;
  v39 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v26 = 0LL;
  v30 = 0LL;
  v29 = 0LL;
  v34[0] = 0LL;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)1, v34);
  v11 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v25 = 489;
    goto LABEL_41;
  }
  if ( a1 )
  {
    D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1Geometry **))(*(_QWORD *)a1 + 24LL))(
                        a1,
                        0LL,
                        &v27);
    v11 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v25 = 493;
LABEL_41:
      v20 = D2DFactoryNoRef;
      goto LABEL_42;
    }
  }
  else
  {
    D2DFactoryNoRef = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v40, 0LL, &v27);
    v11 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v25 = 497;
      goto LABEL_41;
    }
  }
  if ( a3 )
  {
    D2DFactoryNoRef = (*(__int64 (__fastcall **)(__int64, _QWORD, struct ID2D1Geometry **))(*(_QWORD *)a3 + 24LL))(
                        a3,
                        0LL,
                        &v28);
    v11 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v25 = 502;
      goto LABEL_41;
    }
  }
  else
  {
    D2DFactoryNoRef = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v35, 0LL, &v28);
    v11 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v25 = 506;
      goto LABEL_41;
    }
  }
  if ( a4 )
  {
    v12 = &v31;
    v13 = a4[1];
    LODWORD(v31) = *a4;
    *(_QWORD *)((char *)&v31 + 4) = __PAIR64__(a4[4], v13);
    v14 = a4[12];
    HIDWORD(v31) = a4[5];
    v15 = a4[13];
    v32 = v14;
    v33 = v15;
  }
  else
  {
    v12 = 0LL;
  }
  if ( a5 )
  {
    if ( a5 == 1 )
      v16 = 1;
    else
      v16 = 3;
  }
  else
  {
    v16 = 0;
  }
  v17 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct ID2D1Geometry *, _QWORD, struct ID2D1Geometry *, __int128 *, _DWORD, struct ID2D1Geometry **))(**((_QWORD **)v34[0] + 4) + 32LL))(
          *((_QWORD *)v34[0] + 4),
          v16,
          v27,
          0LL,
          v28,
          v12,
          LODWORD(FLOAT_0_25),
          &v26);
  v11 = v17;
  if ( v17 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v17, 0x202u);
    goto LABEL_43;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, struct CD2DFactory **))(*(_QWORD *)v26 + 32LL))(
                      v26,
                      0LL,
                      v34);
  v11 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v25 = 520;
    goto LABEL_41;
  }
  v31 = *(_OWORD *)v34;
  if ( IsRectEmptyOrInvalid((float *)&v31) )
  {
    v19 = CRectanglesShape::operator new(v18);
    if ( v19 )
    {
      v19[1] = 0LL;
      *v19 = &CRectanglesShape::`vftable';
      v19[2] = v19 + 6;
      v19[3] = v19 + 6;
      *((_DWORD *)v19 + 8) = 1;
      *(_QWORD *)((char *)v19 + 36) = 1LL;
      v19[8] = 0LL;
    }
    else
    {
      v19 = 0LL;
    }
    *a6 = (struct CRegionShape *)v19;
    if ( v19 )
      goto LABEL_43;
    v20 = -2147024882;
    v25 = 526;
    v11 = -2147024882;
    goto LABEL_42;
  }
  if ( !(**(unsigned int (__fastcall ***)(struct ID2D1Geometry *, GUID *, struct ID2D1RegionGeometry **))v26)(
          v26,
          &GUID_e7fda62a_6a94_4f17_9f7c_26a950c74010,
          &v30) )
  {
    v21 = CRegionShape::Create(v30, &v29);
    v11 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v21, 0x21Au);
      v9 = v29;
      goto LABEL_43;
    }
    v22 = v29;
LABEL_29:
    *a6 = v22;
    goto LABEL_43;
  }
  v11 = 0;
  v23 = (CComplexShape *)operator new(0x18uLL);
  if ( v23 )
    v22 = CComplexShape::CComplexShape(v23, v26);
  else
    v22 = 0LL;
  if ( v22 )
    goto LABEL_29;
  v20 = -2147024882;
  v25 = 547;
  v11 = -2147024882;
LABEL_42:
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v20, v25);
LABEL_43:
  ReleaseInterface<ID2D1Geometry>((__int64 *)&v26);
  ReleaseInterface<ID2D1Geometry>((__int64 *)&v30);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v27);
  ReleaseInterfaceNoNULL<IWICBitmap>((__int64)v28);
  if ( v9 )
    CRegionShape::`vector deleting destructor'(v9, 1);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v35);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v40);
  return v11;
}
