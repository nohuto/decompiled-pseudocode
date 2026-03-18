/*
 * XREFs of ?D2DCombine@CShape@@CAJPEAV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097BAC
 * Callers:
 *     ?ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z @ 0x18004A790 (-ComputeBrushClamp@CBrushDrawListGenerator@@AEBAJPEAPEAVCShape@@@Z.c)
 *     ?Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z @ 0x180097094 (-Combine@CShape@@SAJPEBV1@PEBVCMILMatrix@@01W4Enum@MilCombineMode@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18000A3E8 (--2@YAPEAX_K@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ??$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z @ 0x18000B600 (--$ReleaseInterface@VIBitmapLock@@@@YAXAEAPEAVIBitmapLock@@@Z.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180034DC0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??_ECRegionShape@@UEAAPEAXI@Z @ 0x180034E90 (--_ECRegionShape@@UEAAPEAXI@Z.c)
 *     ?GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180035430 (-GetD2DGeometry@CRectanglesShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ??1CRectanglesShape@@UEAA@XZ @ 0x180035570 (--1CRectanglesShape@@UEAA@XZ.c)
 *     ??$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z @ 0x1800767D4 (--$ReleaseInterface@UID2D1Geometry@@@@YAXAEAPEAUID2D1Geometry@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?IsRectEmptyOrInvalid@@YA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180097B78 (-IsRectEmptyOrInvalid@@YA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniquen.c)
 *     ?Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z @ 0x180097E78 (-Create@CRegionShape@@SAJPEAUID2D1RegionGeometry@@PEAPEAV1@@Z.c)
 *     ??2CRectanglesShape@@SAPEAX_K@Z @ 0x1800B9E18 (--2CRectanglesShape@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ?Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z @ 0x180191838 (-Create@CD2DFactory@@SAJW4D2D1_FACTORY_TYPE@@UD2D1_FACTORY_OPTIONS@@PEAPEAV1@@Z.c)
 *     ??0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z @ 0x1801CB55C (--0CComplexShape@@QEAA@PEAUID2D1Geometry@@@Z.c)
 *     ?Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z @ 0x1801DAEAC (-Register@CMesh2DEffect@@SAJPEAVCD2DFactory@@@Z.c)
 */

