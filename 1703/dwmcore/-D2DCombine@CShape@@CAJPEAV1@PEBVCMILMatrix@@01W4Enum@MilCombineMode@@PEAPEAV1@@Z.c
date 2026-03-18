/*
 * XREFs of ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180006A80
 * Callers:
 *     ?ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEAVCShape@@@Z @ 0x180038180 (-ComputeLayout@CSurfaceBrush@@AEBAJAEBUD2D_SIZE_F@@PEBUD2D_MATRIX_3X2_F@@PEAULayoutData@1@PEAPEA.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x1800BE94C (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z @ 0x180002A58 (--$ReleaseInterfaceNoNULL@VCD2DPencil@@@@YAXPEAVCD2DPencil@@@Z.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180006750 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z @ 0x180006D30 (-Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z.c)
 *     ?HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z @ 0x1800429E0 (-HandleGetD2DFactoryNoRef@CD3DDeviceManager@@QEAAJPEAPEAVCD2DFactory@@@Z.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x18004CFE8 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18004F8CC (--2@YAPEAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x18006F1C0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x18006F290 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18007D99C (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x1800941B0 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1800C456C (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1801B02B0 (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 */

__int64 __fastcall CShape::D2DCombine(
        CRegionShape *a1,
        __int64 a2,
        CRectanglesShape *a3,
        _DWORD *a4,
        int a5,
        struct CRegionShape **a6)
{
  CRegionShape *v7; // r15
  int D2DFactoryNoRef; // eax
  unsigned int v11; // ebx
  __int64 (__fastcall *v12)(CRegionShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  __int64 (__fastcall *v14)(CRectanglesShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int v15; // eax
  __int128 *v16; // rdx
  unsigned int v17; // r10d
  int v18; // eax
  unsigned __int64 v19; // rcx
  int v20; // eax
  struct CRegionShape *v21; // rax
  int v23; // r9d
  unsigned int v24; // xmm1_4
  int v25; // xmm0_4
  int v26; // xmm1_4
  _DWORD *v27; // rax
  unsigned int v28; // [rsp+20h] [rbp-E0h]
  struct ID2D1Geometry *v29; // [rsp+50h] [rbp-B0h] BYREF
  struct ID2D1Geometry *v30; // [rsp+58h] [rbp-A8h] BYREF
  struct ID2D1Geometry *v31; // [rsp+60h] [rbp-A0h] BYREF
  struct CRegionShape *v32; // [rsp+68h] [rbp-98h] BYREF
  struct ID2D1RegionGeometry *v33; // [rsp+70h] [rbp-90h] BYREF
  __int128 v34; // [rsp+78h] [rbp-88h] BYREF
  int v35; // [rsp+88h] [rbp-78h]
  int v36; // [rsp+8Ch] [rbp-74h]
  struct CD2DFactory *v37[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v38[3]; // [rsp+A0h] [rbp-60h] BYREF
  int v39; // [rsp+B8h] [rbp-48h]
  int v40; // [rsp+BCh] [rbp-44h]
  int v41; // [rsp+C0h] [rbp-40h]
  _BYTE v42[16]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v43; // [rsp+D8h] [rbp-28h]
  _QWORD v44[3]; // [rsp+E0h] [rbp-20h] BYREF
  int v45; // [rsp+F8h] [rbp-8h]
  int v46; // [rsp+FCh] [rbp-4h]
  int v47; // [rsp+100h] [rbp+0h]
  _BYTE v48[16]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v49; // [rsp+118h] [rbp+18h]

  v47 = 0;
  v49 = 0LL;
  v41 = 0;
  v43 = 0LL;
  v7 = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  v29 = 0LL;
  v33 = 0LL;
  v37[0] = 0LL;
  v44[1] = v48;
  v44[2] = v48;
  v38[1] = v42;
  v44[0] = &CRectanglesShape::`vftable';
  v38[0] = &CRectanglesShape::`vftable';
  v38[2] = v42;
  v45 = 1;
  v46 = 1;
  v39 = 1;
  v40 = 1;
  v32 = 0LL;
  D2DFactoryNoRef = CD3DDeviceManager::HandleGetD2DFactoryNoRef((CD3DDeviceManager *)1, v37);
  v11 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v28 = 477;
    goto LABEL_49;
  }
  if ( a1 )
  {
    v12 = *(__int64 (__fastcall **)(CRegionShape *__hidden, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a1 + 24LL);
    if ( v12 == CRegionShape::GetD2DGeometry )
      D2DGeometry = CRegionShape::GetD2DGeometry(a1, 0LL, &v30);
    else
      D2DGeometry = v12(a1, 0LL, &v30);
    v11 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      v28 = 481;
LABEL_29:
      v23 = v11;
      goto LABEL_50;
    }
  }
  else
  {
    D2DFactoryNoRef = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v44, 0LL, &v30);
    v11 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef < 0 )
    {
      v28 = 485;
      goto LABEL_49;
    }
  }
  if ( !a3 )
  {
    D2DFactoryNoRef = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v38, 0LL, &v31);
    v11 = D2DFactoryNoRef;
    if ( D2DFactoryNoRef >= 0 )
      goto LABEL_10;
    v28 = 494;
LABEL_49:
    v23 = D2DFactoryNoRef;
    goto LABEL_50;
  }
  v14 = *(__int64 (__fastcall **)(CRectanglesShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a3 + 24LL);
  if ( v14 == CRectanglesShape::GetD2DGeometry )
    v15 = CRectanglesShape::GetD2DGeometry(a3, 0LL, &v31);
  else
    v15 = v14(a3, 0LL, &v31);
  v11 = v15;
  if ( v15 < 0 )
  {
    v28 = 490;
    goto LABEL_29;
  }
LABEL_10:
  if ( a4 )
  {
    v16 = &v34;
    v24 = a4[1];
    LODWORD(v34) = *a4;
    *(_QWORD *)((char *)&v34 + 4) = __PAIR64__(a4[4], v24);
    v25 = a4[12];
    HIDWORD(v34) = a4[5];
    v26 = a4[13];
    v35 = v25;
    v36 = v26;
  }
  else
  {
    v16 = 0LL;
  }
  if ( a5 )
  {
    if ( a5 == 1 )
      v17 = 1;
    else
      v17 = 3;
  }
  else
  {
    v17 = 0;
  }
  v18 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct ID2D1Geometry *, _QWORD, struct ID2D1Geometry *, __int128 *, _DWORD, struct ID2D1Geometry **))(**((_QWORD **)v37[0] + 4) + 32LL))(
          *((_QWORD *)v37[0] + 4),
          v17,
          v30,
          0LL,
          v31,
          v16,
          LODWORD(FLOAT_0_25),
          &v29);
  v11 = v18;
  if ( v18 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x1F6u);
    goto LABEL_22;
  }
  D2DFactoryNoRef = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, struct CD2DFactory **))(*(_QWORD *)v29 + 32LL))(
                      v29,
                      0LL,
                      v37);
  v11 = D2DFactoryNoRef;
  if ( D2DFactoryNoRef < 0 )
  {
    v28 = 508;
    goto LABEL_49;
  }
  v34 = *(_OWORD *)v37;
  if ( (unsigned __int8)IsRectEmptyOrInvalid(&v34) )
  {
    v27 = CRectanglesShape::operator new(v19);
    if ( v27 )
    {
      *(_QWORD *)v27 = &CRectanglesShape::`vftable';
      v27[8] = 0;
      *((_QWORD *)v27 + 1) = v27 + 10;
      *((_QWORD *)v27 + 2) = v27 + 10;
      v27[6] = 1;
      v27[7] = 1;
      *((_QWORD *)v27 + 7) = 0LL;
    }
    *a6 = (struct CRegionShape *)v27;
    if ( v27 )
      goto LABEL_22;
    v23 = -2147024882;
    v28 = 514;
    v11 = -2147024882;
LABEL_50:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, v28);
    goto LABEL_22;
  }
  if ( (**(unsigned int (__fastcall ***)(struct ID2D1Geometry *, GUID *, struct ID2D1RegionGeometry **))v29)(
         v29,
         &GUID_e7fda62a_6a94_4f17_9f7c_26a950c74010,
         &v33) )
  {
    v11 = 0;
    v21 = (struct CRegionShape *)operator new(0x10uLL);
    if ( v21 )
      v21 = CComplexShape::CComplexShape(v21, v29);
    if ( v21 )
      goto LABEL_21;
    v23 = -2147024882;
    v28 = 535;
    v11 = -2147024882;
    goto LABEL_50;
  }
  v20 = CRegionShape::Create(v33, &v32);
  v11 = v20;
  if ( v20 >= 0 )
  {
    v21 = v32;
LABEL_21:
    *a6 = v21;
    goto LABEL_22;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x20Eu);
  v7 = v32;
LABEL_22:
  ReleaseInterface<ID2D1Geometry>(&v29);
  ReleaseInterface<ID2D1Geometry>(&v33);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v30);
  ReleaseInterfaceNoNULL<CD2DPencil>((__int64)v31);
  if ( v7 )
    CRegionShape::`vector deleting destructor'(v7, 1u);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v38);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v44);
  return v11;
}
