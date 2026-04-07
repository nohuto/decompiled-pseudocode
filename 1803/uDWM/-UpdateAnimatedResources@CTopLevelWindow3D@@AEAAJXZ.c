/*
 * XREFs of ?UpdateAnimatedResources@CTopLevelWindow3D@@AEAAJXZ @ 0x1800220B0
 * Callers:
 *     ?ValidateVisual@CTopLevelWindow3D@@UEAAJXZ @ 0x180022AA0 (-ValidateVisual@CTopLevelWindow3D@@UEAAJXZ.c)
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x180026020 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180032E70 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18004B1B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     cosf_0 @ 0x18004B33C (cosf_0.c)
 *     sinf_0 @ 0x18004B366 (sinf_0.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CTopLevelWindow3D::UpdateAnimatedResources(CTopLevelWindow3D *this)
{
  __int64 v1; // rax
  float v3; // xmm8_4
  __int64 v4; // rax
  float v5; // xmm0_4
  __int64 v6; // rax
  float v7; // xmm15_4
  __int64 v8; // rax
  float v9; // xmm1_4
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  float v13; // xmm12_4
  __int64 v14; // rax
  float v15; // xmm13_4
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  void (__fastcall *v19)(CVisual *__hidden, unsigned int); // rax
  int v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm8_4
  float v23; // xmm11_4
  float v24; // xmm10_4
  float v25; // xmm12_4
  float v26; // xmm9_4
  float v27; // xmm8_4
  float v28; // xmm13_4
  float v29; // xmm12_4
  float v30; // xmm0_4
  float v31; // xmm13_4
  float v32; // xmm12_4
  float v33; // xmm14_4
  float v34; // xmm13_4
  float v35; // xmm1_4
  float v36; // xmm12_4
  float v37; // xmm9_4
  float v38; // xmm7_4
  float v39; // xmm3_4
  float v40; // xmm10_4
  float v41; // xmm6_4
  float v42; // xmm4_4
  float v43; // xmm8_4
  float v44; // xmm0_4
  float v45; // xmm1_4
  float v46; // xmm0_4
  _DWORD *v47; // rdx
  int v48; // ecx
  int v49; // r8d
  int v50; // eax
  float v51; // xmm6_4
  int v52; // edx
  int v53; // r8d
  float v54; // xmm7_4
  float v55; // xmm5_4
  float v56; // xmm5_4
  float v57; // xmm4_4
  float v58; // xmm4_4
  float v59; // xmm15_4
  __int64 v60; // rax
  __int64 result; // rax
  unsigned int v62; // ebx
  __int64 v63; // [rsp+34h] [rbp-D4h] BYREF
  __int64 v64; // [rsp+3Ch] [rbp-CCh]
  __int64 v65; // [rsp+44h] [rbp-C4h]
  float v66; // [rsp+4Ch] [rbp-BCh]
  __int64 v67; // [rsp+50h] [rbp-B8h]
  __int64 v68; // [rsp+58h] [rbp-B0h]
  _BYTE v69[24]; // [rsp+60h] [rbp-A8h]
  float v70; // [rsp+78h] [rbp-90h]
  float v71; // [rsp+7Ch] [rbp-8Ch]
  float v72; // [rsp+80h] [rbp-88h]
  float v73; // [rsp+84h] [rbp-84h]
  float v74; // [rsp+88h] [rbp-80h]
  int v75; // [rsp+90h] [rbp-78h]
  int v76; // [rsp+94h] [rbp-74h]
  int v77; // [rsp+98h] [rbp-70h]
  int v78; // [rsp+9Ch] [rbp-6Ch]
  float v79; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v80; // [rsp+ACh] [rbp-5Ch]
  __int64 v81; // [rsp+B4h] [rbp-54h]
  float v82; // [rsp+BCh] [rbp-4Ch]
  __int64 v83; // [rsp+C0h] [rbp-48h]
  __int64 v84; // [rsp+C8h] [rbp-40h]
  __int64 v85; // [rsp+D0h] [rbp-38h]
  float v86; // [rsp+D8h] [rbp-30h]
  float v87; // [rsp+DCh] [rbp-2Ch]
  int v88; // [rsp+E0h] [rbp-28h]
  int v89; // [rsp+E4h] [rbp-24h]
  double v90[6]; // [rsp+E8h] [rbp-20h] BYREF

  v1 = *((_QWORD *)this + 47);
  v3 = 0.0;
  if ( v1 )
    v73 = *(double *)(v1 + 48);
  else
    v73 = 0.0;
  v4 = *((_QWORD *)this + 48);
  if ( v4 )
    v5 = *(double *)(v4 + 48);
  else
    v5 = 0.0;
  v6 = *((_QWORD *)this + 49);
  v74 = v5;
  if ( v6 )
    v7 = *(double *)(v6 + 48);
  else
    v7 = 0.0;
  v8 = *((_QWORD *)this + 53);
  v9 = FLOAT_1_0;
  if ( v8 )
    v70 = *(double *)(v8 + 48);
  else
    v70 = FLOAT_1_0;
  v10 = *((_QWORD *)this + 54);
  if ( v10 )
    v71 = *(double *)(v10 + 48);
  else
    v71 = FLOAT_1_0;
  v11 = *((_QWORD *)this + 55);
  if ( v11 )
    v72 = *(double *)(v11 + 48);
  else
    v72 = FLOAT_1_0;
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
    v19 = *(void (__fastcall **)(CVisual *__hidden, unsigned int))(v18 + 24);
    if ( v19 == CVisual::SetDirtyFlags )
      CVisual::SetDirtyFlags(this, 0x20u);
    else
      v19(this, 32u);
  }
  v20 = *((_DWORD *)this + 116) ^ _xmm;
  LODWORD(v86) = *((_DWORD *)this + 114) ^ _xmm;
  LODWORD(v21) = *((_DWORD *)this + 115) ^ _xmm;
  v85 = 1065353216LL;
  v87 = v21;
  v88 = v20;
  v22 = (float)(v3 * 0.017453292) * 0.5;
  v84 = 0LL;
  v83 = 0LL;
  v81 = 0LL;
  v80 = 0LL;
  v89 = 1065353216;
  v82 = 1.0;
  v79 = 1.0;
  v23 = sinf_0(v22);
  v24 = cosf_0(v22);
  v25 = (float)(v13 * 0.017453292) * 0.5;
  v26 = sinf_0(v25);
  v27 = cosf_0(v25);
  v28 = (float)(v15 * 0.017453292) * 0.5;
  v29 = sinf_0(v28);
  v30 = cosf_0(v28);
  v31 = v29 * v27;
  v32 = v29 * v26;
  v33 = (float)((float)(v30 * v26) * v24) + (float)(v31 * v23);
  v34 = (float)(v31 * v24) - (float)((float)(v30 * v26) * v23);
  v35 = (float)((float)(v30 * v27) * v23) - (float)(v32 * v24);
  v36 = (float)(v32 * v23) + (float)((float)(v30 * v27) * v24);
  v37 = (float)(v33 + v33) * v36;
  v38 = (float)(v34 + v34) * v36;
  v39 = (float)(v35 + v35) * v36;
  v40 = (float)(v34 + v34) * v34;
  LODWORD(v65) = 0;
  v41 = (float)(v35 + v35) * v35;
  *(_DWORD *)&v69[4] = 0;
  v42 = (float)(v35 + v35) * v34;
  v43 = (float)(v33 + v33) * v33;
  *((float *)&v64 + 1) = (float)((float)(v35 + v35) * v33) - v38;
  *((float *)&v63 + 1) = (float)(1.0 - v40) - v41;
  *(float *)&v68 = (float)((float)(v35 + v35) * v33) + v38;
  v67 = COERCE_UNSIGNED_INT(v42 + v37);
  *((float *)&v68 + 1) = v42 - v37;
  *(float *)&v64 = (float)((float)(v34 + v34) * v33) + v39;
  *((float *)&v65 + 1) = (float)((float)(v34 + v34) * v33) - v39;
  v66 = (float)(1.0 - v43) - v41;
  *(_OWORD *)&v69[8] = _xmm;
  *(float *)v69 = (float)(1.0 - v43) - v40;
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v79,
    (const struct D2DMatrix *)&v79,
    (const struct D2DMatrix *)((char *)&v63 + 4));
  v44 = *((float *)this + 114) - *((float *)this + 117);
  v45 = *((float *)this + 115) - *((float *)this + 118);
  *(_QWORD *)v69 = 1065353216LL;
  v68 = 0LL;
  *(float *)&v69[8] = v44;
  v46 = *((float *)this + 116) - *((float *)this + 119);
  *(float *)&v69[12] = v45;
  v67 = 0LL;
  v65 = 0LL;
  v64 = 0LL;
  *(float *)&v69[16] = v46;
  *(_DWORD *)&v69[20] = 1065353216;
  v66 = 1.0;
  HIDWORD(v63) = 1065353216;
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v79,
    (const struct D2DMatrix *)&v79,
    (const struct D2DMatrix *)((char *)&v63 + 4));
  v47 = (_DWORD *)*((_QWORD *)this + 42);
  v48 = v47[22];
  v49 = v47[20] - v47[23];
  v76 = v47[24];
  v78 = v47[21] - v47[25];
  v50 = v48 + *((_DWORD *)this + 77);
  v75 = v48;
  v77 = v49;
  v51 = (float)v50;
  v52 = 0;
  v53 = v49 - v48;
  v54 = (float)(v76 + *((_DWORD *)this + 78));
  if ( v53 < 0 )
    v53 = 0;
  if ( v78 - v76 >= 0 )
    v52 = v78 - v76;
  *(_OWORD *)&v69[4] = 0uLL;
  v68 = 0LL;
  v67 = 0LL;
  v65 = 0LL;
  *((float *)&v63 + 1) = v70 * (float)v53;
  *(float *)v69 = v72;
  v64 = 0LL;
  *(_DWORD *)&v69[20] = 1065353216;
  v66 = (float)v52 * v71;
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v79,
    (const struct D2DMatrix *)&v79,
    (const struct D2DMatrix *)((char *)&v63 + 4));
  v56 = v55 * *((float *)this + 117);
  *(_QWORD *)v69 = 1065353216LL;
  v58 = v57 * *((float *)this + 118);
  v68 = 0LL;
  v59 = v7 + *((float *)this + 119);
  v67 = 0LL;
  v65 = 0LL;
  v64 = 0LL;
  *(float *)&v69[16] = v59;
  *(_DWORD *)&v69[20] = 1065353216;
  *(float *)&v69[12] = v58 + (float)(v74 + v54);
  v66 = 1.0;
  HIDWORD(v63) = 1065353216;
  *(float *)&v69[8] = (float)(v51 + v73) + v56;
  D2DMatrixMultiply(
    (struct D2DMatrix *)&v79,
    (const struct D2DMatrix *)&v79,
    (const struct D2DMatrix *)((char *)&v63 + 4));
  v60 = *((_QWORD *)this + 43);
  v90[2] = *((float *)&v81 + 1);
  v90[3] = v82;
  v90[4] = v86;
  v90[5] = v87;
  v90[0] = v79;
  v90[1] = *(float *)&v80;
  result = (*(__int64 (__fastcall **)(_QWORD, _QWORD, double *))(**(_QWORD **)(v60 + 16) + 1168LL))(
             *(_QWORD *)(v60 + 16),
             *(unsigned int *)(v60 + 24),
             v90);
  v62 = result;
  if ( (int)result < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x2E1u);
    return v62;
  }
  return result;
}
