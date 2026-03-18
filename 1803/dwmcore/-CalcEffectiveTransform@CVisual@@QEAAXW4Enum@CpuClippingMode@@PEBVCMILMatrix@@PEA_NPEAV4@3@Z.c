/*
 * XREFs of ?CalcEffectiveTransform@CVisual@@QEAAXW4Enum@CpuClippingMode@@PEBVCMILMatrix@@PEA_NPEAV4@3@Z @ 0x18004EAA0
 * Callers:
 *     ?GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@@Z @ 0x180008624 (-GetWindowBackgroundTreatmentEffectInput@CDrawingContext@@QEAAJAEBUD2D_SIZE_F@@PEAUEffectInput@@.c)
 *     ?UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z @ 0x18000B418 (-UpdateWorldTransform@CVisual@@AEAAJPEBVCVisualTree@@PEAVCTreeData@@_NPEBV3@@Z.c)
 *     ?InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z @ 0x18000CDE0 (-InitializeDeviceTransform@CVisualCapture@@MEAAXPEAVCMILMatrix@@@Z.c)
 *     ?PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800266D0 (-PreSubgraph@CHitTestContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z @ 0x1800275D0 (-Update@CCpuClippingData@@QEAAJPEBVCVisualTree@@PEAVCVisual@@W4Enum@CpuClippingMode@@_N@Z.c)
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x18004DC40 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009F520 (-PostSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800A0E20 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x1800AB230 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x180211E9C (-PushStacksForBspRootVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 *     ?PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z @ 0x180212084 (-PushTransformForChildVisual@CBspPreComputeHelper@@AEAAJPEAVCVisual@@@Z.c)
 * Callees:
 *     ?HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ @ 0x180009D60 (-HasNonDefaultTreeEffectInternal@CLayerVisual@@UEBA_NXZ.c)
 *     ??DNumerics@Foundation@Windows@@YA?AUfloat4x4@012@AEBU3012@0@Z @ 0x1800171F8 (--DNumerics@Foundation@Windows@@YA-AUfloat4x4@012@AEBU3012@0@Z.c)
 *     ?GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z @ 0x180029954 (-GetMatrix@CTransform3D@@QEAAAEBVCMILMatrix@@PEBUD2D_SIZE_F@@@Z.c)
 *     ?GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z @ 0x18002B640 (-GetRealization@CComponentTransform3D@@UEAAXPEBUD2D_SIZE_F@@PEAVCMILMatrix@@@Z.c)
 *     ?GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ @ 0x18004FC80 (-GetEffectInternal@CVisual@@QEBAPEAVCEffect@@XZ.c)
 *     ?GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ @ 0x18005052C (-GetInteractionInternal@CVisual@@QEBAPEAVCInteraction@@XZ.c)
 *     ?IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18009F390 (-IsOfType@CEffectGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?Translate@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3958 (-Translate@CMILMatrix@@QEAAXMMM@Z.c)
 *     ?Scale@CMILMatrix@@QEAAXMMM@Z @ 0x1800A3E90 (-Scale@CMILMatrix@@QEAAXMMM@Z.c)
 *     ??$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z @ 0x1800A58B0 (--$Is2DAffine@$00@CMILMatrix@@AEBA_N_N@Z.c)
 *     ??$IsIdentity@$00@CMILMatrix@@AEBA_NXZ @ 0x1800A5D80 (--$IsIdentity@$00@CMILMatrix@@AEBA_NXZ.c)
 *     ?Ensure3DFlags@CMILMatrix@@AEBAXXZ @ 0x1800A5FB0 (-Ensure3DFlags@CMILMatrix@@AEBAXXZ.c)
 *     ?Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z @ 0x1800BE970 (-Multiply@CMILMatrix@@SAXAEBV1@0PEAV1@@Z.c)
 *     _TlgKeywordOn @ 0x1800D1850 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1800D1994 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 *     ?Rotate90@CMILMatrix@@QEAAXXZ @ 0x1801C6F6C (-Rotate90@CMILMatrix@@QEAAXXZ.c)
 */

