/*
 * XREFs of ?EnumerateBrushes@CPrimitiveGroupDrawListBrush@@UEAAJP6AJPEAVCDrawListBrush@@PEAX@Z1@Z @ 0x1801BA440
 * Callers:
 *     <none>
 * Callees:
 *     ?GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA?AVIterator@CPrimitiveBuffer@@I@Z @ 0x1800094D0 (-GetIteratorForState@CPrimitiveGroupDrawListGenerator@@QEBA-AVIterator@CPrimitiveBuffer@@I@Z.c)
 *     ?Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ @ 0x180009724 (-Step@Iterator@CPrimitiveBuffer@@QEAA_NXZ.c)
 *     ?SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W4D2D1_EDGE_FLAGS@@2@Z @ 0x18001A430 (-SetBrushPrimitiveLayout@CDrawListBrush@@QEAAXAEBVMatrix3x3@@AEBUSamplerMode@@0PEBUD2D_RECT_F@@W.c)
 *     ?IsEmpty@CoordMap@@QEBA_NXZ @ 0x180057730 (-IsEmpty@CoordMap@@QEBA_NXZ.c)
 *     ?AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01H@Z @ 0x180057750 (-AddNineGrid@CoordMap@@QEAAJHAEBUD2D_RECT_F@@AEBVInsets@@01H@Z.c)
 *     ?IsHollowRect@CoordMap@@QEBA_NAEBUD2D_RECT_F@@@Z @ 0x180058118 (-IsHollowRect@CoordMap@@QEBA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x180070F2C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     ?Create@CSurfaceDrawListBrush@@SAJPEAVIImageSource@@AEBUD2D_RECT_F@@PEAPEAV1@@Z @ 0x18007AE00 (-Create@CSurfaceDrawListBrush@@SAJPEAVIImageSource@@AEBUD2D_RECT_F@@PEAPEAV1@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18007AEF0 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@PEAU2@@Z @ 0x1800C0034 (-TransformRect_AxisAlignedPreserving@D2DMatrixHelper@@YAXAEBUD2D_RECT_F@@AEBUD2D_MATRIX_3X2_F@@P.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ??0CoordMap@@QEAA@XZ @ 0x18013335C (--0CoordMap@@QEAA@XZ.c)
 *     ??1CoordMap@@QEAA@XZ @ 0x1801333C0 (--1CoordMap@@QEAA@XZ.c)
 *     ?IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z @ 0x18015C31C (-IsEmpty@@YA_NAEBUD2D_RECT_F@@@Z.c)
 *     ?ComputeTexPositions@CoordMap@@QEBAJHV?$ArrayRef@M@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x18015F5BC (-ComputeTexPositions@CoordMap@@QEBAJHV-$ArrayRef@M@@0AEAV-$DynArray@M$0A@@@1M@Z.c)
 */