__int64 __fastcall CShape::D2DCombine(
        CRegionShape *a1,
        __int64 a2,
        CRectanglesShape *a3,
        _DWORD *a4,
        int a5,
        CComplexShape **a6)
{
  signed int v6; // ebx
  CRegionShape *v10; // r12
  enum D2D1_FACTORY_TYPE v11; // ecx
  struct CD2DFactory *v12; // rax
  __int64 (__fastcall *v13)(CRegionShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  __int64 (__fastcall *v15)(CRectanglesShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int v16; // eax
  __int128 *v17; // rdx
  unsigned int v18; // r10d
  signed int v19; // eax
  int v20; // eax
  unsigned __int64 v21; // rcx
  signed int v22; // eax
  CComplexShape *v23; // rax
  signed int v25; // eax
  signed int v26; // eax
  unsigned int v27; // xmm1_4
  int v28; // xmm0_4
  int v29; // xmm1_4
  _DWORD *v30; // rax
  DWORD v31; // r9d
  unsigned int v32; // [rsp+20h] [rbp-E0h]
  struct ID2D1Geometry *v33; // [rsp+50h] [rbp-B0h] BYREF
  struct ID2D1Geometry *v34; // [rsp+58h] [rbp-A8h] BYREF
  struct ID2D1Geometry *v35; // [rsp+60h] [rbp-A0h] BYREF
  struct CRegionShape *v36; // [rsp+68h] [rbp-98h] BYREF
  struct ID2D1RegionGeometry *v37; // [rsp+70h] [rbp-90h] BYREF
  __int128 v38; // [rsp+78h] [rbp-88h] BYREF
  int v39; // [rsp+88h] [rbp-78h]
  int v40; // [rsp+8Ch] [rbp-74h]
  __int128 v41; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v42[3]; // [rsp+A0h] [rbp-60h] BYREF
  int v43; // [rsp+B8h] [rbp-48h]
  __int64 v44; // [rsp+BCh] [rbp-44h]
  _BYTE v45[16]; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v46; // [rsp+D8h] [rbp-28h]
  _QWORD v47[3]; // [rsp+E0h] [rbp-20h] BYREF
  int v48; // [rsp+F8h] [rbp-8h]
  __int64 v49; // [rsp+FCh] [rbp-4h]
  _BYTE v50[16]; // [rsp+108h] [rbp+8h] BYREF
  __int64 v51; // [rsp+118h] [rbp+18h]

  v6 = 0;
  v47[0] = &CRectanglesShape::`vftable';
  v51 = 0LL;
  v42[0] = &CRectanglesShape::`vftable';
  v48 = 1;
  v47[1] = v50;
  v49 = 1LL;
  v47[2] = v50;
  v43 = 1;
  v42[1] = v45;
  v10 = 0LL;
  v44 = 1LL;
  v42[2] = v45;
  v46 = 0LL;
  v34 = 0LL;
  v35 = 0LL;
  v33 = 0LL;
  v37 = 0LL;
  v36 = 0LL;
  *(_QWORD *)&v41 = 0LL;
  EnterCriticalSection(&CriticalSection);
  v12 = qword_18026EF28;
  if ( qword_18026EF28 )
    goto LABEL_2;
  v25 = CD2DFactory::Create(v11, 0, &qword_18026EF28);
  v6 = v25;
  if ( v25 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v25, 0x10Fu);
  }
  else
  {
    v26 = CMesh2DEffect::Register(qword_18026EF28);
    v6 = v26;
    if ( v26 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v26, 0x13Fu);
    if ( v6 >= 0 )
    {
      v12 = qword_18026EF28;
LABEL_2:
      *(_QWORD *)&v41 = v12;
      goto LABEL_3;
    }
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x111u);
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v6, 0x3FFu);
LABEL_3:
  LeaveCriticalSection(&CriticalSection);
  if ( v6 < 0 )
  {
    v32 = 477;
    goto LABEL_59;
  }
  if ( a1 )
  {
    v13 = *(__int64 (__fastcall **)(CRegionShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a1 + 24LL);
    if ( v13 == CRegionShape::GetD2DGeometry )
      D2DGeometry = CRegionShape::GetD2DGeometry(a1, 0LL, &v34);
    else
      D2DGeometry = v13(a1, 0LL, &v34);
    v6 = D2DGeometry;
    if ( D2DGeometry < 0 )
    {
      v32 = 481;
LABEL_59:
      v31 = v6;
      goto LABEL_60;
    }
  }
  else
  {
    v20 = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v47, 0LL, &v34);
    v6 = v20;
    if ( v20 < 0 )
    {
      v32 = 485;
      goto LABEL_56;
    }
  }
  if ( !a3 )
  {
    v20 = CRectanglesShape::GetD2DGeometry((CRectanglesShape *)v42, 0LL, &v35);
    v6 = v20;
    if ( v20 >= 0 )
      goto LABEL_12;
    v32 = 494;
LABEL_56:
    v31 = v20;
    goto LABEL_60;
  }
  v15 = *(__int64 (__fastcall **)(CRectanglesShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)a3 + 24LL);
  if ( v15 == CRectanglesShape::GetD2DGeometry )
    v16 = CRectanglesShape::GetD2DGeometry(a3, 0LL, &v35);
  else
    v16 = v15(a3, 0LL, &v35);
  v6 = v16;
  if ( v16 < 0 )
  {
    v32 = 490;
    goto LABEL_59;
  }
LABEL_12:
  if ( a4 )
  {
    v17 = &v38;
    v27 = a4[1];
    LODWORD(v38) = *a4;
    *(_QWORD *)((char *)&v38 + 4) = __PAIR64__(a4[4], v27);
    v28 = a4[12];
    HIDWORD(v38) = a4[5];
    v29 = a4[13];
    v39 = v28;
    v40 = v29;
  }
  else
  {
    v17 = 0LL;
  }
  if ( a5 )
  {
    if ( a5 == 1 )
      v18 = 1;
    else
      v18 = 3;
  }
  else
  {
    v18 = 0;
  }
  v19 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct ID2D1Geometry *, _QWORD, struct ID2D1Geometry *, __int128 *, _DWORD, struct ID2D1Geometry **))(**(_QWORD **)(v41 + 32) + 32LL))(
          *(_QWORD *)(v41 + 32),
          v18,
          v34,
          0LL,
          v35,
          v17,
          LODWORD(FLOAT_0_25),
          &v33);
  v6 = v19;
  if ( v19 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v19, 0x1F6u);
    goto LABEL_24;
  }
  v20 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, _QWORD, __int128 *))(*(_QWORD *)v33 + 32LL))(v33, 0LL, &v41);
  v6 = v20;
  if ( v20 < 0 )
  {
    v32 = 508;
    goto LABEL_56;
  }
  v38 = v41;
  if ( IsRectEmptyOrInvalid((float *)&v38) )
  {
    v30 = CRectanglesShape::operator new(v21);
    if ( v30 )
    {
      *(_QWORD *)v30 = &CRectanglesShape::`vftable';
      v30[8] = 0;
      *((_QWORD *)v30 + 1) = v30 + 10;
      *((_QWORD *)v30 + 2) = v30 + 10;
      v30[6] = 1;
      v30[7] = 1;
      *((_QWORD *)v30 + 7) = 0LL;
    }
    *a6 = (CComplexShape *)v30;
    if ( v30 )
      goto LABEL_24;
    v31 = -2147024882;
    v32 = 514;
    v6 = -2147024882;
LABEL_60:
    MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v31, v32);
    goto LABEL_24;
  }
  if ( (**(unsigned int (__fastcall ***)(struct ID2D1Geometry *, GUID *, struct ID2D1RegionGeometry **))v33)(
         v33,
         &GUID_e7fda62a_6a94_4f17_9f7c_26a950c74010,
         &v37) )
  {
    v6 = 0;
    v23 = (CComplexShape *)operator new(0x10uLL);
    if ( v23 )
      v23 = CComplexShape::CComplexShape(v23, v33);
    if ( v23 )
      goto LABEL_23;
    v31 = -2147024882;
    v32 = 535;
    v6 = -2147024882;
    goto LABEL_60;
  }
  v22 = CRegionShape::Create(v37, &v36);
  v6 = v22;
  if ( v22 >= 0 )
  {
    v23 = v36;
LABEL_23:
    *a6 = v23;
    goto LABEL_24;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20LL, 0LL, 0, v22, 0x20Eu);
  v10 = v36;
LABEL_24:
  ReleaseInterface<ID2D1Geometry>((__int64 *)&v33);
  ReleaseInterface<IBitmapLock>((__int64 *)&v37);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v34);
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v35);
  if ( v10 )
    CRegionShape::`vector deleting destructor'(v10, 1);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v42);
  CRectanglesShape::~CRectanglesShape((CRectanglesShape *)v47);
  return (unsigned int)v6;
}