void __fastcall CVisual::CalcEffectiveTransform(
        __int64 a1,
        const struct D2D_SIZE_F *a2,
        int *a3,
        _BYTE *a4,
        CMILMatrix *a5,
        __int64 a6)
{
  __m128 v6; // xmm2
  CTransform3D *v9; // r12
  int v10; // r14d
  char v11; // r15
  bool v12; // zf
  _BYTE *v13; // r10
  float v14; // xmm7_4
  char v15; // al
  __int64 v16; // r15
  __int64 v17; // rax
  bool v18; // r14
  __int64 v19; // rsi
  __int64 v20; // rax
  bool (__fastcall *v21)(CLayerVisual *); // rax
  bool HasNonDefaultTreeEffectInternal; // al
  char v23; // al
  char v24; // al
  int v25; // eax
  __m128 v26; // xmm5
  float v27; // xmm4_4
  float v28; // xmm2_4
  float v29; // xmm3_4
  float v30; // xmm0_4
  char v31; // al
  char v32; // cl
  float v33; // xmm1_4
  float v34; // xmm2_4
  float v35; // xmm3_4
  float v36; // xmm0_4
  float v37; // xmm7_4
  float v38; // xmm3_4
  float v39; // xmm1_4
  float v40; // xmm4_4
  char v41; // al
  __int128 v42; // xmm0
  __int128 v43; // xmm1
  __int128 v44; // xmm0
  __int128 v45; // xmm1
  char v46; // cl
  float v47; // xmm9_4
  float v48; // xmm10_4
  float v49; // xmm11_4
  float v50; // xmm1_4
  float v51; // xmm1_4
  float v52; // xmm1_4
  __m128 v53; // xmm0
  __int128 v54; // xmm0
  __int128 v55; // xmm1
  __int128 v56; // xmm0
  __int128 v57; // xmm1
  __int128 v58; // xmm1
  int v59; // eax
  __int128 v60; // xmm0
  __int128 v61; // xmm1
  float v62; // xmm3_4
  char v63; // cl
  __m128 v64; // xmm1
  __m128 v65; // xmm1
  __m128 v66; // xmm1
  struct CMILMatrix *v67; // r8
  void (__fastcall *v68)(CComponentTransform3D *, const struct D2D_SIZE_F *, struct CMILMatrix *); // rax
  char v69; // dl
  _BYTE *v70; // r10
  float v71; // xmm1_4
  float v72; // xmm1_4
  float v73; // xmm0_4
  int v74; // eax
  float v75; // xmm1_4
  int v76; // eax
  float v77; // xmm1_4
  int v78; // eax
  struct CEffect *EffectInternal; // rax
  __int64 v80; // r10
  char v81; // al
  __int64 (__fastcall *v82)(struct CEffect *, __int64); // rax
  char v83; // al
  int v84; // edx
  int *v85; // rcx
  __int64 (__fastcall *v86)(struct CEffect *, __int64); // rax
  __int128 *v88; // rax
  __int128 v89; // xmm1
  float v90; // xmm2_4
  float v91; // xmm1_4
  float v92; // xmm0_4
  char v93; // cl
  const struct CMILMatrix *Matrix; // rax
  float v95; // xmm1_4
  float v96; // xmm1_4
  __m128 v97; // rt1
  __m128 v98; // rt1
  __m128 v99; // rt1
  unsigned int v100; // r9d
  struct CInteraction *InteractionInternal; // rax
  float v102; // xmm0_4
  int v103; // xmm0_4
  int v104; // xmm0_4
  int v105; // xmm0_4
  int v106; // xmm0_4
  int v107; // xmm0_4
  int v108; // xmm0_4
  int v109; // xmm0_4
  int v110; // xmm0_4
  int v111; // xmm0_4
  int v112; // xmm0_4
  int v113; // xmm0_4
  int v114; // xmm0_4
  int v115; // xmm0_4
  int v116; // xmm0_4
  int v117; // xmm0_4
  struct CInteraction *v118; // rax
  int v119; // xmm0_4
  int v120; // xmm0_4
  int v121; // xmm0_4
  int v122; // xmm0_4
  int v123; // xmm0_4
  int v124; // xmm0_4
  int v125; // xmm0_4
  int v126; // xmm0_4
  int v127; // xmm0_4
  int v128; // xmm0_4
  int v129; // xmm0_4
  int v130; // xmm0_4
  int v131; // xmm0_4
  int v132; // xmm0_4
  int v133; // xmm0_4
  float v134; // xmm0_4
  char v135; // [rsp+38h] [rbp-D0h]
  bool v136; // [rsp+38h] [rbp-D0h]
  unsigned __int32 v137; // [rsp+40h] [rbp-C8h] BYREF
  char v138; // [rsp+48h] [rbp-C0h]
  _BYTE *v139; // [rsp+50h] [rbp-B8h] BYREF
  struct CEffect *v140; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v141; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v142; // [rsp+78h] [rbp-90h]
  __int128 v143; // [rsp+88h] [rbp-80h]
  __int128 v144; // [rsp+98h] [rbp-70h]
  int v145; // [rsp+A8h] [rbp-60h]
  int v146; // [rsp+B8h] [rbp-50h] BYREF
  int v147; // [rsp+BCh] [rbp-4Ch] BYREF
  int v148; // [rsp+C0h] [rbp-48h] BYREF
  int v149; // [rsp+C4h] [rbp-44h] BYREF
  int v150; // [rsp+C8h] [rbp-40h] BYREF
  int v151; // [rsp+CCh] [rbp-3Ch] BYREF
  int v152; // [rsp+D0h] [rbp-38h] BYREF
  int v153; // [rsp+D4h] [rbp-34h] BYREF
  int v154; // [rsp+D8h] [rbp-30h] BYREF
  int v155; // [rsp+DCh] [rbp-2Ch] BYREF
  int v156; // [rsp+E0h] [rbp-28h] BYREF
  int v157; // [rsp+E4h] [rbp-24h] BYREF
  int v158; // [rsp+E8h] [rbp-20h] BYREF
  struct CInteraction *v159; // [rsp+F0h] [rbp-18h] BYREF
  struct CInteraction *v160; // [rsp+F8h] [rbp-10h] BYREF
  char v161[48]; // [rsp+100h] [rbp-8h] BYREF
  __m128 v162; // [rsp+130h] [rbp+28h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+148h] [rbp+40h] BYREF
  struct CInteraction **v164; // [rsp+168h] [rbp+60h]
  __int64 v165; // [rsp+170h] [rbp+68h]
  struct CInteraction **v166; // [rsp+178h] [rbp+70h]
  __int64 v167; // [rsp+180h] [rbp+78h]
  unsigned __int32 *v168; // [rsp+188h] [rbp+80h]
  __int64 v169; // [rsp+190h] [rbp+88h]
  struct CEffect **v170; // [rsp+198h] [rbp+90h]
  __int64 v171; // [rsp+1A0h] [rbp+98h]
  int *v172; // [rsp+1A8h] [rbp+A0h]
  __int64 v173; // [rsp+1B0h] [rbp+A8h]
  int *v174; // [rsp+1B8h] [rbp+B0h]
  __int64 v175; // [rsp+1C0h] [rbp+B8h]
  int *v176; // [rsp+1C8h] [rbp+C0h]
  __int64 v177; // [rsp+1D0h] [rbp+C8h]
  int *v178; // [rsp+1D8h] [rbp+D0h]
  __int64 v179; // [rsp+1E0h] [rbp+D8h]
  int *v180; // [rsp+1E8h] [rbp+E0h]
  __int64 v181; // [rsp+1F0h] [rbp+E8h]
  int *v182; // [rsp+1F8h] [rbp+F0h]
  __int64 v183; // [rsp+200h] [rbp+F8h]
  int *v184; // [rsp+208h] [rbp+100h]
  __int64 v185; // [rsp+210h] [rbp+108h]
  int *v186; // [rsp+218h] [rbp+110h]
  __int64 v187; // [rsp+220h] [rbp+118h]
  int *v188; // [rsp+228h] [rbp+120h]
  __int64 v189; // [rsp+230h] [rbp+128h]
  int *v190; // [rsp+238h] [rbp+130h]
  __int64 v191; // [rsp+240h] [rbp+138h]
  int *v192; // [rsp+248h] [rbp+140h]
  __int64 v193; // [rsp+250h] [rbp+148h]
  int *v194; // [rsp+258h] [rbp+150h]
  __int64 v195; // [rsp+260h] [rbp+158h]
  struct CEffect **v196; // [rsp+268h] [rbp+160h]
  __int64 v197; // [rsp+270h] [rbp+168h]
  unsigned __int32 *v198; // [rsp+278h] [rbp+170h]
  __int64 v199; // [rsp+280h] [rbp+178h]

  v9 = 0LL;
  v10 = (int)a2;
  v11 = 0;
  v12 = (*(_DWORD *)(*(_QWORD *)(a1 + 216) + 4LL) & 0x8000000) == 0;
  v139 = a4;
  v135 = 0;
  if ( !v12 )
  {
    EffectInternal = CVisual::GetEffectInternal((CVisual *)a1);
    v140 = EffectInternal;
    if ( *(_QWORD *)(*(_QWORD *)EffectInternal + 48LL) == v80 )
      v81 = CEffectGroup::IsOfType(EffectInternal, 143LL);
    else
      v81 = (*(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)EffectInternal + 48LL))(
              EffectInternal,
              143LL);
    if ( v81 )
    {
      v9 = v140;
    }
    else
    {
      v82 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v140 + 48LL);
      if ( (char *)v82 == (char *)CEffectGroup::IsOfType )
        v83 = CEffectGroup::IsOfType(v140, 52LL);
      else
        v83 = v82(v140, 52LL);
      if ( v83 )
        v9 = (CTransform3D *)*((_QWORD *)v140 + 11);
    }
  }
  v13 = v139;
  *v139 = 0;
  if ( v10 == 3 )
  {
    *v13 = 1;
    goto LABEL_12;
  }
  if ( v10 == 4 && !a6 )
  {
LABEL_34:
    *v13 = 1;
LABEL_35:
    *((_BYTE *)a5 + 64) = 85;
    *(_OWORD *)a5 = _xmm;
    *((_OWORD *)a5 + 1) = _xmm;
    *((_OWORD *)a5 + 2) = _xmm;
    *((_BYTE *)a5 + 65) = 125;
    *((_OWORD *)a5 + 3) = _xmm;
    goto LABEL_31;
  }
  if ( a3 )
  {
    v11 = 1;
    v135 = 1;
    *(_OWORD *)a5 = *(_OWORD *)a3;
    *((_OWORD *)a5 + 1) = *((_OWORD *)a3 + 1);
    *((_OWORD *)a5 + 2) = *((_OWORD *)a3 + 2);
    *((_OWORD *)a5 + 3) = *((_OWORD *)a3 + 3);
    *((_DWORD *)a5 + 16) = a3[16];
  }
  v14 = *(float *)(a1 + 116);
  if ( v14 == 0.0 && *(float *)(a1 + 120) == 0.0 && *(float *)(a1 + 112) == 0.0 )
  {
    v15 = v135;
  }
  else
  {
    if ( v11 )
    {
      v26 = (__m128)*(unsigned int *)(a1 + 120);
      v27 = *(float *)(a1 + 112);
      v28 = *(float *)(a1 + 120) * *((float *)a5 + 4);
      v29 = *(float *)(a1 + 120);
      v30 = v14 * *(float *)a5;
      v31 = *((_BYTE *)a5 + 64) & 0xFC;
      v32 = *((_BYTE *)a5 + 65);
      v33 = v27 * *((float *)a5 + 8);
      *((_BYTE *)a5 + 64) = v31;
      v34 = (float)(v28 + v30) + v33;
      v35 = (float)(v29 * *((float *)a5 + 5)) + (float)(v14 * *((float *)a5 + 1));
      v36 = v14 * *((float *)a5 + 2);
      v37 = v14 * *((float *)a5 + 3);
      v38 = v35 + (float)(v27 * *((float *)a5 + 9));
      v39 = v27 * *((float *)a5 + 10);
      v40 = v27 * *((float *)a5 + 11);
      *((float *)a5 + 12) = v34 + *((float *)a5 + 12);
      v6 = v26;
      v26.m128_f32[0] = (float)(v26.m128_f32[0] * *((float *)a5 + 7)) + v37;
      v6.m128_f32[0] = (float)(v6.m128_f32[0] * *((float *)a5 + 6)) + v36;
      *((float *)a5 + 13) = v38 + *((float *)a5 + 13);
      v26.m128_f32[0] = (float)(v26.m128_f32[0] + v40) + *((float *)a5 + 15);
      v6.m128_f32[0] = (float)(v6.m128_f32[0] + v39) + *((float *)a5 + 14);
      *((_DWORD *)a5 + 15) = v26.m128_i32[0];
      *((_DWORD *)a5 + 14) = v6.m128_i32[0];
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v26.m128_f32[0] - 1.0)) & _xmm) >= 0.000081380211 )
      {
        v32 |= 0x3Fu;
        *((_BYTE *)a5 + 64) = v31 | 0xF0;
        *((_BYTE *)a5 + 65) = v32;
      }
      v15 = v135;
    }
    else
    {
      v6 = (__m128)*(unsigned int *)(a1 + 120);
      v62 = *(float *)(a1 + 112);
      v63 = *((_BYTE *)a5 + 65);
      v162.m128_i32[3] = 1065353216;
      *(_OWORD *)a5 = _xmm;
      *((_OWORD *)a5 + 1) = _xmm;
      v64 = v162;
      *((_BYTE *)a5 + 64) = 84;
      v32 = v63 & 0xC0 | 0x3D;
      v15 = 1;
      *((_BYTE *)a5 + 65) = v32;
      v64.m128_f32[0] = v14;
      v135 = 1;
      v65 = _mm_shuffle_ps(v64, v64, 225);
      v65.m128_f32[0] = v6.m128_f32[0];
      v66 = _mm_shuffle_ps(v65, v65, 198);
      v66.m128_f32[0] = v62;
      *((_OWORD *)a5 + 2) = _xmm;
      v162 = _mm_shuffle_ps(v66, v66, 201);
      *((__m128 *)a5 + 3) = v162;
    }
    *((_BYTE *)a5 + 65) = v32 & 0x3F;
    *v13 = 1;
  }
  v16 = *(_QWORD *)(a1 + 232);
  if ( !v16 )
  {
    v11 = v135;
    goto LABEL_12;
  }
  v12 = v15 == 0;
  a2 = (const struct D2D_SIZE_F *)(a1 + 132);
  v23 = *(_BYTE *)(v16 + 32);
  if ( !v12 )
  {
    v41 = v23 & 1;
    if ( a1 != -132 )
    {
      if ( !v41
        && *(_BYTE *)(v16 + 148)
        && (*(float *)(v16 + 140) != a2->width || *(float *)(v16 + 144) != *(float *)(a1 + 136)) )
      {
        v41 = 1;
      }
      *(struct D2D_SIZE_F *)(v16 + 140) = *a2;
    }
    if ( v41 )
    {
      v67 = (struct CMILMatrix *)(v16 + 72);
      v68 = *(void (__fastcall **)(CComponentTransform3D *, const struct D2D_SIZE_F *, struct CMILMatrix *))(*(_QWORD *)v16 + 168LL);
      if ( v68 == CComponentTransform3D::GetRealization )
        CComponentTransform3D::GetRealization((CComponentTransform3D *)v16, a2, v67);
      else
        v68((CComponentTransform3D *)v16, a2, v67);
      *(_DWORD *)(v16 + 32) &= ~1u;
    }
    v42 = *(_OWORD *)(v16 + 72);
    v43 = *(_OWORD *)(v16 + 88);
    v145 = *(_DWORD *)(v16 + 136);
    v141 = v42;
    v44 = *(_OWORD *)(v16 + 104);
    v142 = v43;
    v45 = *(_OWORD *)(v16 + 120);
    v143 = v44;
    v144 = v45;
    if ( !(unsigned __int8)CMILMatrix::IsIdentity<1>(&v141) )
    {
      CMILMatrix::Ensure3DFlags(a5);
      v46 = *((_BYTE *)a5 + 64);
      if ( (v46 & 3) == 1 )
      {
LABEL_71:
        v58 = v142;
        v59 = v145;
        v11 = v135;
        *(_OWORD *)a5 = v141;
        v60 = v143;
        *((_OWORD *)a5 + 1) = v58;
        v61 = v144;
        *((_OWORD *)a5 + 2) = v60;
        *((_OWORD *)a5 + 3) = v61;
        *((_DWORD *)a5 + 16) = v59;
        *v13 = 1;
        goto LABEL_12;
      }
      if ( (v46 & 0xC) == 4 )
      {
        v47 = *((float *)a5 + 14);
        v48 = *((float *)a5 + 13);
        v49 = *((float *)a5 + 12);
        v50 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)&v141 + 3)) & _xmm);
        if ( v50 >= 0.000081380211
          || (v51 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v142 + 3) - 0.0)) & _xmm),
              v51 >= 0.000081380211)
          || (v52 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)&v143 + 3) - 0.0)) & _xmm),
              v52 >= 0.000081380211)
          || (v53 = (__m128)HIDWORD(v144),
              v53.m128_f32[0] = *((float *)&v144 + 3) - 1.0,
              v6 = _mm_cvtpd_ps((__m128d)_mm_and_ps((__m128)_mm_cvtps_pd(v53), (__m128)(unsigned __int64)_xmm)),
              v6.m128_f32[0] >= 0.000081380211) )
        {
          *(float *)&v141 = *(float *)&v141 + (float)(v49 * *((float *)&v141 + 3));
          *((float *)&v141 + 1) = *((float *)&v141 + 1) + (float)(v48 * *((float *)&v141 + 3));
          *((float *)&v141 + 2) = *((float *)&v141 + 2) + (float)(v47 * *((float *)&v141 + 3));
          *(float *)&v142 = *(float *)&v142 + (float)(v49 * *((float *)&v142 + 3));
          *((float *)&v142 + 1) = *((float *)&v142 + 1) + (float)(v48 * *((float *)&v142 + 3));
          *((float *)&v142 + 2) = *((float *)&v142 + 2) + (float)(v47 * *((float *)&v142 + 3));
          *(float *)&v143 = *(float *)&v143 + (float)(v49 * *((float *)&v143 + 3));
          v92 = v47 * *((float *)&v143 + 3);
          v47 = v47 * *((float *)&v144 + 3);
          *((float *)&v143 + 1) = *((float *)&v143 + 1) + (float)(v48 * *((float *)&v143 + 3));
          *((float *)&v143 + 2) = *((float *)&v143 + 2) + v92;
          *(float *)&v144 = *(float *)&v144 + (float)(v49 * *((float *)&v144 + 3));
          *((float *)&v144 + 1) = *((float *)&v144 + 1) + (float)(v48 * *((float *)&v144 + 3));
        }
        else
        {
          *(float *)&v144 = *(float *)&v144 + v49;
          *((float *)&v144 + 1) = *((float *)&v144 + 1) + v48;
        }
        LOWORD(v145) = v145 & 0x3FFC;
        *((float *)&v144 + 2) = *((float *)&v144 + 2) + v47;
        goto LABEL_71;
      }
      if ( (v46 & 0xC0) == 0x40 )
      {
        v90 = *((float *)a5 + 5);
        v91 = *(float *)a5;
      }
      else
      {
        if ( (*((_BYTE *)a5 + 65) & 0xC) != 4 )
        {
          v88 = Windows::Foundation::Numerics::operator*((__int64)v161, &v141, a5);
          v145 = 0;
          v89 = v88[1];
          v141 = *v88;
          v56 = v88[2];
          v142 = v89;
          v57 = v88[3];
          goto LABEL_70;
        }
        CMILMatrix::Rotate90((CMILMatrix *)&v141);
        LODWORD(v91) = *((_DWORD *)a5 + 4) ^ _xmm;
        v90 = *((float *)a5 + 1);
      }
      CMILMatrix::Scale((CMILMatrix *)&v141, v91, v90, *((float *)a5 + 10));
      v6 = (__m128)*((unsigned int *)a5 + 13);
      CMILMatrix::Translate((CMILMatrix *)&v141, *((float *)a5 + 12), v6.m128_f32[0], *((float *)a5 + 14));
      goto LABEL_71;
    }
    v54 = *(_OWORD *)a5;
    v55 = *((_OWORD *)a5 + 1);
    v145 = *((_DWORD *)a5 + 16);
    v141 = v54;
    v56 = *((_OWORD *)a5 + 2);
    v142 = v55;
    v57 = *((_OWORD *)a5 + 3);