__int64 __fastcall CPrimitiveGroupDrawListBrush::EnumerateBrushes(
        CPrimitiveGroupDrawListBrush *this,
        int (*a2)(struct CDrawListBrush *, void *),
        void *a3)
{
  void *v4; // r13
  int (*v5)(struct CDrawListBrush *, void *); // r12
  int v6; // edi
  __int16 v7; // ax
  FLOAT v8; // xmm5_4
  FLOAT v9; // xmm4_4
  int v10; // xmm3_4
  int v11; // xmm2_4
  __int128 v12; // xmm1
  struct D2D_RECT_F *v13; // r9
  FLOAT v14; // xmm7_4
  FLOAT v15; // xmm6_4
  __int128 v16; // xmm0
  int v17; // r9d
  int v18; // eax
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rsi
  FLOAT *v22; // r14
  FLOAT v23; // xmm9_4
  float v24; // xmm8_4
  bool v25; // cf
  float v26; // xmm7_4
  float v27; // xmm0_4
  float v28; // xmm6_4
  float v29; // xmm0_4
  __int64 v30; // rcx
  __int64 v31; // rax
  struct CSurfaceDrawListBrush **v32; // r12
  struct CSurfaceDrawListBrush *v33; // r13
  CSurfaceDrawListBrush *v34; // rcx
  int v35; // eax
  FLOAT v36; // xmm1_4
  FLOAT v37; // xmm2_4
  FLOAT v38; // xmm0_4
  FLOAT v39; // xmm1_4
  int v40; // eax
  FLOAT v41; // xmm0_4
  int v42; // xmm1_4
  int v43; // xmm0_4
  int v44; // xmm1_4
  int v45; // eax
  CSurfaceDrawListBrush *v47; // [rsp+48h] [rbp-C0h] BYREF
  struct D2D_RECT_F v48; // [rsp+50h] [rbp-B8h] BYREF
  int (*v49)(struct CDrawListBrush *, void *); // [rsp+60h] [rbp-A8h]
  void *v50; // [rsp+68h] [rbp-A0h]
  _DWORD v51[2]; // [rsp+70h] [rbp-98h] BYREF
  _DWORD v52[2]; // [rsp+78h] [rbp-90h] BYREF
  struct D2D_MATRIX_3X2_F v53; // [rsp+80h] [rbp-88h] BYREF
  struct CSurfaceDrawListBrush *v54; // [rsp+98h] [rbp-70h] BYREF
  char v55; // [rsp+A0h] [rbp-68h]
  _DWORD *v56; // [rsp+A8h] [rbp-60h] BYREF
  int v57; // [rsp+B0h] [rbp-58h]
  char v58[8]; // [rsp+B8h] [rbp-50h] BYREF
  FLOAT *v59; // [rsp+C0h] [rbp-48h]
  struct D2D_RECT_F v60; // [rsp+D8h] [rbp-30h] BYREF
  int v61; // [rsp+E8h] [rbp-20h]
  int v62; // [rsp+ECh] [rbp-1Ch]
  int v63; // [rsp+F0h] [rbp-18h]
  int v64; // [rsp+F4h] [rbp-14h]
  _DWORD v65[4]; // [rsp+F8h] [rbp-10h] BYREF
  FLOAT *v66; // [rsp+108h] [rbp+0h] BYREF
  int *v67; // [rsp+110h] [rbp+8h]
  int v68; // [rsp+118h] [rbp+10h]
  int v69; // [rsp+11Ch] [rbp+14h]
  int v70; // [rsp+120h] [rbp+18h]
  int v71; // [rsp+124h] [rbp+1Ch]
  int v72; // [rsp+128h] [rbp+20h] BYREF
  __int16 v73; // [rsp+12Ch] [rbp+24h]
  char v74; // [rsp+12Eh] [rbp+26h]
  __int128 v75; // [rsp+130h] [rbp+28h] BYREF
  __int128 v76; // [rsp+140h] [rbp+38h] BYREF
  char v77; // [rsp+150h] [rbp+48h]
  void *v78[58]; // [rsp+158h] [rbp+50h] BYREF

  v50 = a3;
  v49 = a2;
  v4 = a3;
  v5 = a2;
  v6 = 0;
  CoordMap::CoordMap((CoordMap *)v78);
  if ( *((_DWORD *)this + 6) == 1 )
  {
    v7 = *((_WORD *)this + 32);
    v8 = *((float *)this + 10);
    v9 = *((float *)this + 11);
    v10 = *((_DWORD *)this + 13);
    v11 = *((_DWORD *)this + 14);
    v12 = *(_OWORD *)((char *)this + 84);
    v13 = (struct D2D_RECT_F *)*((unsigned __int8 *)this + 100);
    v14 = *((FLOAT *)this + 7);
    v15 = *((FLOAT *)this + 8);
    LODWORD(v67) = *((_DWORD *)this + 9);
    v69 = *((_DWORD *)this + 12);
    v72 = *((_DWORD *)this + 15);
    v16 = *(_OWORD *)((char *)this + 68);
    v73 = v7;
    LOBYTE(v7) = *((_BYTE *)this + 66);
    v75 = v16;
    v74 = v7;
    v66 = (FLOAT *)__PAIR64__(LODWORD(v15), LODWORD(v14));
    *((FLOAT *)&v67 + 1) = v8;
    v68 = LODWORD(v9);
    v70 = v10;
    v71 = v11;
    v60.left = v14;
    v60.top = v15;
    v60.right = v8;
    v60.bottom = v9;
    v61 = v10;
    v62 = v11;
    v76 = v12;
    v77 = (char)v13;
    D2DMatrixHelper::TransformRect_AxisAlignedPreserving(
      (CPrimitiveGroupDrawListBrush *)((char *)this + 8),
      &v60,
      &v53,
      v13);
    v18 = CoordMap::AddNineGrid(
            (CoordMap *)v78,
            0,
            (const struct D2D_RECT_F *)((char *)this + 8),
            (const struct Insets *)&v75,
            (const struct D2D_RECT_F *)&v53,
            (const struct Insets *)&v76,
            v17);
    v6 = v18;
    if ( v18 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x36u);
      goto LABEL_41;
    }
  }
  v19 = 0LL;
  if ( !*(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 16LL) + 8LL) )
    goto LABEL_41;
  while ( 1 )
  {
    v20 = *((_QWORD *)this + 18);
    v21 = **(_QWORD **)(v20 + 16) + 144 * v19;
    CPrimitiveGroupDrawListGenerator::GetIteratorForState(v20, (__int64)v58, v19);
    if ( (*(_BYTE *)(v21 + 4) & 2) == 0
      && *(_DWORD *)v21
      && *(_DWORD *)(v21 + 40) < *(_DWORD *)(*((_QWORD *)this + 18) + 64LL) )
    {
      break;
    }
LABEL_34:
    v19 = (unsigned int)(v19 + 1);
    if ( (unsigned int)v19 >= *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 18) + 16LL) + 8LL) )
      goto LABEL_41;
  }
  while ( 1 )
  {
    v22 = v59;
    v23 = *v59;
    if ( *v59 < *((float *)this + 2) )
      v23 = *((float *)this + 2);
    v24 = v59[1];
    v25 = v24 < *((float *)this + 3);
    v48.left = v23;
    if ( v25 )
      v24 = *((float *)this + 3);
    v26 = v59[2];
    v27 = *((float *)this + 4);
    v48.top = v24;
    if ( v27 < v26 )
    {
      v48.right = v27;
      v26 = v27;
    }
    else
    {
      v48.right = v26;
    }
    v28 = v59[3];
    v29 = *((float *)this + 5);
    if ( v29 < v28 )
    {
      v48.bottom = *((FLOAT *)this + 5);
      v28 = v29;
    }
    else
    {
      v48.bottom = v59[3];
    }
    if ( IsEmpty(&v48) || CoordMap::IsHollowRect((CoordMap *)v78, &v48) )
      goto LABEL_33;
    v47 = 0LL;
    v30 = *(unsigned int *)(v21 + 40);
    v54 = 0LL;
    *(_QWORD *)&v53.m[2][0] = &v47;
    v31 = *((_QWORD *)this + 18);
    v60 = 0LL;
    v55 = 1;
    v6 = CSurfaceDrawListBrush::Create(*(struct IImageSource **)(*(_QWORD *)(v31 + 40) + 8 * v30), &v60, &v54);
    if ( v55 )
    {
      v32 = *(struct CSurfaceDrawListBrush ***)&v53.m[2][0];
      v33 = v54;
      v34 = **(CSurfaceDrawListBrush ***)&v53.m[2][0];
      if ( v54 != **(struct CSurfaceDrawListBrush ***)&v53.m[2][0] )
      {
        if ( v34 )
          CSurfaceDrawListBrush::`vector deleting destructor'(v34, 1);
        *v32 = v33;
      }
      v4 = v50;
      v5 = v49;
    }
    if ( v6 < 0 )
      break;
    *((_BYTE *)v47 + 152) = 1;
    if ( !CoordMap::IsEmpty((CoordMap *)v78) )
    {
      v70 = 0;
      v63 = 0;
      v66 = (FLOAT *)&v72;
      v68 = 2;
      v67 = &v72;
      v69 = 2;
      *(_QWORD *)&v60.left = v65;
      *(_QWORD *)&v60.right = v65;
      v56 = v51;
      *(_QWORD *)&v53.m11 = v52;
      v61 = 2;
      v62 = 2;
      v57 = 2;
      LODWORD(v53.m21) = 2;
      *(FLOAT *)v52 = v23;
      *(float *)&v52[1] = v26;
      *(float *)v51 = v24;
      *(float *)&v51[1] = v28;
      v35 = CoordMap::ComputeTexPositions((__int64)v78, 0, (__int64)&v53, (__int64)&v56, (__int64)&v66, (__int64)&v60);
      v6 = v35;
      if ( v35 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v35, 0x84u);
        DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v60);
        DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v66);
        goto LABEL_39;
      }
      v36 = v66[v70 - 1];
      v37 = **(float **)&v60.left;
      v48.left = *v66;
      v48.top = v37;
      v48.bottom = *(FLOAT *)(*(_QWORD *)&v60.left + 4LL * (unsigned int)(v63 - 1));
      v48.right = v36;
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v60);
      DynArrayImpl<1>::~DynArrayImpl<1>((void **)&v66);
    }
    v38 = v22[16];
    v39 = v22[17];
    v60.right = 0.0;
    v62 = 0;
    v40 = *((_DWORD *)v22 + 11);
    v60.left = v38;
    v41 = v22[18];
    v60.top = v39;
    v42 = *((_DWORD *)v22 + 19);
    v60.bottom = v41;
    v43 = *((_DWORD *)v22 + 20);
    v61 = v42;
    v44 = *((_DWORD *)v22 + 21);
    v63 = v43;
    v64 = v44;
    v65[0] = 1065353216;
    CDrawListBrush::SetBrushPrimitiveLayout(
      (__int64)v47,
      (__int64)this + 28,
      (__int64)this + 64,
      (__int64)&v60,
      &v48,
      v40,
      v22 + 22);
    v45 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))v5)(v47, v4);
    v6 = v45;
    if ( v45 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v45, 0x95u);
      goto LABEL_39;
    }
    if ( v47 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v47, 1);
LABEL_33:
    if ( !CPrimitiveBuffer::Iterator::Step((CPrimitiveBuffer::Iterator *)v58) )
      goto LABEL_34;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x71u);
LABEL_39:
  if ( v47 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v47, 1);
LABEL_41:
  CoordMap::~CoordMap(v78);
  return (unsigned int)v6;
}
