/*
 * XREFs of ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x180021DF0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x1800227F0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x1800184F0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180024C90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     cosf_0 @ 0x18004673C (cosf_0.c)
 *     sinf_0 @ 0x180046760 (sinf_0.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::UpdateAnimatedResources(CTopLevelWindow3D *this)
{
  __int64 v1; // rax
  float v3; // xmm8_4
  __int64 v4; // rax
  float v5; // xmm15_4
  __int64 v6; // rax
  float v7; // xmm0_4
  __int64 v8; // rax
  float v9; // xmm0_4
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  float v13; // xmm13_4
  __int64 v14; // rax
  float v15; // xmm12_4
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  void (__fastcall *v19)(CVisual *, int); // rax
  int v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm8_4
  float v23; // xmm11_4
  float v24; // xmm10_4
  float v25; // xmm13_4
  float v26; // xmm9_4
  float v27; // xmm8_4
  float v28; // xmm12_4
  float v29; // xmm6_4
  float v30; // xmm0_4
  float v31; // xmm12_4
  float v32; // xmm3_4
  float v33; // xmm6_4
  float v34; // xmm12_4
  float v35; // xmm2_4
  float v36; // xmm0_4
  float v37; // xmm1_4
  float v38; // xmm6_4
  float v39; // xmm13_4
  float v40; // xmm12_4
  float v41; // xmm14_4
  float v42; // xmm1_4
  float v43; // xmm3_4
  float v44; // xmm7_4
  float v45; // xmm9_4
  float v46; // xmm13_4
  float v47; // xmm6_4
  float v48; // xmm8_4
  float v49; // xmm0_4
  float v50; // xmm1_4
  float v51; // xmm0_4
  _DWORD *v52; // rdx
  int v53; // ecx
  int v54; // r8d
  int v55; // eax
  float v56; // xmm6_4
  int v57; // edx
  int v58; // r8d
  float v59; // xmm7_4
  float v60; // xmm5_4
  float v61; // xmm5_4
  float v62; // xmm4_4
  float v63; // xmm4_4
  float v64; // xmm0_4
  __int64 v65; // rax
  __int64 result; // rax
  unsigned int v67; // ebx
  __int64 v68; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v69; // [rsp+3Ch] [rbp-CCh]
  __int64 v70; // [rsp+44h] [rbp-C4h]
  float v71; // [rsp+4Ch] [rbp-BCh]
  __int64 v72; // [rsp+50h] [rbp-B8h]
  __int64 v73; // [rsp+58h] [rbp-B0h]
  _BYTE v74[24]; // [rsp+60h] [rbp-A8h]
  float v75; // [rsp+78h] [rbp-90h]
  float v76; // [rsp+7Ch] [rbp-8Ch]
  float v77; // [rsp+80h] [rbp-88h]
  float v78; // [rsp+84h] [rbp-84h]
  float v79; // [rsp+88h] [rbp-80h]
  int v80; // [rsp+90h] [rbp-78h]
  int v81; // [rsp+94h] [rbp-74h]
  int v82; // [rsp+98h] [rbp-70h]
  int v83; // [rsp+9Ch] [rbp-6Ch]
  float v84; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v85; // [rsp+ACh] [rbp-5Ch]
  __int64 v86; // [rsp+B4h] [rbp-54h]
  float v87; // [rsp+BCh] [rbp-4Ch]
  __int64 v88; // [rsp+C0h] [rbp-48h]
  __int64 v89; // [rsp+C8h] [rbp-40h]
  __int64 v90; // [rsp+D0h] [rbp-38h]
  float v91; // [rsp+D8h] [rbp-30h]
  float v92; // [rsp+DCh] [rbp-2Ch]
  int v93; // [rsp+E0h] [rbp-28h]
  int v94; // [rsp+E4h] [rbp-24h]
  double v95[6]; // [rsp+E8h] [rbp-20h] BYREF

  v1 = *((_QWORD *)this + 47);
  v3 = 0.0;
  if ( v1 )
    v78 = *(double *)(v1 + 48);
  else
    v78 = 0.0;
  v4 = *((_QWORD *)this + 48);
  if ( v4 )
    v5 = *(double *)(v4 + 48);
  else
    v5 = 0.0;
  v6 = *((_QWORD *)this + 49);
  if ( v6 )
    v7 = *(double *)(v6 + 48);
  else
    v7 = 0.0;
  v8 = *((_QWORD *)this + 53);
  v79 = v7;
  v9 = FLOAT_1_0;
  if ( v8 )
    v75 = *(double *)(v8 + 48);
  else
    v75 = FLOAT_1_0;
  v10 = *((_QWORD *)this + 54);
  if ( v10 )
    v76 = *(double *)(v10 + 48);
  else
    v76 = FLOAT_1_0;
  v11 = *((_QWORD *)this + 55);
  if ( v11 )
    v77 = *(double *)(v11 + 48);
  else
    v77 = FLOAT_1_0;
  v12 = *((_QWORD *)this + 50);
  if ( v12 )
    v13 = *(double *)(v12 + 48);
  else
    v13 = 0.0;
  v14 = *((_QWORD *)this + 51);
  if ( v14 )
    v15 = *(double *)(v14 + 48);
  else
    v15 = 0.0;
  v16 = *((_QWORD *)this + 52);
  if ( v16 )
    v3 = *(double *)(v16 + 48);
  v17 = *((_QWORD *)this + 56);
  if ( v17 )
    v9 = *(double *)(v17 + 48);
  if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)*((double *)this + 23) - v9)) & _xmm) > 0.0000011920929 )
  {
    v18 = *(_QWORD *)this;
    *((double *)this + 23) = v9;
    v19 = *(void (__fastcall **)(CVisual *, int))(v18 + 24);
    if ( v19 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 32);
    else
      v19(this, 32);
  }
  v20 = *((_DWORD *)this + 116) ^ _xmm;
  LODWORD(v91) = *((_DWORD *)this + 114) ^ _xmm;
  LODWORD(v21) = *((_DWORD *)this + 115) ^ _xmm;
  v90 = 1065353216LL;
  v92 = v21;
  v93 = v20;
  v22 = (float)(v3 * 0.017453292) * 0.5;
  v89 = 0LL;
  v88 = 0LL;
  v86 = 0LL;
  v85 = 0LL;
  v94 = 1065353216;
  v87 = 1.0;
  v84 = 1.0;
  v23 = sinf_0(v22);
  v24 = cosf_0(v22);
  v25 = (float)(v13 * 0.017453292) * 0.5;
  v26 = sinf_0(v25);
  v27 = cosf_0(v25);
  v28 = (float)(v15 * 0.017453292) * 0.5;
  v29 = sinf_0(v28);
  v30 = cosf_0(v28);
  v31 = v29;
  v32 = v30 * v27;
  v33 = v29 * v26;
  v34 = v31 * v27;
  v35 = v30 * v26;
  v36 = v33 * v24;
  v37 = v34 * v23;
  v38 = (float)(v33 * v23) + (float)(v32 * v24);
  v39 = (float)(v32 * v23) - v36;
  v40 = (float)(v34 * v24) - (float)(v35 * v23);
  v41 = (float)(v35 * v24) + v37;
  v42 = v39 + v39;
  v43 = (float)(v39 + v39) * v38;
  v44 = v38 * (float)(v40 + v40);
  v45 = v38 * (float)(v41 + v41);
  v46 = v39 * (float)(v39 + v39);
  LODWORD(v70) = 0;
  *(_DWORD *)&v74[4] = 0;
  v47 = v40 * (float)(v40 + v40);
  v48 = (float)(v41 + v41) * v41;
  *((float *)&v69 + 1) = (float)(v42 * v41) - v44;
  *(float *)&v73 = (float)(v42 * v41) + v44;
  *((float *)&v68 + 1) = (float)(1.0 - v47) - v46;
  v72 = COERCE_UNSIGNED_INT((float)(v42 * v40) + v45);
  *((float *)&v73 + 1) = (float)(v42 * v40) - v45;
  *(float *)&v69 = (float)((float)(v40 + v40) * v41) + v43;
  *((float *)&v70 + 1) = (float)((float)(v40 + v40) * v41) - v43;
  v71 = (float)(1.0 - v48) - v46;
  *(_OWORD *)&v74[8] = _xmm;
  *(float *)v74 = (float)(1.0 - v48) - v47;
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v84,
    (const struct D2DMatrix *)&v84,
    (const struct D2DMatrix *)((char *)&v68 + 4));
  v49 = *((float *)this + 114) - *((float *)this + 117);
  v50 = *((float *)this + 115) - *((float *)this + 118);
  *(_QWORD *)v74 = 1065353216LL;
  v73 = 0LL;
  *(float *)&v74[8] = v49;
  v51 = *((float *)this + 116) - *((float *)this + 119);
  *(float *)&v74[12] = v50;
  v72 = 0LL;
  v70 = 0LL;
  v69 = 0LL;
  *(float *)&v74[16] = v51;
  *(_DWORD *)&v74[20] = 1065353216;
  v71 = 1.0;
  HIDWORD(v68) = 1065353216;
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v84,
    (const struct D2DMatrix *)&v84,
    (const struct D2DMatrix *)((char *)&v68 + 4));
  v52 = (_DWORD *)*((_QWORD *)this + 42);
  v53 = v52[22];
  v54 = v52[20] - v52[23];
  v81 = v52[24];
  v83 = v52[21] - v52[25];
  v55 = v53 + *((_DWORD *)this + 77);
  v80 = v53;
  v82 = v54;
  v56 = (float)v55;
  v57 = 0;
  v58 = v54 - v53;
  v59 = (float)(v81 + *((_DWORD *)this + 78));
  if ( v58 < 0 )
    v58 = 0;
  if ( v83 - v81 >= 0 )
    v57 = v83 - v81;
  *(_OWORD *)&v74[4] = 0uLL;
  v73 = 0LL;
  v72 = 0LL;
  v70 = 0LL;
  *((float *)&v68 + 1) = (float)v58 * v75;
  v69 = 0LL;
  *(float *)v74 = v77;
  *(_DWORD *)&v74[20] = 1065353216;
  v71 = (float)v57 * v76;
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v84,
    (const struct D2DMatrix *)&v84,
    (const struct D2DMatrix *)((char *)&v68 + 4));
  v61 = v60 * *((float *)this + 117);
  *(_QWORD *)v74 = 1065353216LL;
  v63 = v62 * *((float *)this + 118);
  v73 = 0LL;
  v64 = v79 + *((float *)this + 119);
  v72 = 0LL;
  v70 = 0LL;
  v69 = 0LL;
  *(float *)&v74[16] = v64;
  *(_DWORD *)&v74[20] = 1065353216;
  *(float *)&v74[12] = (float)(v5 + v59) + v63;
  v71 = 1.0;
  HIDWORD(v68) = 1065353216;
  *(float *)&v74[8] = (float)(v56 + v78) + v61;
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v84,
    (const struct D2DMatrix *)&v84,
    (const struct D2DMatrix *)((char *)&v68 + 4));
  v65 = *((_QWORD *)this + 43);
  v95[2] = *((float *)&v86 + 1);
  v95[3] = v87;
  v95[4] = v91;
  v95[5] = v92;
  v95[0] = v84;
  v95[1] = *(float *)&v85;
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**(_QWORD **)(v65 + 16) + 1152LL))(
             *(_QWORD *)(v65 + 16),
             *(unsigned int *)(v65 + 24),
             v95);
  v67 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x2E1u);
    return v67;
  }
  return result;
}