LABEL_70:
    v144 = v57;
    v143 = v56;
    goto LABEL_71;
  }
  v24 = v23 & 1;
  if ( a1 != -132 )
  {
    if ( !v24
      && *(_BYTE *)(v16 + 148)
      && (*(float *)(v16 + 140) != a2->width || *(float *)(v16 + 144) != *(float *)(a1 + 136)) )
    {
      v24 = 1;
    }
    *(struct D2D_SIZE_F *)(v16 + 140) = *a2;
  }
  if ( v24 )
  {
    (*(void (__fastcall **)(__int64, const struct D2D_SIZE_F *, __int64))(*(_QWORD *)v16 + 168LL))(v16, a2, v16 + 72);
    *(_DWORD *)(v16 + 32) &= ~1u;
    v13 = v139;
  }
  *(_OWORD *)a5 = *(_OWORD *)(v16 + 72);
  *((_OWORD *)a5 + 1) = *(_OWORD *)(v16 + 88);
  *((_OWORD *)a5 + 2) = *(_OWORD *)(v16 + 104);
  *((_OWORD *)a5 + 3) = *(_OWORD *)(v16 + 120);
  v25 = *(_DWORD *)(v16 + 136);
  v11 = 1;
  *((_DWORD *)a5 + 16) = v25;
  *v13 = 1;
