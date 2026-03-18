/*
 * XREFs of ?EnumerateBrushes@CNineGridDrawListBrush@@UEBAJP6AJPEBVCDrawListBrush@@PEAX@Z1@Z @ 0x1800050E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ComputeMeshPositions@CoordMap@@QEBAJAEAV?$DynArray@M$0A@@@0AEBUD2D_RECT_F@@M@Z @ 0x180004BC8 (-ComputeMeshPositions@CoordMap@@QEBAJAEAV-$DynArray@M$0A@@@0AEBUD2D_RECT_F@@M@Z.c)
 *     ?ComputeTexPositions@CoordMap@@QEBAJHV?$span@$$CBM$0?0@gsl@@0AEAV?$DynArray@M$0A@@@1M@Z @ 0x180004C68 (-ComputeTexPositions@CoordMap@@QEBAJHV-$span@$$CBM$0-0@gsl@@0AEAV-$DynArray@M$0A@@@1M@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ??1?$DynArrayImpl@$0A@@@IEAA@XZ @ 0x1800794B0 (--1-$DynArrayImpl@$0A@@@IEAA@XZ.c)
 *     ??DMatrix3x3@@QEBA?AV0@AEBV0@@Z @ 0x18008CA28 (--DMatrix3x3@@QEBA-AV0@AEBV0@@Z.c)
 *     ??_ECSurfaceDrawListBrush@@UEAAPEAXI@Z @ 0x18008DA30 (--_ECSurfaceDrawListBrush@@UEAAPEAXI@Z.c)
 *     ?SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z @ 0x180095264 (-SetProduct@Matrix3x2F@D2D1@@QEAAXAEBV12@0@Z.c)
 *     ?CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMatrix3x3@@PEAPEAV1@@Z @ 0x1800B2E7C (-CreateWithTextureTransform@CSurfaceDrawListBrush@@SAJAEBVCDrawListBitmap@@USamplerMode@@AEBVMat.c)
 *     ?ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z @ 0x1800C469C (-ComputeRectangleTransform@D2DMatrixHelper@@YA_NAEBUD2D_RECT_F@@0PEAUD2D_MATRIX_3X2_F@@@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CNineGridDrawListBrush::EnumerateBrushes(
        CNineGridDrawListBrush *this,
        int (*a2)(const struct CDrawListBrush *, void *),
        void *a3)
{
  int v4; // eax
  __int64 v5; // rdx
  int v6; // edi
  struct D2D_RECT_F v7; // xmm0
  int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // r13d
  unsigned int v11; // r8d
  __int64 v12; // r10
  __int64 v13; // rax
  __int64 v14; // r11
  __int64 v15; // rsi
  float v16; // xmm2_4
  unsigned int v17; // r12d
  struct D2D_MATRIX_3X2_F *v18; // r9
  __int64 v19; // r15
  float v20; // xmm3_4
  float v21; // xmm4_4
  float v22; // xmm2_4
  float v23; // xmm10_4
  __int64 v24; // r8
  float v25; // xmm2_4
  float v26; // xmm7_4
  float v27; // xmm8_4
  float v28; // xmm5_4
  float v29; // xmm11_4
  int v30; // eax
  int v31; // ecx
  int v32; // ecx
  int v33; // eax
  int v34; // ecx
  int v35; // esi
  int v36; // esi
  float v37; // xmm1_4
  float v38; // xmm1_4
  float v39; // xmm1_4
  __int64 v40; // rax
  void *v41; // rdx
  __int64 v42; // xmm1_8
  struct D2D_RECT_F v43; // xmm0
  __int64 v44; // rax
  int v45; // eax
  __int64 v47; // rax
  __int64 v48; // rax
  int v49; // ecx
  __int128 v50; // xmm0
  int v51; // eax
  __int64 v52; // r15
  __int16 v53; // ax
  __int64 v54; // rax
  CSurfaceDrawListBrush *v55; // rcx
  void *v56; // rdx
  CSurfaceDrawListBrush *v57; // rax
  struct D2D_RECT_F v58; // xmm0
  CSurfaceDrawListBrush *v59; // rax
  int v60; // eax
  CSurfaceDrawListBrush *v61; // [rsp+48h] [rbp-C0h] BYREF
  __int16 v62; // [rsp+58h] [rbp-B0h] BYREF
  char v63; // [rsp+5Ah] [rbp-AEh]
  struct D2D_RECT_F v64; // [rsp+68h] [rbp-A0h] BYREF
  struct D2D_RECT_F v65; // [rsp+78h] [rbp-90h] BYREF
  __int128 v66; // [rsp+88h] [rbp-80h] BYREF
  __int64 v67; // [rsp+98h] [rbp-70h]
  void *v68; // [rsp+A0h] [rbp-68h]
  int (*v69)(const struct CDrawListBrush *, void *); // [rsp+A8h] [rbp-60h]
  struct D2D_RECT_F v70; // [rsp+B0h] [rbp-58h] BYREF
  int v71; // [rsp+C0h] [rbp-48h]
  int v72; // [rsp+C4h] [rbp-44h]
  _DWORD v73[9]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v74[36]; // [rsp+ECh] [rbp-1Ch] BYREF
  _QWORD v75[2]; // [rsp+110h] [rbp+8h] BYREF
  int v76; // [rsp+120h] [rbp+18h]
  __int64 v77; // [rsp+124h] [rbp+1Ch]
  _BYTE v78[24]; // [rsp+130h] [rbp+28h] BYREF
  _QWORD v79[2]; // [rsp+148h] [rbp+40h] BYREF
  int v80; // [rsp+158h] [rbp+50h]
  __int64 v81; // [rsp+15Ch] [rbp+54h]
  _BYTE v82[24]; // [rsp+168h] [rbp+60h] BYREF
  _QWORD v83[2]; // [rsp+180h] [rbp+78h] BYREF
  int v84; // [rsp+190h] [rbp+88h]
  __int64 v85; // [rsp+194h] [rbp+8Ch]
  _BYTE v86[24]; // [rsp+1A0h] [rbp+98h] BYREF
  _QWORD v87[2]; // [rsp+1B8h] [rbp+B0h] BYREF
  int v88; // [rsp+1C8h] [rbp+C0h]
  __int64 v89; // [rsp+1CCh] [rbp+C4h]
  _BYTE v90[24]; // [rsp+1D8h] [rbp+D0h] BYREF

  v68 = a3;
  v69 = a2;
  if ( !*((_DWORD *)this + 30) && !*((_DWORD *)this + 78) && !*((_DWORD *)this + 126) )
  {
    v47 = *((_QWORD *)this + 7);
    *(_OWORD *)(v47 + 8) = *(_OWORD *)((char *)this + 8);
    *(_QWORD *)(v47 + 24) = *((_QWORD *)this + 3);
    v48 = *((_QWORD *)this + 7);
    v49 = *((_DWORD *)this + 12);
    *(_BYTE *)(v48 + 52) = 1;
    v50 = *((_OWORD *)this + 2);
    *(_DWORD *)(v48 + 48) = v49;
    *(_OWORD *)(v48 + 32) = v50;
    v51 = ((__int64 (__fastcall *)(_QWORD, void *))a2)(*((_QWORD *)this + 7), a3);
    v6 = v51;
    if ( v51 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x89u);
    return (unsigned int)v6;
  }
  v79[0] = v82;
  v80 = 6;
  v79[1] = v82;
  v81 = 6LL;
  v75[0] = v78;
  v76 = 6;
  v75[1] = v78;
  v77 = 6LL;
  v4 = CoordMap::ComputeMeshPositions(
         (__int64)this + 96,
         (__int64)v79,
         (__int64)v75,
         (float *)this + 8,
         0.00000011920929);
  v6 = v4;
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v4, 0x8Fu);
    goto LABEL_35;
  }
  v87[0] = v90;
  v88 = 6;
  v87[1] = v90;
  v89 = 6LL;
  v83[0] = v86;
  v84 = 6;
  v83[1] = v86;
  *(_QWORD *)&v64.left = HIDWORD(v77);
  *(_QWORD *)&v64.right = v75[0];
  v7 = v64;
  *(_QWORD *)&v64.left = HIDWORD(v81);
  *(_QWORD *)&v64.right = v79[0];
  v65 = v7;
  v85 = 6LL;
  v8 = CoordMap::ComputeTexPositions((__int64)this + 96, v5, (int *)&v64, &v65, (__int64)v87, (__int64)v83);
  v6 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x99u);
    goto LABEL_34;
  }
  v9 = HIDWORD(v77);
  v10 = 1;
  if ( HIDWORD(v77) <= 1 )
    goto LABEL_34;
  v11 = HIDWORD(v81);
  v12 = v79[0];
  v13 = v75[0];
  v14 = v87[0];
  v15 = v83[0];
  while ( 1 )
  {
    v16 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)(v13 + 4LL * (v10 - 1)) - *(float *)(v13 + 4LL * v10))) & _xmm);
    if ( v16 > 0.0000011920929 )
    {
      v17 = 1;
      if ( v11 > 1 )
        break;
    }
LABEL_33:
    if ( ++v10 >= v9 )
      goto LABEL_34;
  }
  while ( 1 )
  {
    v18 = (struct D2D_MATRIX_3X2_F *)v17;
    v19 = v17 - 1;
    v20 = *(float *)(v12 + 4 * v19);
    v21 = *(float *)(v12 + 4LL * v17);
    v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v20 - v21)) & _xmm);
    if ( v22 <= 0.0000011920929 )
      goto LABEL_32;
    v23 = *(float *)(v14 + 4LL * v17);
    v24 = v10 - 1;
    v25 = *(float *)(v13 + 4 * v24);
    v26 = *(float *)(v15 + 4 * v24);
    LOBYTE(v18) = *((_BYTE *)this + 577);
    v27 = *(float *)(v14 + 4 * v19);
    v11 = HIDWORD(v81);
    v64.left = *(FLOAT *)(v12 + 4 * v19);
    v64.top = v25;
    v64.right = v21;
    v28 = *(float *)(v13 + 4LL * v10);
    v29 = *(float *)(v15 + 4LL * v10);
    v9 = HIDWORD(v77);
    v64.bottom = v28;
    v65.bottom = v29;
    v65.left = v27;
    v65.top = v26;
    v65.right = v23;
    if ( (_BYTE)v18 )
    {
      if ( (float)(*((float *)this + 140) - v20) <= 0.0000011920929
        && (float)(*((float *)this + 141) - v25) <= 0.0000011920929
        && (float)(v21 - *((float *)this + 142)) <= 0.0000011920929
        && (float)(v28 - *((float *)this + 143)) <= 0.0000011920929 )
      {
        goto LABEL_32;
      }
    }
    if ( v17 == 1 )
      v30 = *((_DWORD *)this + 12) & 0x3000000;
    else
      v30 = 0;
    if ( v10 == 1 )
      v31 = *((_DWORD *)this + 12) & 3;
    else
      v31 = 0;
    v32 = v30 | v31;
    if ( v17 == HIDWORD(v81) - 1 )
      v33 = *((_DWORD *)this + 12) & 0x300;
    else
      v33 = 0;
    v34 = v33 | v32;
    if ( v10 == HIDWORD(v77) - 1 )
      v35 = *((_DWORD *)this + 12) & 0x30000;
    else
      v35 = 0;
    v36 = v34 | v35;
    if ( (_BYTE)v18 && v36 != 50529027 )
    {
      v37 = *((float *)this + 141);
      if ( v25 >= v37 && *((float *)this + 143) >= v28 )
      {
        if ( v20 == *((float *)this + 142) )
          v36 |= 0x3000000u;
        if ( v21 == *((float *)this + 140) )
          v36 |= 0x300u;
      }
      if ( v20 >= *((float *)this + 140) && *((float *)this + 142) >= v21 )
      {
        if ( v25 == *((float *)this + 143) )
          v36 |= 3u;
        if ( v28 == v37 )
          v36 |= 0x30000u;
      }
    }
    v38 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v27 - v23)) & _xmm);
    if ( v38 <= 0.0000011920929 )
      break;
    v39 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v26 - v29)) & _xmm);
    if ( v39 <= 0.0000011920929 )
      break;
    D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v65, &v64, &v70, v18);
    D2D1::Matrix3x2F::SetProduct(
      (D2D1::Matrix3x2F *)&v66,
      (const struct D2D1::Matrix3x2F *)&v70,
      (CNineGridDrawListBrush *)((char *)this + 8));
    v40 = *((_QWORD *)this + 7);
    v41 = v68;
    v42 = v67;
    *(_OWORD *)(v40 + 8) = v66;
    v43 = v65;
    *(_QWORD *)(v40 + 24) = v42;
    v44 = *((_QWORD *)this + 7);
    *(_BYTE *)(v44 + 52) = 1;
    *(struct D2D_RECT_F *)(v44 + 32) = v43;
    *(_DWORD *)(v44 + 48) = v36;
    v45 = ((__int64 (__fastcall *)(_QWORD, void *))v69)(*((_QWORD *)this + 7), v41);
    v6 = v45;
    if ( v45 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v45, 0x12Cu);
      goto LABEL_34;
    }
LABEL_31:
    v11 = HIDWORD(v81);
    v12 = v79[0];
    v9 = HIDWORD(v77);
    v13 = v75[0];
    v14 = v87[0];
    v15 = v83[0];
LABEL_32:
    if ( ++v17 >= v11 )
      goto LABEL_33;
  }
  v52 = *((_QWORD *)this + 7);
  D2DMatrixHelper::ComputeRectangleTransform((D2DMatrixHelper *)&v64, &v65, &v70, v18);
  v61 = 0LL;
  v53 = *(_WORD *)(v52 + 96);
  v73[2] = 0;
  v73[5] = 0;
  v73[0] = LODWORD(v70.left);
  v73[1] = LODWORD(v70.top);
  v62 = v53;
  LOBYTE(v53) = *(_BYTE *)(v52 + 98);
  v73[3] = LODWORD(v70.right);
  v73[4] = LODWORD(v70.bottom);
  v63 = v53;
  v73[6] = v71;
  v73[7] = v72;
  v66 = (unsigned __int64)&v61;
  LOBYTE(v67) = 1;
  v73[8] = 1065353216;
  v54 = Matrix3x3::operator*(v73, v74, v52 + 100);
  v6 = CSurfaceDrawListBrush::CreateWithTextureTransform(v52 + 56, &v62, v54, (char *)&v66 + 8);
  if ( (_BYTE)v67 )
  {
    v55 = *(CSurfaceDrawListBrush **)v66;
    *(_QWORD *)v66 = *((_QWORD *)&v66 + 1);
    if ( v55 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v55, 1u);
  }
  if ( v6 >= 0 )
  {
    v56 = v68;
    *(_OWORD *)((char *)v61 + 136) = *(_OWORD *)(v52 + 136);
    v57 = v61;
    *(_OWORD *)((char *)v61 + 8) = *(_OWORD *)((char *)this + 8);
    v58 = v64;
    *((_QWORD *)v57 + 3) = *((_QWORD *)this + 3);
    v59 = v61;
    *((_BYTE *)v61 + 52) = 1;
    *((struct D2D_RECT_F *)v59 + 2) = v58;
    *((_DWORD *)v59 + 12) = v36;
    v60 = ((__int64 (__fastcall *)(CSurfaceDrawListBrush *, void *))v69)(v61, v56);
    v6 = v60;
    if ( v60 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v60, 0x122u);
      goto LABEL_65;
    }
    if ( v61 )
      CSurfaceDrawListBrush::`vector deleting destructor'(v61, 1u);
    goto LABEL_31;
  }
  MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, 0x11Cu);
LABEL_65:
  if ( v61 )
    CSurfaceDrawListBrush::`vector deleting destructor'(v61, 1u);
LABEL_34:
  DynArrayImpl<0>::~DynArrayImpl<0>(v83);
  DynArrayImpl<0>::~DynArrayImpl<0>(v87);
LABEL_35:
  DynArrayImpl<0>::~DynArrayImpl<0>(v75);
  DynArrayImpl<0>::~DynArrayImpl<0>(v79);
  return (unsigned int)v6;
}
