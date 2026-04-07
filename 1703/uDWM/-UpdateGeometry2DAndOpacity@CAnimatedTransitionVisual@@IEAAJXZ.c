/*
 * XREFs of ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180036CBC
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180037568 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x18000D574 (-D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18001307C (-RoundToNearestInt@@YAHM@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180014460 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x180015C5C (-Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18001A700 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x18001ADA8 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001E564 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x18001F2C0 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180024460 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z @ 0x180036C3C (-_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18004CDD0 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18004DD44 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x1800A1F90 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DAndOpacity(CAnimatedTransitionVisual *this)
{
  CRenderDataVisual *v1; // rsi
  CBaseObject *v3; // r12
  char v4; // bl
  __int64 v5; // xmm0_8
  CBaseObject *v6; // r15
  char v7; // r13
  __m128i v8; // xmm14
  char v9; // di
  int v10; // ecx
  __m128i v11; // xmm15
  unsigned int v12; // edx
  unsigned int v13; // eax
  struct tagRECT v14; // xmm0
  __m128i v15; // xmm10
  int v16; // eax
  float v17; // xmm14_4
  float v18; // xmm11_4
  float v19; // xmm10_4
  float v20; // xmm15_4
  float v21; // xmm11_4
  unsigned int v22; // eax
  LONG top; // rbx^4
  __m128i v24; // xmm9
  int v25; // eax
  __m128i v26; // xmm0
  float v27; // xmm9_4
  float left; // xmm7_4
  float v29; // xmm8_4
  float v30; // xmm13_4
  float v31; // xmm12_4
  float v32; // xmm5_4
  float v33; // xmm9_4
  float v34; // xmm0_4
  float v35; // xmm6_4
  float v36; // xmm7_4
  float v37; // xmm2_4
  float v38; // xmm1_4
  float v39; // xmm2_4
  float v40; // xmm1_4
  float v41; // xmm1_4
  float v42; // xmm1_4
  float v43; // xmm1_4
  float v44; // xmm0_4
  float v45; // xmm0_4
  float v46; // xmm1_4
  struct CResource *v47; // rcx
  int v48; // eax
  CBaseObject *v49; // rdi
  unsigned int v50; // ebx
  int v51; // eax
  int v52; // eax
  float v54; // xmm0_4
  __int64 v55; // rax
  int v56; // eax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  unsigned int v61; // eax
  __m128i v62; // xmm0
  int v63; // eax
  float v64; // xmm0_4
  char v65; // [rsp+48h] [rbp-C0h]
  struct tagRECT v66; // [rsp+58h] [rbp-B0h] BYREF
  struct CRenderDataInstruction *v67; // [rsp+68h] [rbp-A0h] BYREF
  struct CPopInstruction *v68; // [rsp+70h] [rbp-98h] BYREF
  float v69[2]; // [rsp+78h] [rbp-90h] BYREF
  float v70[2]; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v71[2]; // [rsp+88h] [rbp-80h] BYREF
  struct CRenderDataInstruction *v72; // [rsp+90h] [rbp-78h] BYREF
  struct tagRECT v73; // [rsp+98h] [rbp-70h] BYREF
  __int64 v74; // [rsp+A8h] [rbp-60h] BYREF
  double v75; // [rsp+B0h] [rbp-58h]
  double v76; // [rsp+B8h] [rbp-50h]
  double v77; // [rsp+C0h] [rbp-48h]
  double v78; // [rsp+C8h] [rbp-40h]
  __int64 v79; // [rsp+D0h] [rbp-38h]
  float v80; // [rsp+D8h] [rbp-30h]
  float v81; // [rsp+DCh] [rbp-2Ch]
  int v82; // [rsp+E0h] [rbp-28h]
  int v83; // [rsp+E4h] [rbp-24h]
  float v84; // [rsp+E8h] [rbp-20h] BYREF
  float v85; // [rsp+ECh] [rbp-1Ch]
  int v86; // [rsp+F0h] [rbp-18h]
  int v87; // [rsp+F4h] [rbp-14h]
  float v88; // [rsp+F8h] [rbp-10h]
  float v89; // [rsp+FCh] [rbp-Ch]
  int v90; // [rsp+100h] [rbp-8h]
  int v91; // [rsp+104h] [rbp-4h]
  int v92; // [rsp+108h] [rbp+0h]
  int v93; // [rsp+10Ch] [rbp+4h]
  int v94; // [rsp+110h] [rbp+8h]
  int v95; // [rsp+114h] [rbp+Ch]
  float v96; // [rsp+118h] [rbp+10h]
  float v97; // [rsp+11Ch] [rbp+14h]
  int v98; // [rsp+120h] [rbp+18h]
  int v99; // [rsp+124h] [rbp+1Ch]

  v1 = (CAnimatedTransitionVisual *)((char *)this + 8);
  CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), 0.9999899864196777);
  v72 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = *(_QWORD *)((char *)this + 764);
  v6 = 0LL;
  v7 = 0;
  v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 214));
  v9 = 0;
  v10 = *((_DWORD *)this + 216) - *((_DWORD *)this + 214);
  v11 = _mm_cvtsi32_si128(*((_DWORD *)this + 215));
  v12 = *((_DWORD *)this + 238);
  v66.right = *((_DWORD *)this + 193);
  v13 = 0;
  if ( v10 >= 0 )
    v13 = v10;
  *(_QWORD *)&v66.left = v5;
  v14 = *(struct tagRECT *)((char *)this + 856);
  v65 = 0;
  v15 = _mm_cvtsi32_si128(v13);
  v16 = 0;
  if ( *((_DWORD *)this + 217) - *((_DWORD *)this + 215) >= 0 )
    v16 = *((_DWORD *)this + 217) - *((_DWORD *)this + 215);
  v67 = 0LL;
  v68 = 0LL;
  v17 = _mm_cvtepi32_ps(v8).m128_f32[0];
  v18 = (float)v16 * *((float *)this + 195);
  v19 = (float)(_mm_cvtepi32_ps(v15).m128_f32[0] * *((float *)this + 194)) + v17;
  v20 = _mm_cvtepi32_ps(v11).m128_f32[0];
  *(float *)v71 = v19;
  v21 = v18 + v20;
  v73 = v14;
  *(float *)&v71[1] = v21;
  if ( v12 || *((_DWORD *)this + 239) )
  {
    v22 = 0;
    top = v73.top;
    if ( *((_DWORD *)this + 216) - *((_DWORD *)this + 214) >= 0 )
      v22 = *((_DWORD *)this + 216) - *((_DWORD *)this + 214);
    v24 = _mm_cvtsi32_si128(v22);
    v25 = 0;
    v26 = _mm_cvtsi32_si128(v12);
    if ( *((_DWORD *)this + 217) - *((_DWORD *)this + 215) >= 0 )
      v25 = *((_DWORD *)this + 217) - *((_DWORD *)this + 215);
    v27 = _mm_cvtepi32_ps(v24).m128_f32[0] / (float)(_mm_cvtepi32_ps(v26).m128_f32[0] / *((float *)this + 203));
    left = (float)v73.left;
    v29 = (float)v25 / (float)((float)*((int *)this + 239) / *((float *)this + 204));
    v30 = *(float *)&v66.left * v27;
    v31 = *(float *)&v66.top * v29;
    v66.left = RoundToNearestInt((float)((float)((float)v73.left - v19) / v27) + v19);
    v66.top = RoundToNearestInt((float)((float)((float)v73.top - v21) / v29) + v21);
    v66.right = RoundToNearestInt((float)((float)((float)v73.right - v19) / v27) + v19);
    v4 = 0;
    v66.bottom = RoundToNearestInt((float)((float)((float)v73.bottom - v21) / v29) + v21);
    v1 = (CAnimatedTransitionVisual *)((char *)this + 8);
    v73 = v66;
    v9 = 0;
    v32 = (float)((float)((float)((float)((float)v66.left - v19) * v27) + v19) - left) * *((float *)this + 191);
    v33 = (float)((float)((float)((float)((float)v66.top - v21) * v29) + v21) - (float)top) * *((float *)this + 192);
  }
  else
  {
    v31 = *(float *)&v66.top;
    v32 = 0.0;
    v30 = *(float *)&v66.left;
    v33 = 0.0;
  }
  v34 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v30 - 1.0)) & _xmm);
  v35 = (float)(*((_DWORD *)this + 214) + *((_DWORD *)this + 216)) * 0.5;
  v36 = (float)(*((_DWORD *)this + 215) + *((_DWORD *)this + 217)) * 0.5;
  if ( v34 >= 0.0000011920929
    || (v37 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v31 - 1.0)) & _xmm), v37 >= 0.0000011920929) )
  {
    *(_QWORD *)&v66.left = __PAIR64__(LODWORD(v31), LODWORD(v30));
    v7 = 1;
  }
  v38 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 197)) & _xmm);
  if ( v38 >= 0.0000011920929 )
  {
    v61 = 0;
    v4 = 1;
    if ( *((_DWORD *)this + 216) - *((_DWORD *)this + 214) >= 0 )
      v61 = *((_DWORD *)this + 216) - *((_DWORD *)this + 214);
    v62 = _mm_cvtsi32_si128(v61);
    v63 = 0;
    LODWORD(v64) = _mm_cvtepi32_ps(v62).m128_u32[0];
    if ( *((_DWORD *)this + 217) - *((_DWORD *)this + 215) >= 0 )
      v63 = *((_DWORD *)this + 217) - *((_DWORD *)this + 215);
    v70[0] = (float)(v64 * *((float *)this + 200)) + v17;
    v70[1] = (float)((float)v63 * *((float *)this + 201)) + v20;
  }
  v39 = *((float *)this + 188);
  v40 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v39) & _xmm);
  if ( v40 >= 0.0000011920929
    || (v41 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 189)) & _xmm), v41 >= 0.0000011920929)
    || (v42 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v32) & _xmm), v42 >= 0.0000011920929)
    || (v43 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v33) & _xmm), v43 >= 0.0000011920929) )
  {
    v44 = *((float *)this + 189) - v33;
    v9 = 1;
    v69[0] = v39 - v32;
    v69[1] = v44;
  }
  v45 = *((float *)this + 235);
  v98 = 0;
  v97 = 0.0;
  v96 = 0.0;
  v95 = 0;
  v93 = 0;
  v92 = 0;
  v91 = 0;
  v90 = 0;
  v88 = 0.0;
  v87 = 0;
  v86 = 0;
  v85 = 0.0;
  v99 = 1065353216;
  v94 = 1065353216;
  v89 = 1.0;
  v84 = 1.0;
  v46 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v45) & _xmm);
  if ( v46 >= 0.0000011920929 )
  {
    v78 = 0.0;
    v77 = 0.0;
    v76 = 0.0078125;
    v75 = 0.0;
    v82 = 0;
    LODWORD(v80) = LODWORD(v35) ^ _xmm;
    LODWORD(v81) = LODWORD(v36) ^ _xmm;
    v65 = 1;
    v83 = 1065353216;
    v79 = 1065353216LL;
    v74 = 1065353216LL;
    D2DMatrixMultiply((struct D2DMatrix *)&v84, (const struct D2DMatrix *)&v84, (const struct D2DMatrix *)&v74);
    D2DMatrixRotationZ((struct D2DMatrix *)&v74, *((float *)this + 235) * 0.017453292);
    D2DMatrixMultiply((struct D2DMatrix *)&v84, (const struct D2DMatrix *)&v84, (const struct D2DMatrix *)&v74);
    v78 = 0.0;
    v77 = 0.0;
    v76 = 0.0078125;
    v75 = 0.0;
    v82 = 0;
    v80 = v35;
    v81 = v36;
    v83 = 1065353216;
    v79 = 1065353216LL;
    v74 = 1065353216LL;
    D2DMatrixMultiply((struct D2DMatrix *)&v84, (const struct D2DMatrix *)&v84, (const struct D2DMatrix *)&v74);
  }
  if ( !v7 && !v4 && !v9
    || (v4 ? (v54 = *((float *)this + 197)) : (v54 = 0.0),
        (D2DMatrixTransformation2D(
           (struct D2DMatrix *)&v74,
           (const struct D2DVector2 *)((unsigned __int64)v71 & -(__int64)(v7 != 0)),
           0.0,
           (const struct D2DVector2 *)((unsigned __int64)&v66 & -(__int64)(v7 != 0)),
           (const struct D2DVector2 *)((unsigned __int64)v70 & -(__int64)(v4 != 0)),
           v54,
           (const struct D2DVector2 *)((unsigned __int64)v69 & -(__int64)(v9 != 0))),
         D2DMatrixMultiply((struct D2DMatrix *)&v84, (const struct D2DMatrix *)&v84, (const struct D2DMatrix *)&v74),
         !v4)
     && !v7
     && !v9) )
  {
    if ( !v65 )
      goto LABEL_25;
  }
  v55 = *((_QWORD *)this + 41);
  *(double *)&v74 = v84;
  v75 = v85;
  v76 = v88;
  v77 = v89;
  v78 = v96;
  *(double *)&v79 = v97;
  v56 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v55 + 16) + 1152LL))(
          *(_QWORD *)(v55 + 16),
          *(unsigned int *)(v55 + 24),
          &v74);
  v50 = v56;
  if ( v56 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0x56Fu);
    return v50;
  }
  v57 = CPushTransformInstruction::Create(*((struct CResource **)this + 41), &v67);
  v50 = v57;
  if ( v57 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v57, 0x571u);
    v6 = v67;
  }
  else
  {
    v6 = v67;
    v58 = CRenderDataVisual::AddInstruction(v1, v67);
    v50 = v58;
    if ( v58 >= 0 )
    {
LABEL_25:
      v47 = (struct CResource *)*((_QWORD *)this + 75);
      if ( !v47 )
        v47 = (struct CResource *)*((_QWORD *)this + 73);
      v48 = CDrawTileImageInstruction::Create(
              v47,
              &v73,
              (const struct tagPOINT *)this + 118,
              *((float *)this + 186),
              &v72);
      v49 = v72;
      v50 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x57Cu);
      }
      else
      {
        v51 = CRenderDataVisual::AddInstruction(v1, v72);
        v50 = v51;
        if ( v51 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v51, 0x57Du);
        }
        else
        {
          v52 = CAnimatedTransitionVisual::_AddOcclusionInstruction(this, &v73);
          v50 = v52;
          if ( v52 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v52, 0x57Eu);
          }
          else if ( v6 )
          {
            v59 = CPopInstruction::Create(&v68);
            v50 = v59;
            if ( v59 < 0 )
            {
              MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0x582u);
              v3 = v68;
            }
            else
            {
              v3 = v68;
              v60 = CRenderDataVisual::AddInstruction(v1, v68);
              v50 = v60;
              if ( v60 < 0 )
                MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0x583u);
            }
          }
        }
      }
      if ( v49 )
        CBaseObject::Release(v49);
      goto LABEL_33;
    }
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0x572u);
  }
LABEL_33:
  if ( v6 )
    CBaseObject::Release(v6);
  if ( v3 )
    CBaseObject::Release(v3);
  return v50;
}