LABEL_12:
  if ( a6 )
  {
    if ( v11 )
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
    goto LABEL_34;
  if ( !v9 || *(_DWORD *)(a1 + 100) == 2 )
  {
    v17 = *(_QWORD *)(a1 + 80);
    v136 = *(_DWORD *)(a1 + 100) != 1;
    v18 = v17 && *(_DWORD *)(v17 + 100) == 1;
    v19 = *(_QWORD *)(a1 + 72);
    if ( (v19 & 2) != 0 )
      v19 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFFCuLL);
    else
      LODWORD(v19) = v19 & 1;
    v20 = *(_QWORD *)(a1 + 216);
    if ( (*(_DWORD *)(v20 + 4) & 0x8000000) == 0 )
      goto LABEL_23;
    v84 = *(_DWORD *)(v20 + 12);
    v85 = (int *)(v20 + 12);
    if ( (v84 & 0x7F000000) != 0x5000000 )
    {
      do
      {
        v85 = (int *)((char *)v85 + (v84 & 0xFFFFFF) + 4);
        v84 = *v85;
      }
      while ( (*v85 & 0x7F000000) != 0x5000000 );
    }
    v140 = *(struct CEffect **)(v85 + 1);
    v86 = *(__int64 (__fastcall **)(struct CEffect *, __int64))(*(_QWORD *)v140 + 48LL);
    if ( (char *)v86 == (char *)CEffectGroup::IsOfType
       ? CEffectGroup::IsOfType(v140, 55LL)
       : (unsigned __int8)v86(v140, 55LL) )
    {
      v138 = 1;
    }
    else
    {
LABEL_23:
      v138 = 0;
    }
    v21 = *(bool (__fastcall **)(CLayerVisual *))(*(_QWORD *)a1 + 176LL);
    if ( v21 == CLayerVisual::HasNonDefaultTreeEffectInternal )
      HasNonDefaultTreeEffectInternal = CLayerVisual::HasNonDefaultTreeEffectInternal((CLayerVisual *)a1);
    else
      HasNonDefaultTreeEffectInternal = v21((CLayerVisual *)a1);
    if ( !v136 )
      goto LABEL_121;
    if ( !v18 )
      goto LABEL_28;
    if ( (_DWORD)v19 )
    {
      v13 = v139;
    }
    else
    {
LABEL_121:
      v13 = v139;
      if ( !v18 || !v138 && !HasNonDefaultTreeEffectInternal )
        goto LABEL_28;
    }
  }
  v93 = *((_BYTE *)a5 + 64);
  if ( !v11 )
  {
    v11 = 1;
    *(_OWORD *)a5 = _xmm;
    *((_OWORD *)a5 + 1) = _xmm;
    v93 = 85;
    *((_BYTE *)a5 + 64) = 85;
    *((_OWORD *)a5 + 2) = _xmm;
    *((_BYTE *)a5 + 65) = 125;
    *((_OWORD *)a5 + 3) = _xmm;
  }
  *((_QWORD *)a5 + 4) = 0LL;
  *((_BYTE *)a5 + 64) = v93 | 0xF;
  *((_QWORD *)a5 + 5) = 0LL;
  *v13 = 1;
