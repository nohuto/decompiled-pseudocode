/*
 * XREFs of ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004DD70
 * Callers:
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x1800357A0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x18003DDEC (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18004FBE4 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x18004FDC0 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180057590 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z @ 0x180078D90 (-InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180090590 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801CFEE4 (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x1801D00CC (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x180050EE8 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?RoundOffsets@CMILMatrix@@QEAAXXZ @ 0x180059478 (-RoundOffsets@CMILMatrix@@QEAAXXZ.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x180059558 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x18005A460 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x18005A710 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x18005A9F0 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x18005AFD8 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x18007B590 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     ?HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ @ 0x180083430 (-HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180092A80 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?GetRealization@CComponentTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x180095920 (-GetRealization@CComponentTransform3D@@MEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x18009677C (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x18018F504 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x18018FA40 (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CVisual::CalcEffectiveTransform(
        __int64 a1,
        const struct D2D_SIZE_F *a2,
        __int64 a3,
        _BYTE *a4,
        CMILMatrix *a5,
        __int64 a6)
{
  bool v6; // r12
  CTransform3D *v7; // r13
  int v10; // r14d
  __m128 v12; // xmm6
  __int64 v13; // rdi
  _BYTE *v14; // rdi
  __int64 v15; // rax
  bool v16; // r15
  bool v17; // r14
  __int64 v18; // rdi
  __int64 v19; // rax
  bool (__fastcall *v20)(CLayerVisual *__hidden); // rax
  bool HasNonDefaultTreeEffectInternal; // al
  float v22; // xmm5_4
  float v23; // xmm4_4
  float v24; // xmm2_4
  char v25; // al
  float v26; // xmm3_4
  float v27; // xmm0_4
  float v28; // xmm2_4
  float v29; // xmm6_4
  float v30; // xmm3_4
  float v31; // xmm1_4
  float v32; // xmm4_4
  float v33; // xmm2_4
  float v34; // xmm5_4
  float v35; // xmm2_4
  float v36; // xmm5_4
  float v37; // xmm2_4
  int v38; // eax
  char v39; // cl
  __int128 v40; // xmm0
  __int128 v41; // xmm1
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  char v44; // cl
  __int128 v45; // xmm1
  int v46; // eax
  __int128 v47; // xmm0
  __int128 v48; // xmm1
  float v49; // xmm3_4
  __m128 v50; // xmm6
  __m128 v51; // xmm6
  __m128 v52; // xmm6
  __int128 v53; // xmm0
  __int128 v54; // xmm1
  __int128 v55; // xmm0
  __int128 v56; // xmm1
  struct CEffect *EffectInternal; // r15
  __int64 (__fastcall *v58)(struct CEffect *, __int64); // rax
  __int64 (__fastcall *v59)(struct CEffect *, __int64); // r10
  char v60; // al
  __int64 (__fastcall *v61)(struct CEffect *, __int64); // rax
  char v62; // al
  int v63; // edx
  int *v64; // rcx
  __int64 v65; // rcx
  __int64 (__fastcall *v66)(__int64, __int64); // rax
  struct CMILMatrix *v68; // r8
  void (*v69)(CComponentTransform3D *__hidden, const struct D2D_SIZE_F *, struct CMILMatrix *); // rax
  float v70; // xmm2_4
  float v71; // xmm1_4
  CMILMatrix *v72; // rcx
  float v73; // xmm1_4
  float v74; // xmm1_4
  __int128 *v75; // rax
  __int128 v76; // xmm1
  const struct CMILMatrix *Matrix; // rax
  float v78; // xmm1_4
  float v79; // xmm1_4
  __int128 v80; // [rsp+28h] [rbp-99h] BYREF
  __int128 v81; // [rsp+38h] [rbp-89h]
  __int128 v82; // [rsp+48h] [rbp-79h]
  __int128 v83; // [rsp+58h] [rbp-69h]
  int v84; // [rsp+68h] [rbp-59h]
  char v85[48]; // [rsp+78h] [rbp-49h] BYREF
  __m128 v86; // [rsp+A8h] [rbp-19h]
  char v87; // [rsp+120h] [rbp+5Fh]

  v6 = 0;
  v7 = 0LL;
  v10 = (int)a2;
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 208) + 4LL) & 0x8000000) != 0 )
  {
    EffectInternal = CVisual::GetEffectInternal((CVisual *)a1);
    v58 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL);
    if ( v58 == v59 )
      v60 = CEffectGroup::IsOfType(EffectInternal, 128LL);
    else
      v60 = v58(EffectInternal, 128LL);
    if ( v60 )
    {
      v7 = EffectInternal;
    }
    else
    {
      v61 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL);
      if ( (char *)v61 == (char *)CEffectGroup::IsOfType )
        v62 = CEffectGroup::IsOfType(EffectInternal, 47LL);
      else
        v62 = v61(EffectInternal, 47LL);
      if ( v62 )
        v7 = (CTransform3D *)*((_QWORD *)EffectInternal + 11);
    }
  }
  *a4 = 0;
  if ( v10 != 3 )
  {
    if ( v10 == 4 && !a6 )
    {
LABEL_33:
      *a4 = 1;
LABEL_34:
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
    v12 = (__m128)*(unsigned int *)(a1 + 116);
    v6 = a3 != 0;
    if ( v12.m128_f32[0] != 0.0 || *(float *)(a1 + 120) != 0.0 || *(float *)(a1 + 112) != 0.0 )
    {
      if ( a3 )
      {
        v22 = *(float *)(a1 + 120);
        v23 = *(float *)(a1 + 112);
        v24 = v22 * *((float *)a5 + 4);
        *((_BYTE *)a5 + 64) &= 0xFCu;
        v25 = *((_BYTE *)a5 + 64);
        v26 = (float)(v22 * *((float *)a5 + 5)) + (float)(v12.m128_f32[0] * *((float *)a5 + 1));
        v27 = v12.m128_f32[0] * *((float *)a5 + 2);
        v28 = (float)((float)(v24 + (float)(v12.m128_f32[0] * *(float *)a5)) + (float)(v23 * *((float *)a5 + 8)))
            + *((float *)a5 + 12);
        v29 = v12.m128_f32[0] * *((float *)a5 + 3);
        v30 = v26 + (float)(v23 * *((float *)a5 + 9));
        v31 = v23 * *((float *)a5 + 10);
        v32 = v23 * *((float *)a5 + 11);
        *((float *)a5 + 12) = v28;
        v33 = v22;
        v34 = (float)(v22 * *((float *)a5 + 7)) + v29;
        v35 = (float)(v33 * *((float *)a5 + 6)) + v27;
        *((float *)a5 + 13) = v30 + *((float *)a5 + 13);
        v36 = (float)(v34 + v32) + *((float *)a5 + 15);
        v37 = (float)(v35 + v31) + *((float *)a5 + 14);
        *((float *)a5 + 15) = v36;
        *((float *)a5 + 14) = v37;
        if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v36 - 1.0)) & _xmm) >= 0.000081380211 )
        {
          *((_BYTE *)a5 + 65) |= 0x3Fu;
          *((_BYTE *)a5 + 64) = v25 | 0xF0;
        }
        *((_BYTE *)a5 + 65) &= 0x3Fu;
      }
      else
      {
        v6 = 1;
        v49 = *(float *)(a1 + 112);
        v50 = _mm_shuffle_ps(v12, v12, 225);
        v50.m128_f32[0] = *(float *)(a1 + 120);
        v51 = _mm_shuffle_ps(v50, v50, 198);
        *((_BYTE *)a5 + 64) = 84;
        v51.m128_f32[0] = v49;
        *(_OWORD *)a5 = _xmm;
        v52 = _mm_shuffle_ps(v51, v51, 39);
        *((_OWORD *)a5 + 1) = _xmm;
        *((_BYTE *)a5 + 65) = 61;
        v52.m128_f32[0] = 1.0;
        *((_OWORD *)a5 + 2) = _xmm;
        v86 = _mm_shuffle_ps(v52, v52, 57);
        *((__m128 *)a5 + 3) = v86;
      }
      *a4 = 1;
    }
    v13 = *(_QWORD *)(a1 + 224);
    if ( !v13 )
    {
      v14 = a4;
      goto LABEL_11;
    }
    a2 = (const struct D2D_SIZE_F *)(a1 + 132);
    v38 = *(_DWORD *)(v13 + 32) & 1;
    v39 = *(_BYTE *)(v13 + 32) & 1;
    if ( !v6 )
    {
      if ( a1 != -132 )
      {
        v39 = *(_BYTE *)(v13 + 32) & 1;
        if ( !(_BYTE)v38
          && *(_BYTE *)(v13 + 148)
          && (*(float *)(v13 + 140) != a2->width || *(float *)(v13 + 144) != *(float *)(a1 + 136)) )
        {
          v39 = 1;
        }
        *(struct D2D_SIZE_F *)(v13 + 140) = *a2;
      }
      if ( v39 )
      {
        (*(void (__fastcall **)(__int64, const struct D2D_SIZE_F *, __int64))(*(_QWORD *)v13 + 168LL))(
          v13,
          a2,
          v13 + 72);
        *(_DWORD *)(v13 + 32) &= ~1u;
      }
      v6 = 1;
      *(_OWORD *)a5 = *(_OWORD *)(v13 + 72);
      *((_OWORD *)a5 + 1) = *(_OWORD *)(v13 + 88);
      *((_OWORD *)a5 + 2) = *(_OWORD *)(v13 + 104);
      *((_OWORD *)a5 + 3) = *(_OWORD *)(v13 + 120);
      v46 = *(_DWORD *)(v13 + 136);
      goto LABEL_54;
    }
    if ( a1 != -132 )
    {
      if ( !(_BYTE)v38
        && *(_BYTE *)(v13 + 148)
        && (*(float *)(v13 + 140) != a2->width || *(float *)(v13 + 144) != *(float *)(a1 + 136)) )
      {
        v39 = 1;
      }
      *(struct D2D_SIZE_F *)(v13 + 140) = *a2;
    }
    if ( v39 )
    {
      v68 = (struct CMILMatrix *)(v13 + 72);
      v69 = *(void (**)(CComponentTransform3D *__hidden, const struct D2D_SIZE_F *, struct CMILMatrix *))(*(_QWORD *)v13 + 168LL);
      if ( v69 == CComponentTransform3D::GetRealization )
        CComponentTransform3D::GetRealization((CComponentTransform3D *)v13, a2, v68);
      else
        ((void (__fastcall *)(__int64, const struct D2D_SIZE_F *, struct CMILMatrix *))v69)(v13, a2, v68);
      *(_DWORD *)(v13 + 32) &= ~1u;
    }
    v40 = *(_OWORD *)(v13 + 72);
    v41 = *(_OWORD *)(v13 + 88);
    v84 = *(_DWORD *)(v13 + 136);
    v80 = v40;
    v42 = *(_OWORD *)(v13 + 104);
    v81 = v41;
    v43 = *(_OWORD *)(v13 + 120);
    v82 = v42;
    v83 = v43;
    if ( (unsigned __int8)CMILMatrix::IsIdentity<1>(&v80) )
    {
      v53 = *(_OWORD *)a5;
      v54 = *((_OWORD *)a5 + 1);
      v84 = *((_DWORD *)a5 + 16);
      v80 = v53;
      v55 = *((_OWORD *)a5 + 2);
      v81 = v54;
      v56 = *((_OWORD *)a5 + 3);
    }
    else
    {
      CMILMatrix::Ensure3DFlags(a5);
      v44 = *((_BYTE *)a5 + 64);
      if ( (v44 & 3) == 1 )
      {
LABEL_53:
        v45 = v81;
        v46 = v84;
        *(_OWORD *)a5 = v80;
        v47 = v82;
        *((_OWORD *)a5 + 1) = v45;
        v48 = v83;
        *((_OWORD *)a5 + 2) = v47;
        *((_OWORD *)a5 + 3) = v48;
LABEL_54:
        v14 = a4;
        *((_DWORD *)a5 + 16) = v46;
        *a4 = 1;
        goto LABEL_11;
      }
      if ( (v44 & 0xC) == 4 )
      {
LABEL_52:
        CMILMatrix::Translate((CMILMatrix *)&v80, *((float *)a5 + 12), *((float *)a5 + 13), *((float *)a5 + 14));
        goto LABEL_53;
      }
      if ( (v44 & 0xC0) == 0x40 )
      {
        v70 = *((float *)a5 + 5);
        v71 = *(float *)a5;
LABEL_86:
        CMILMatrix::Scale((CMILMatrix *)&v80, v71, v70, *((float *)a5 + 10));
        goto LABEL_52;
      }
      if ( (*((_BYTE *)a5 + 65) & 0xC) == 4 )
      {
        CMILMatrix::Rotate90((CMILMatrix *)&v80);
        LODWORD(v71) = *((_DWORD *)a5 + 4) ^ _xmm;
        v70 = *((float *)a5 + 1);
        goto LABEL_86;
      }
      v75 = (__int128 *)Windows::Foundation::Numerics::operator*(v85, &v80, a5);
      v84 = 0;
      v76 = v75[1];
      v80 = *v75;
      v55 = v75[2];
      v81 = v76;
      v56 = v75[3];
    }
    v83 = v56;
    v82 = v55;
    goto LABEL_53;
  }
  v14 = a4;
  *a4 = 1;
LABEL_11:
  if ( a6 )
  {
    if ( v6 )
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
  if ( v10 == 4 )
    goto LABEL_33;
  if ( !v7 || *(_DWORD *)(a1 + 100) == 2 )
  {
    v15 = *(_QWORD *)(a1 + 80);
    v16 = *(_DWORD *)(a1 + 100) != 1;
    v17 = v15 && *(_DWORD *)(v15 + 100) == 1;
    v18 = *(_QWORD *)(a1 + 72);
    if ( (v18 & 2) != 0 )
      v18 = *(_QWORD *)(v18 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v18) = v18 & 1;
    v19 = *(_QWORD *)(a1 + 208);
    if ( (*(_DWORD *)(v19 + 4) & 0x8000000) == 0 )
      goto LABEL_22;
    v63 = *(_DWORD *)(v19 + 12);
    v64 = (int *)(v19 + 12);
    if ( (v63 & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v64 = (int *)((char *)v64 + (v63 & 0xFFFFFF) + 4);
        v63 = *v64;
      }
      while ( (*v64 & 0x7F000000) != 0x5000000 );
    }
    v65 = *(_QWORD *)(v64 + 1);
    v66 = *(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v65 + 48LL);
    if ( v66 == CEffectGroup::IsOfType ? CEffectGroup::IsOfType(v65, 49LL) : (unsigned __int8)v66(v65, 49LL) )
      v87 = 1;
    else
LABEL_22:
      v87 = 0;
    v20 = *(bool (__fastcall **)(CLayerVisual *__hidden))(*(_QWORD *)a1 + 176LL);
    if ( v20 == CLayerVisual::HasNonDefaultTreeEffectInternal )
      HasNonDefaultTreeEffectInternal = CLayerVisual::HasNonDefaultTreeEffectInternal((CLayerVisual *)a1);
    else
      HasNonDefaultTreeEffectInternal = v20((CLayerVisual *)a1);
    if ( !v16 )
      goto LABEL_109;
    if ( !v17 )
    {
      v14 = a4;
      goto LABEL_28;
    }
    if ( (_DWORD)v18 )
    {
      v14 = a4;
    }
    else
    {
LABEL_109:
      v14 = a4;
      if ( !v17 || !v87 && !HasNonDefaultTreeEffectInternal )
        goto LABEL_28;
    }
  }
  if ( !v6 )
  {
    v6 = 1;
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
  *v14 = 1;
LABEL_28:
  if ( v7 )
  {
    Matrix = CTransform3D::GetMatrix(v7, (const struct D2D_SIZE_F *)(a1 + 132));
    if ( v6 )
    {
      CMILMatrix::Multiply(Matrix, a5, a5);
    }
    else
    {
      v6 = 1;
      *(_OWORD *)a5 = *(_OWORD *)Matrix;
      *((_OWORD *)a5 + 1) = *((_OWORD *)Matrix + 1);
      *((_OWORD *)a5 + 2) = *((_OWORD *)Matrix + 2);
      *((_OWORD *)a5 + 3) = *((_OWORD *)Matrix + 3);
      *((_DWORD *)a5 + 16) = *((_DWORD *)Matrix + 16);
    }
    *v14 = 1;
  }
  if ( !v6 )
    goto LABEL_34;
  if ( (*(_BYTE *)(a1 + 93) & 8) != 0 )
  {
    if ( (LOBYTE(a2) = 1, (unsigned __int8)CMILMatrix::Is2DAffine<1>(a5, a2))
      && (v73 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a5 + 1)) & _xmm), v73 < 0.000081380211)
      && (v74 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a5 + 4)) & _xmm), v74 < 0.000081380211)
      || (v78 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)a5) & _xmm), v78 < 0.000081380211)
      && (v79 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)a5 + 5)) & _xmm), v79 < 0.000081380211) )
    {
      CMILMatrix::RoundOffsets(v72);
      *v14 = 1;
    }
  }
}
