/*
 * XREFs of ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18008A2F0
 * Callers:
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18001262C (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z @ 0x180027020 (-InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x1800881FC (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180088340 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x18008D630 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180095520 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180096CB0 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009D050 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18014C8F8 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801B3984 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801B3B6C (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18002B258 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetRealization@CComponentTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18002B4C0 (-GetRealization@CComponentTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x180057184 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800931E0 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ??$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z @ 0x180099948 (--$Is2DAxisAlignedPreserving@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x180099FB0 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x18009A2A0 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?RoundOffsets@CMILMatrix@@QEAAXXZ @ 0x18009A9C0 (-RoundOffsets@CMILMatrix@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x18009AB60 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18009ADE8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?XMMatrixMultiply@DirectX@@YQ?AUXMMATRIX@1@U21@AEBU21@@Z @ 0x1800C0EC8 (-XMMatrixMultiply@DirectX@@YQ-AUXMMATRIX@1@U21@AEBU21@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800D53F0 (_guard_dispatch_icall_nop.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x1801863D0 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CVisual::CalcEffectiveTransform(__int64 a1, int a2, __int64 a3, _BYTE *a4, CMILMatrix *a5, __int64 a6)
{
  __int64 v6; // rax
  bool v7; // r15
  CTransform3D *v8; // r12
  __int64 (__fastcall *v10)(_QWORD, _QWORD); // r8
  _BYTE *v13; // r10
  float v14; // xmm6_4
  __int64 v15; // rsi
  __int64 v16; // rax
  bool v17; // r14
  bool v18; // si
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // rax
  bool v22; // r13
  char v23; // dl
  const struct D2D_SIZE_F *v24; // rdx
  char v25; // al
  char v26; // cl
  __m128 v27; // xmm0
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int64 v31; // rcx
  float v32; // xmm6_4
  float v33; // xmm9_4
  float v34; // xmm10_4
  float v35; // xmm1_4
  float v36; // xmm1_4
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39; // xmm4_4
  float v40; // xmm5_4
  float v41; // xmm0_4
  char v42; // al
  float v43; // xmm2_4
  float v44; // xmm3_4
  float v45; // xmm0_4
  float v46; // xmm2_4
  float v47; // xmm4_4
  float v48; // xmm3_4
  float v49; // xmm1_4
  float v50; // xmm5_4
  float v51; // xmm2_4
  float v52; // xmm6_4
  float v53; // xmm2_4
  float v54; // xmm6_4
  float v55; // xmm2_4
  __m128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  __int128 v60; // xmm1
  int v61; // eax
  __int128 v62; // xmm0
  __int128 v63; // xmm1
  struct CMILMatrix *v64; // r8
  void (__fastcall *v65)(CComponentTransform3D *, const struct D2D_SIZE_F *, struct CMILMatrix *); // rax
  float v66; // xmm2_4
  float v67; // xmm3_4
  char v68; // al
  __m128 v69; // xmm1
  __m128 v70; // xmm1
  __m128 v71; // xmm1
  int v72; // edx
  int *v73; // rcx
  __int64 (__fastcall *v74)(_QWORD, _QWORD); // rax
  char v75; // al
  __int64 (__fastcall *v76)(CTransform3D *, __int64); // rax
  char v77; // al
  int v78; // edx
  int *v79; // rcx
  __int64 (__fastcall *v80)(_QWORD, _QWORD); // rax
  __int128 v82; // xmm2
  __int128 v83; // xmm1
  __m128 v84; // xmm0
  __int128 v85; // xmm3
  __int128 v86; // xmm2
  __int128 v87; // xmm1
  CMILMatrix *v88; // rcx
  _BYTE *v89; // r10
  float v90; // xmm2_4
  float v91; // xmm1_4
  const struct CMILMatrix *Matrix; // rax
  __m128 v94; // [rsp+30h] [rbp-D0h] BYREF
  __int128 v95; // [rsp+40h] [rbp-C0h]
  __int128 v96; // [rsp+50h] [rbp-B0h]
  __int128 v97; // [rsp+60h] [rbp-A0h]
  int v98; // [rsp+70h] [rbp-90h]
  CTransform3D *v99; // [rsp+80h] [rbp-80h]
  _OWORD v100[3]; // [rsp+90h] [rbp-70h] BYREF
  __m128 v101; // [rsp+C0h] [rbp-40h]

  v6 = *(_QWORD *)(a1 + 208);
  v7 = 0;
  v8 = 0LL;
  v10 = CEffectGroup::IsOfType;
  if ( (*(_DWORD *)(v6 + 4) & 0x8000000) != 0 )
  {
    v72 = *(_DWORD *)(v6 + 12);
    v73 = (int *)(v6 + 12);
    if ( (v72 & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v73 = (int *)((char *)v73 + (v72 & 0xFFFFFF) + 4);
        v72 = *v73;
      }
      while ( (*v73 & 0x7F000000) != 0x5000000 );
    }
    v99 = *(CTransform3D **)(v73 + 1);
    v74 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v99 + 48LL);
    if ( v74 == CEffectGroup::IsOfType )
      v75 = CEffectGroup::IsOfType(v99, 23LL);
    else
      v75 = ((__int64 (__fastcall *)(CTransform3D *, __int64, __int64 (__fastcall *)(_QWORD, _QWORD)))v74)(
              v99,
              23LL,
              CEffectGroup::IsOfType);
    if ( v75 )
    {
      v8 = v99;
    }
    else
    {
      v76 = *(__int64 (__fastcall **)(CTransform3D *, __int64))(*(_QWORD *)v99 + 48LL);
      if ( (char *)v76 == (char *)CEffectGroup::IsOfType )
        v77 = CEffectGroup::IsOfType(v99, 7LL);
      else
        v77 = v76(v99, 7LL);
      if ( v77 )
        v8 = (CTransform3D *)*((_QWORD *)v99 + 11);
    }
  }
  v13 = a4;
  *a4 = 0;
  if ( a2 == 3 )
  {
    *a4 = 1;
    goto LABEL_10;
  }
  if ( a2 == 4 && !a6 )
  {
LABEL_51:
    *v13 = 1;
LABEL_52:
    *((_BYTE *)a5 + 64) = 85;
    *(_OWORD *)a5 = _xmm;
    *((_OWORD *)a5 + 1) = _xmm;
    *((_OWORD *)a5 + 2) = _xmm;
    *((_BYTE *)a5 + 65) = 125;
    *((_OWORD *)a5 + 3) = _xmm;
    return;
  }
  if ( a3 )
  {
    *(_OWORD *)a5 = *(_OWORD *)a3;
    *((_OWORD *)a5 + 1) = *(_OWORD *)(a3 + 16);
    *((_OWORD *)a5 + 2) = *(_OWORD *)(a3 + 32);
    *((_OWORD *)a5 + 3) = *(_OWORD *)(a3 + 48);
    *((_DWORD *)a5 + 16) = *(_DWORD *)(a3 + 64);
  }
  v14 = *(float *)(a1 + 112);
  v7 = a3 != 0;
  if ( v14 != 0.0 || *(float *)(a1 + 116) != 0.0 || *(float *)(a1 + 108) != 0.0 )
  {
    if ( a3 )
    {
      v39 = *(float *)(a1 + 116);
      v40 = *(float *)(a1 + 108);
      v41 = v14 * *(float *)a5;
      *((_BYTE *)a5 + 64) &= 0xFCu;
      v42 = *((_BYTE *)a5 + 64);
      v43 = (float)(v39 * *((float *)a5 + 4)) + v41;
      v44 = (float)(v14 * *((float *)a5 + 1)) + (float)(v39 * *((float *)a5 + 5));
      v45 = v39 * *((float *)a5 + 6);
      v46 = (float)(v43 + (float)(v40 * *((float *)a5 + 8))) + *((float *)a5 + 12);
      v47 = v39 * *((float *)a5 + 7);
      v48 = v44 + (float)(v40 * *((float *)a5 + 9));
      v49 = v40 * *((float *)a5 + 10);
      v50 = v40 * *((float *)a5 + 11);
      *((float *)a5 + 12) = v46;
      v51 = v14;
      v52 = (float)(v14 * *((float *)a5 + 3)) + v47;
      v53 = (float)(v51 * *((float *)a5 + 2)) + v45;
      *((float *)a5 + 13) = v48 + *((float *)a5 + 13);
      v54 = (float)(v52 + v50) + *((float *)a5 + 15);
      v55 = (float)(v53 + v49) + *((float *)a5 + 14);
      *((float *)a5 + 15) = v54;
      *((float *)a5 + 14) = v55;
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v54 - 1.0)) & _xmm) >= 0.00012207031 )
      {
        *((_BYTE *)a5 + 64) = v42 | 0xF0;
        *((_BYTE *)a5 + 65) |= 0x3Fu;
      }
      *((_BYTE *)a5 + 65) &= 0x3Fu;
    }
    else
    {
      v66 = *(float *)(a1 + 116);
      v7 = 1;
      v67 = *(float *)(a1 + 108);
      v68 = *((_BYTE *)a5 + 64) & 0xF4;
      v101.m128_i32[3] = 1065353216;
      *(_OWORD *)a5 = _xmm;
      *((_BYTE *)a5 + 64) = v68 & 0xB | 0x54;
      *((_OWORD *)a5 + 1) = _xmm;
      v69 = v101;
      *((_OWORD *)a5 + 2) = _xmm;
      *((_BYTE *)a5 + 65) = 61;
      v69.m128_f32[0] = v14;
      v70 = _mm_shuffle_ps(v69, v69, 225);
      v70.m128_f32[0] = v66;
      v71 = _mm_shuffle_ps(v70, v70, 198);
      v71.m128_f32[0] = v67;
      v101 = _mm_shuffle_ps(v71, v71, 201);
      *((__m128 *)a5 + 3) = v101;
    }
    *a4 = 1;
  }
  v15 = *(_QWORD *)(a1 + 224);
  if ( v15 )
  {
    v24 = (const struct D2D_SIZE_F *)(a1 + 128);
    v25 = *(_BYTE *)(v15 + 32) & 1;
    v26 = v25;
    if ( !v7 )
    {
      if ( a1 != -128 )
      {
        v26 = *(_BYTE *)(v15 + 32) & 1;
        if ( !v25
          && *(_BYTE *)(v15 + 148)
          && (*(float *)(v15 + 140) != v24->width || *(float *)(v15 + 144) != *(float *)(a1 + 132)) )
        {
          v26 = 1;
        }
        *(struct D2D_SIZE_F *)(v15 + 140) = *v24;
      }
      if ( v26 )
      {
        (*(void (__fastcall **)(__int64, const struct D2D_SIZE_F *, __int64))(*(_QWORD *)v15 + 144LL))(
          v15,
          v24,
          v15 + 72);
        *(_DWORD *)(v15 + 32) &= ~1u;
        v13 = a4;
      }
      v7 = 1;
      *(_OWORD *)a5 = *(_OWORD *)(v15 + 72);
      *((_OWORD *)a5 + 1) = *(_OWORD *)(v15 + 88);
      *((_OWORD *)a5 + 2) = *(_OWORD *)(v15 + 104);
      *((_OWORD *)a5 + 3) = *(_OWORD *)(v15 + 120);
      v61 = *(_DWORD *)(v15 + 136);
      goto LABEL_56;
    }
    if ( a1 != -128 )
    {
      if ( !v25
        && *(_BYTE *)(v15 + 148)
        && (*(float *)(v15 + 140) != v24->width || *(float *)(v15 + 144) != *(float *)(a1 + 132)) )
      {
        v26 = 1;
      }
      *(struct D2D_SIZE_F *)(v15 + 140) = *v24;
    }
    if ( v26 )
    {
      v64 = (struct CMILMatrix *)(v15 + 72);
      v65 = *(void (__fastcall **)(CComponentTransform3D *, const struct D2D_SIZE_F *, struct CMILMatrix *))(*(_QWORD *)v15 + 144LL);
      if ( v65 == CComponentTransform3D::GetRealization )
        CComponentTransform3D::GetRealization((CComponentTransform3D *)v15, v24, v64);
      else
        v65((CComponentTransform3D *)v15, v24, v64);
      *(_DWORD *)(v15 + 32) &= ~1u;
    }
    v27 = *(__m128 *)(v15 + 72);
    v28 = *(_OWORD *)(v15 + 88);
    v98 = *(_DWORD *)(v15 + 136);
    v94 = v27;
    v29 = *(_OWORD *)(v15 + 104);
    v95 = v28;
    v30 = *(_OWORD *)(v15 + 120);
    v96 = v29;
    v97 = v30;
    if ( (unsigned __int8)CMILMatrix::IsIdentity<1>(&v94, v24, v10, a4) )
    {
      v56 = *(__m128 *)a5;
      v57 = *((_OWORD *)a5 + 1);
      v98 = *((_DWORD *)a5 + 16);
      v94 = v56;
      v58 = *((_OWORD *)a5 + 2);
      v95 = v57;
      v59 = *((_OWORD *)a5 + 3);
      v96 = v58;
      v97 = v59;
    }
    else
    {
      CMILMatrix::Ensure3DFlags(a5);
      v31 = *((unsigned __int8 *)a5 + 64);
      if ( (v31 & 3) != 1 )
      {
        if ( (v31 & 0xC) == 4 )
        {
          v32 = *((float *)a5 + 14);
          v33 = *((float *)a5 + 13);
          v34 = *((float *)a5 + 12);
          v35 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v94.m128_f32[3] - 0.0)) & _xmm);
          if ( v35 >= 0.00012207031
            || (v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v95 + 3) - 0.0)) & _xmm),
                v36 >= 0.00012207031)
            || (v37 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v96 + 3) - 0.0)) & _xmm),
                v37 >= 0.00012207031)
            || (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v97 + 3) - 1.0)) & _xmm) >= 0.00012207031 )
          {
            v94.m128_f32[0] = v94.m128_f32[0] + (float)(v94.m128_f32[3] * v34);
            v94.m128_f32[1] = v94.m128_f32[1] + (float)(v94.m128_f32[3] * v33);
            v94.m128_f32[2] = v94.m128_f32[2] + (float)(v94.m128_f32[3] * v32);
            *(float *)&v95 = *(float *)&v95 + (float)(*((float *)&v95 + 3) * v34);
            *((float *)&v95 + 1) = *((float *)&v95 + 1) + (float)(*((float *)&v95 + 3) * v33);
            *((float *)&v95 + 2) = *((float *)&v95 + 2) + (float)(*((float *)&v95 + 3) * v32);
            *(float *)&v96 = *(float *)&v96 + (float)(*((float *)&v96 + 3) * v34);
            *((float *)&v96 + 1) = *((float *)&v96 + 1) + (float)(*((float *)&v96 + 3) * v33);
            *((float *)&v96 + 2) = *((float *)&v96 + 2) + (float)(*((float *)&v96 + 3) * v32);
            *(float *)&v97 = *(float *)&v97 + (float)(*((float *)&v97 + 3) * v34);
            *((float *)&v97 + 1) = *((float *)&v97 + 1) + (float)(*((float *)&v97 + 3) * v33);
            v38 = *((float *)&v97 + 2) + (float)(*((float *)&v97 + 3) * v32);
          }
          else
          {
            *(float *)&v97 = *(float *)&v97 + v34;
            v38 = *((float *)&v97 + 2) + v32;
            *((float *)&v97 + 1) = *((float *)&v97 + 1) + v33;
          }
          LOWORD(v98) = v98 & 0x3FFC;
          *((float *)&v97 + 2) = v38;
          goto LABEL_55;
        }
        LOBYTE(v31) = v31 & 0xC0;
        if ( (_BYTE)v31 == 64 )
        {
          v90 = *((float *)a5 + 5);
          v91 = *(float *)a5;
        }
        else
        {
          if ( (*((_BYTE *)a5 + 65) & 0xC) != 4 )
          {
            v82 = *((_OWORD *)a5 + 1);
            v83 = *((_OWORD *)a5 + 2);
            v84 = *((__m128 *)a5 + 3);
            v100[0] = *(_OWORD *)a5;
            v85 = v97;
            v100[1] = v82;
            v86 = v96;
            v100[2] = v83;
            v87 = v95;
            v101 = v84;
            v84.m128_u64[1] = v94.m128_u64[1];
            *(double *)v84.m128_u64 = DirectX::XMMatrixMultiply(v31, v100);
            v94 = v84;
            v98 = 0;
            v95 = v87;
            v96 = v86;
            v97 = v85;
            goto LABEL_55;
          }
          CMILMatrix::Rotate90((CMILMatrix *)&v94);
          LODWORD(v91) = *((_DWORD *)a5 + 4) ^ _xmm;
          v90 = *((float *)a5 + 1);
        }
        CMILMatrix::Scale((CMILMatrix *)&v94, v91, v90, *((float *)a5 + 10));
        CMILMatrix::Translate((CMILMatrix *)&v94, *((float *)a5 + 12), *((float *)a5 + 13), *((float *)a5 + 14));
      }
    }
LABEL_55:
    v60 = v95;
    v61 = v98;
    *(__m128 *)a5 = v94;
    v62 = v96;
    *((_OWORD *)a5 + 1) = v60;
    v63 = v97;
    *((_OWORD *)a5 + 2) = v62;
    *((_OWORD *)a5 + 3) = v63;
LABEL_56:
    *((_DWORD *)a5 + 16) = v61;
    *v13 = 1;
  }
LABEL_10:
  if ( a6 )
  {
    if ( v7 )
    {
      *(_OWORD *)a6 = *(_OWORD *)a5;
      *(_OWORD *)(a6 + 16) = *((_OWORD *)a5 + 1);
      *(_OWORD *)(a6 + 32) = *((_OWORD *)a5 + 2);
      *(_OWORD *)(a6 + 48) = *((_OWORD *)a5 + 3);
      *(_DWORD *)(a6 + 64) = *((_DWORD *)a5 + 16);
    }
    else
    {
      *(_WORD *)(a6 + 64) = 32085;
      *(_OWORD *)a6 = _xmm;
      *(_OWORD *)(a6 + 16) = _xmm;
      *(_OWORD *)(a6 + 32) = _xmm;
      *(_OWORD *)(a6 + 48) = _xmm;
    }
  }
  if ( a2 == 4 )
    goto LABEL_51;
  if ( !v8 || *(_DWORD *)(a1 + 96) == 2 )
  {
    v16 = *(_QWORD *)(a1 + 80);
    v17 = *(_DWORD *)(a1 + 96) != 1;
    v18 = v16 && *(_DWORD *)(v16 + 96) == 1;
    v19 = *(_QWORD *)(a1 + 72);
    if ( (v19 & 2) != 0 )
      v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v19) = v19 & 1;
    v20 = (_DWORD)v19 == 0;
    v21 = *(_QWORD *)(a1 + 208);
    v22 = !v20;
    if ( (*(_DWORD *)(v21 + 4) & 0x8000000) == 0 )
      goto LABEL_19;
    v78 = *(_DWORD *)(v21 + 12);
    v79 = (int *)(v21 + 12);
    if ( (v78 & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v79 = (int *)((char *)v79 + (v78 & 0xFFFFFF) + 4);
        v78 = *v79;
      }
      while ( (*v79 & 0x7F000000) != 0x5000000 );
    }
    v99 = *(CTransform3D **)(v79 + 1);
    v80 = *(__int64 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v99 + 48LL);
    if ( v80 == CEffectGroup::IsOfType
       ? CEffectGroup::IsOfType(v99, 8LL)
       : ((unsigned __int8 (__fastcall *)(CTransform3D *, __int64, __int64 (__fastcall *)(_QWORD, _QWORD)))v80)(
           v99,
           8LL,
           v10) )
    {
      v23 = 1;
    }
    else
    {
LABEL_19:
      v23 = 0;
    }
    if ( !v17 )
      goto LABEL_110;
    if ( !v18 )
      goto LABEL_22;
    if ( v22 )
    {
      v13 = a4;
    }
    else
    {
LABEL_110:
      v13 = a4;
      if ( !v18 || !v23 && (*(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL) & 0x10000) == 0 )
        goto LABEL_22;
    }
  }
  if ( !v7 )
  {
    v7 = 1;
    *((_BYTE *)a5 + 64) = 85;
    *(_OWORD *)a5 = _xmm;
    *((_OWORD *)a5 + 1) = _xmm;
    *((_OWORD *)a5 + 2) = _xmm;
    *((_BYTE *)a5 + 65) = 125;
    *((_OWORD *)a5 + 3) = _xmm;
  }
  *((_BYTE *)a5 + 64) |= 0xFu;
  *((_QWORD *)a5 + 4) = 0LL;
  *((_QWORD *)a5 + 5) = 0LL;
  *v13 = 1;
LABEL_22:
  if ( v8 )
  {
    Matrix = CTransform3D::GetMatrix(v8, (const struct D2D_SIZE_F *)(a1 + 128));
    if ( v7 )
    {
      CMILMatrix::Multiply(Matrix, a5, a5);
    }
    else
    {
      v7 = 1;
      *(_OWORD *)a5 = *(_OWORD *)Matrix;
      *((_OWORD *)a5 + 1) = *((_OWORD *)Matrix + 1);
      *((_OWORD *)a5 + 2) = *((_OWORD *)Matrix + 2);
      *((_OWORD *)a5 + 3) = *((_OWORD *)Matrix + 3);
      *((_DWORD *)a5 + 16) = *((_DWORD *)Matrix + 16);
    }
    *a4 = 1;
  }
  if ( !v7 )
    goto LABEL_52;
  if ( (*(_BYTE *)(a1 + 90) & 8) != 0 )
  {
    if ( (unsigned __int8)CMILMatrix::Is2DAxisAlignedPreserving<1>(a5) )
    {
      CMILMatrix::RoundOffsets(v88);
      *v89 = 1;
    }
  }
}