LABEL_28:
  if ( v9 )
  {
    Matrix = CTransform3D::GetMatrix(v9, (const struct D2D_SIZE_F *)(a1 + 132));
    if ( v11 )
    {
      CMILMatrix::Multiply(Matrix, a5, a5);
    }
    else
    {
      v11 = 1;
      *(_OWORD *)a5 = *(_OWORD *)Matrix;
      *((_OWORD *)a5 + 1) = *((_OWORD *)Matrix + 1);
      *((_OWORD *)a5 + 2) = *((_OWORD *)Matrix + 2);
      *((_OWORD *)a5 + 3) = *((_OWORD *)Matrix + 3);
      *((_DWORD *)a5 + 16) = *((_DWORD *)Matrix + 16);
    }
    *v139 = 1;
  }
  if ( !v11 )
    goto LABEL_35;
  if ( *(char *)(a1 + 93) < 0 )
  {
    if ( (LOBYTE(a2) = 1, (unsigned __int8)CMILMatrix::Is2DAffine<1>(a5, a2))
      && (v71 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a5 + 1) - 0.0)) & _xmm), v71 < 0.000081380211)
      && (v72 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a5 + 4) - 0.0)) & _xmm), v72 < 0.000081380211)
      || (v95 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*(float *)a5 - 0.0)) & _xmm), v95 < 0.000081380211)
      && (v96 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(*((float *)a5 + 5) - 0.0)) & _xmm), v96 < 0.000081380211) )
    {
      v73 = *((float *)a5 + 12);
      if ( (LODWORD(v73) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v6.m128_f32[0] = (float)(int)v73 - v73;
        v97.m128_f32[0] = FLOAT_N0_5;
        v6 = _mm_cmple_ss(v6, v97);
        v137 = v6.m128_u32[0];
        v74 = (int)v73 - v6.m128_i32[0];
      }
      else
      {
        *(float *)&v137 = v73 + 6291456.25;
        v74 = (int)(v137 << 10) >> 11;
      }
      v75 = *((float *)a5 + 13);
      *((float *)a5 + 12) = (float)v74;
      if ( (LODWORD(v75) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v6.m128_f32[0] = (float)(int)v75 - v75;
        v98.m128_f32[0] = FLOAT_N0_5;
        v6 = _mm_cmple_ss(v6, v98);
        v137 = v6.m128_u32[0];
        v76 = (int)v75 - v6.m128_i32[0];
      }
      else
      {
        *(float *)&v137 = v75 + 6291456.25;
        v76 = (int)(v137 << 10) >> 11;
      }
      v77 = *((float *)a5 + 14);
      *((float *)a5 + 13) = (float)v76;
      if ( (LODWORD(v77) & 0x7FFFFFFFu) > 0x497FFFF0 )
      {
        v6.m128_f32[0] = (float)(int)v77 - v77;
        v99.m128_f32[0] = FLOAT_N0_5;
        v137 = _mm_cmple_ss(v6, v99).m128_u32[0];
        v78 = (int)v77 - v137;
      }
      else
      {
        *(float *)&v137 = v77 + 6291456.25;
        v78 = (int)(v137 << 10) >> 11;
      }
      *((float *)a5 + 14) = (float)v78;
      *v70 = v69;
    }
  }
LABEL_31:
  if ( (*(_BYTE *)(a1 + 264) & 4) != 0 )
  {
    v100 = dword_1802D3FE0;
    if ( dword_1802D3FE0 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
    {
      v159 = (struct CInteraction *)a1;
      v164 = &v159;
      v165 = 8LL;
      InteractionInternal = CVisual::GetInteractionInternal((CVisual *)a1);
      v102 = *(float *)a5;
      v160 = InteractionInternal;
      v166 = &v160;
      *(float *)&v137 = v102;
      v103 = *((_DWORD *)a5 + 1);
      v168 = &v137;
      v146 = v103;
      v104 = *((_DWORD *)a5 + 2);
      v170 = (struct CEffect **)&v146;
      v147 = v104;
      v105 = *((_DWORD *)a5 + 3);
      v172 = &v147;
      v148 = v105;
      v106 = *((_DWORD *)a5 + 4);
      v174 = &v148;
      v149 = v106;
      v107 = *((_DWORD *)a5 + 5);
      v176 = &v149;
      v150 = v107;
      v108 = *((_DWORD *)a5 + 6);
      v178 = &v150;
      v151 = v108;
      v109 = *((_DWORD *)a5 + 7);
      v180 = &v151;
      v152 = v109;
      v110 = *((_DWORD *)a5 + 8);
      v182 = &v152;
      v153 = v110;
      v111 = *((_DWORD *)a5 + 9);
      v184 = &v153;
      v154 = v111;
      v112 = *((_DWORD *)a5 + 10);
      v186 = &v154;
      v155 = v112;
      v113 = *((_DWORD *)a5 + 11);
      v188 = &v155;
      v156 = v113;
      v114 = *((_DWORD *)a5 + 12);
      v190 = &v156;
      v157 = v114;
      v115 = *((_DWORD *)a5 + 13);
      v192 = &v157;
      v158 = v115;
      v116 = *((_DWORD *)a5 + 14);
      v194 = &v158;
      v167 = 8LL;
      v169 = 4LL;
      v171 = 4LL;
      v173 = 4LL;
      v175 = 4LL;
      v177 = 4LL;
      v179 = 4LL;
      v181 = 4LL;
      v183 = 4LL;
      v185 = 4LL;
      v187 = 4LL;
      v189 = 4LL;
      v191 = 4LL;
      v193 = 4LL;
      v195 = 4LL;
      LODWORD(v140) = v116;
      v117 = *((_DWORD *)a5 + 15);
      v196 = &v140;
      v198 = (unsigned __int32 *)&v139;
      LODWORD(v139) = v117;
      v197 = 4LL;
      v199 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A9116, 0LL, 0LL, 0x14u, &pData);
      v100 = dword_1802D3FE0;
    }
    if ( a3 && v100 > 4 )
    {
      if ( TlgKeywordOn((TraceLoggingHProvider)&dword_1802D3FE0, 2uLL) )
      {
        v160 = (struct CInteraction *)a1;
        v164 = &v160;
        v165 = 8LL;
        v118 = CVisual::GetInteractionInternal((CVisual *)a1);
        v119 = *a3;
        v159 = v118;
        v166 = &v159;
        LODWORD(v139) = v119;
        v120 = a3[1];
        v168 = (unsigned __int32 *)&v139;
        LODWORD(v140) = v120;
        v121 = a3[2];
        v170 = &v140;
        v158 = v121;
        v122 = a3[3];
        v172 = &v158;
        v157 = v122;
        v123 = a3[4];
        v174 = &v157;
        v156 = v123;
        v124 = a3[5];
        v176 = &v156;
        v155 = v124;
        v125 = a3[6];
        v178 = &v155;
        v154 = v125;
        v126 = a3[7];
        v180 = &v154;
        v153 = v126;
        v127 = a3[8];
        v182 = &v153;
        v152 = v127;
        v128 = a3[9];
        v184 = &v152;
        v151 = v128;
        v129 = a3[10];
        v186 = &v151;
        v150 = v129;
        v130 = a3[11];
        v188 = &v150;
        v149 = v130;
        v131 = a3[12];
        v190 = &v149;
        v148 = v131;
        v132 = a3[13];
        v192 = &v148;
        v147 = v132;
        v133 = a3[14];
        v194 = &v147;
        v167 = 8LL;
        v169 = 4LL;
        v171 = 4LL;
        v173 = 4LL;
        v175 = 4LL;
        v177 = 4LL;
        v179 = 4LL;
        v181 = 4LL;
        v183 = 4LL;
        v185 = 4LL;
        v187 = 4LL;
        v189 = 4LL;
        v191 = 4LL;
        v193 = 4LL;
        v195 = 4LL;
        v146 = v133;
        v134 = *((float *)a3 + 15);
        v196 = (struct CEffect **)&v146;
        v198 = &v137;
        *(float *)&v137 = v134;
        v197 = 4LL;
        v199 = 4LL;
        TlgWrite((TraceLoggingHProvider)&dword_1802D3FE0, &unk_1802A9295, 0LL, 0LL, 0x14u, &pData);
      }
    }
  }
}
