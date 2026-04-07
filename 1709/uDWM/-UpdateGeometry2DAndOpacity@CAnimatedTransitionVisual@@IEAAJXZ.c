/*
 * XREFs of ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18002E0AC
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x18002E900 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x18000B5E8 (-D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180012D20 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180015220 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180018E30 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180024C90 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180025414 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18002BDF0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     ?_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z @ 0x18002E02C (-_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18002F548 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x18002FB14 (-Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x18002FDC0 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180045230 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180046790 (_guard_dispatch_icall_nop.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x1800A0700 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DAndOpacity(CAnimatedTransitionVisual *this)
{
  CRenderDataVisual *v1; // rsi
  __int64 v3; // xmm0_8
  char v4; // bl
  char v5; // r13
  int v6; // ecx
  char v7; // di
  __m128i v8; // xmm9
  CBaseObject *v9; // r15
  CBaseObject *v10; // r12
  unsigned int v11; // eax
  int v12; // ecx
  __m128i v13; // xmm0
  __m128i v14; // xmm10
  unsigned int v15; // eax
  float v16; // xmm9_4
  __m128i v17; // xmm11
  int v18; // eax
  float v19; // xmm11_4
  float v20; // xmm10_4
  float v21; // xmm13_4
  float v22; // xmm12_4
  float v23; // xmm12_4
  float v24; // xmm8_4
  float v25; // xmm9_4
  float left; // xmm7_4
  float v27; // xmm15_4
  float v28; // xmm14_4
  float top; // xmm6_4
  float v30; // xmm5_4
  float v31; // xmm8_4
  float v32; // xmm5_4
  float v33; // xmm8_4
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
  float v54; // xmm11_4
  float v55; // xmm0_4
  __int64 v56; // rax
  int v57; // eax
  int v58; // eax
  int v59; // eax
  int v60; // eax
  int v61; // eax
  char v62; // [rsp+48h] [rbp-C0h]
  struct tagRECT v63; // [rsp+58h] [rbp-B0h] BYREF
  float v64[2]; // [rsp+68h] [rbp-A0h] BYREF
  float v65[2]; // [rsp+70h] [rbp-98h] BYREF
  struct CRenderDataInstruction *v66; // [rsp+78h] [rbp-90h] BYREF
  struct CPopInstruction *v67; // [rsp+80h] [rbp-88h] BYREF
  _DWORD v68[2]; // [rsp+88h] [rbp-80h] BYREF
  struct CRenderDataInstruction *v69; // [rsp+90h] [rbp-78h] BYREF
  struct tagRECT v70; // [rsp+98h] [rbp-70h] BYREF
  __int64 v71; // [rsp+A8h] [rbp-60h] BYREF
  double v72; // [rsp+B0h] [rbp-58h]
  double v73; // [rsp+B8h] [rbp-50h]
  double v74; // [rsp+C0h] [rbp-48h]
  double v75; // [rsp+C8h] [rbp-40h]
  __int64 v76; // [rsp+D0h] [rbp-38h]
  float v77; // [rsp+D8h] [rbp-30h]
  float v78; // [rsp+DCh] [rbp-2Ch]
  int v79; // [rsp+E0h] [rbp-28h]
  int v80; // [rsp+E4h] [rbp-24h]
  float v81; // [rsp+E8h] [rbp-20h] BYREF
  float v82; // [rsp+ECh] [rbp-1Ch]
  int v83; // [rsp+F0h] [rbp-18h]
  int v84; // [rsp+F4h] [rbp-14h]
  float v85; // [rsp+F8h] [rbp-10h]
  float v86; // [rsp+FCh] [rbp-Ch]
  int v87; // [rsp+100h] [rbp-8h]
  int v88; // [rsp+104h] [rbp-4h]
  int v89; // [rsp+108h] [rbp+0h]
  int v90; // [rsp+10Ch] [rbp+4h]
  int v91; // [rsp+110h] [rbp+8h]
  int v92; // [rsp+114h] [rbp+Ch]
  float v93; // [rsp+118h] [rbp+10h]
  float v94; // [rsp+11Ch] [rbp+14h]
  int v95; // [rsp+120h] [rbp+18h]
  int v96; // [rsp+124h] [rbp+1Ch]

  v1 = (CAnimatedTransitionVisual *)((char *)this + 8);
  CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), 0.9999899864196777);
  v3 = *(_QWORD *)((char *)this + 764);
  v4 = 0;
  v5 = 0;
  v6 = *((_DWORD *)this + 216) - *((_DWORD *)this + 214);
  v7 = 0;
  v8 = _mm_cvtsi32_si128(*((_DWORD *)this + 214));
  v9 = 0LL;
  v63.right = *((_DWORD *)this + 193);
  v10 = 0LL;
  *(_QWORD *)&v63.left = v3;
  v11 = 0;
  if ( v6 >= 0 )
    v11 = v6;
  v62 = 0;
  v12 = *((_DWORD *)this + 217) - *((_DWORD *)this + 215);
  v70 = *(struct tagRECT *)((char *)this + 856);
  v69 = 0LL;
  v13 = _mm_cvtsi32_si128(*((_DWORD *)this + 215));
  v14 = _mm_cvtsi32_si128(v11);
  v15 = 0;
  if ( v12 >= 0 )
    v15 = v12;
  v66 = 0LL;
  v16 = _mm_cvtepi32_ps(v8).m128_f32[0];
  v67 = 0LL;
  v17 = _mm_cvtsi32_si128(v15);
  v18 = *((_DWORD *)this + 238);
  v64[0] = v16;
  v19 = _mm_cvtepi32_ps(v17).m128_f32[0];
  v65[0] = _mm_cvtepi32_ps(v13).m128_f32[0];
  v20 = _mm_cvtepi32_ps(v14).m128_f32[0];
  v21 = (float)(v19 * *((float *)this + 195)) + v65[0];
  v22 = v20 * *((float *)this + 194);
  *(float *)&v68[1] = v21;
  v23 = v22 + v16;
  *(float *)v68 = v23;
  if ( v18 || *((_DWORD *)this + 239) )
  {
    v24 = v20 / (float)((float)v18 / *((float *)this + 203));
    v25 = v19 / (float)((float)*((int *)this + 239) / *((float *)this + 204));
    left = (float)v70.left;
    v27 = *(float *)&v63.left * v24;
    v28 = *(float *)&v63.top * v25;
    v63.left = RoundToNearestInt((float)((float)((float)v70.left - v23) / v24) + v23);
    top = (float)v70.top;
    v63.top = RoundToNearestInt((float)((float)((float)v70.top - v21) / v25) + v21);
    v63.right = RoundToNearestInt((float)((float)((float)v70.right - v23) / v24) + v23);
    v4 = 0;
    v63.bottom = RoundToNearestInt((float)((float)((float)v70.bottom - v21) / v25) + v21);
    v1 = (CAnimatedTransitionVisual *)((char *)this + 8);
    v70 = v63;
    v30 = (float)((float)v63.left - v23) * v24;
    v7 = 0;
    v31 = (float)((float)v63.top - v21) * v25;
    v16 = v64[0];
    v32 = (float)((float)(v30 + v23) - left) * *((float *)this + 191);
    v33 = (float)((float)(v31 + v21) - top) * *((float *)this + 192);
  }
  else
  {
    v28 = *(float *)&v63.top;
    v32 = 0.0;
    v27 = *(float *)&v63.left;
    v33 = 0.0;
  }
  v34 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v27 - 1.0)) & _xmm);
  v35 = (float)(*((_DWORD *)this + 214) + *((_DWORD *)this + 216)) * 0.5;
  v36 = (float)(*((_DWORD *)this + 215) + *((_DWORD *)this + 217)) * 0.5;
  if ( v34 >= 0.0000011920929
    || (v37 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v28 - 1.0)) & _xmm), v37 >= 0.0000011920929) )
  {
    *(_QWORD *)&v63.left = __PAIR64__(LODWORD(v28), LODWORD(v27));
    v5 = 1;
  }
  v38 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 197)) & _xmm);
  if ( v38 >= 0.0000011920929 )
  {
    v4 = 1;
    v54 = (float)(v19 * *((float *)this + 201)) + v65[0];
    v64[0] = (float)(v20 * *((float *)this + 200)) + v16;
    v64[1] = v54;
  }
  v39 = *((float *)this + 188);
  v40 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v39) & _xmm);
  if ( v40 >= 0.0000011920929
    || (v41 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 189)) & _xmm), v41 >= 0.0000011920929)
    || (v42 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v32) & _xmm), v42 >= 0.0000011920929)
    || (v43 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v33) & _xmm), v43 >= 0.0000011920929) )
  {
    v44 = *((float *)this + 189) - v33;
    v7 = 1;
    v65[0] = v39 - v32;
    v65[1] = v44;
  }
  v45 = *((float *)this + 235);
  v95 = 0;
  v94 = 0.0;
  v93 = 0.0;
  v92 = 0;
  v90 = 0;
  v89 = 0;
  v88 = 0;
  v87 = 0;
  v85 = 0.0;
  v84 = 0;
  v83 = 0;
  v82 = 0.0;
  v96 = 1065353216;
  v91 = 1065353216;
  v86 = 1.0;
  v81 = 1.0;
  v46 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v45) & _xmm);
  if ( v46 >= 0.0000011920929 )
  {
    v75 = 0.0;
    v74 = 0.0;
    v73 = 0.0078125;
    v72 = 0.0;
    v79 = 0;
    LODWORD(v77) = LODWORD(v35) ^ _xmm;
    LODWORD(v78) = LODWORD(v36) ^ _xmm;
    v62 = 1;
    v80 = 1065353216;
    v76 = 1065353216LL;
    v71 = 1065353216LL;
    D2DMatrixMultiply((struct D2DMatrix *)&v81, (const struct D2DMatrix *)&v81, (const struct D2DMatrix *)&v71);
    D2DMatrixRotationZ((struct D2DMatrix *)&v71, *((float *)this + 235) * 0.017453292);
    D2DMatrixMultiply((struct D2DMatrix *)&v81, (const struct D2DMatrix *)&v81, (const struct D2DMatrix *)&v71);
    v75 = 0.0;
    v74 = 0.0;
    v73 = 0.0078125;
    v72 = 0.0;
    v79 = 0;
    v77 = v35;
    v78 = v36;
    v80 = 1065353216;
    v76 = 1065353216LL;
    v71 = 1065353216LL;
    D2DMatrixMultiply((struct D2DMatrix *)&v81, (const struct D2DMatrix *)&v81, (const struct D2DMatrix *)&v71);
  }
  if ( !v5 && !v4 && !v7
    || (v4 ? (v55 = *((float *)this + 197)) : (v55 = 0.0),
        (D2DMatrixTransformation2D(
           (struct D2DMatrix *)&v71,
           (const struct D2DVector2 *)((unsigned __int64)v68 & -(__int64)(v5 != 0)),
           0.0,
           (const struct D2DVector2 *)((unsigned __int64)&v63 & -(__int64)(v5 != 0)),
           (const struct D2DVector2 *)((unsigned __int64)v64 & -(__int64)(v4 != 0)),
           v55,
           (const struct D2DVector2 *)((unsigned __int64)v65 & -(__int64)(v7 != 0))),
         D2DMatrixMultiply((struct D2DMatrix *)&v81, (const struct D2DMatrix *)&v81, (const struct D2DMatrix *)&v71),
         !v4)
     && !v5
     && !v7) )
  {
    if ( !v62 )
      goto LABEL_22;
  }
  v56 = *((_QWORD *)this + 41);
  *(double *)&v71 = v81;
  v72 = v82;
  v73 = v85;
  v74 = v86;
  v75 = v93;
  *(double *)&v76 = v94;
  v57 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v56 + 16) + 1152LL))(
          *(_QWORD *)(v56 + 16),
          *(unsigned int *)(v56 + 24),
          &v71);
  v50 = v57;
  if ( v57 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v57, 0x56Fu);
    return v50;
  }
  v58 = CPushTransformInstruction::Create(*((struct CResource **)this + 41), &v66);
  v50 = v58;
  if ( v58 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v58, 0x571u);
    v9 = v66;
  }
  else
  {
    v9 = v66;
    v59 = CRenderDataVisual::AddInstruction(v1, v66);
    v50 = v59;
    if ( v59 >= 0 )
    {
LABEL_22:
      v47 = (struct CResource *)*((_QWORD *)this + 75);
      if ( !v47 )
        v47 = (struct CResource *)*((_QWORD *)this + 73);
      v48 = CDrawTileImageInstruction::Create(
              v47,
              &v70,
              (const struct tagPOINT *)this + 118,
              *((float *)this + 186),
              &v69);
      v49 = v69;
      v50 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v48, 0x57Cu);
      }
      else
      {
        v51 = CRenderDataVisual::AddInstruction(v1, v69);
        v50 = v51;
        if ( v51 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v51, 0x57Du);
        }
        else
        {
          v52 = CAnimatedTransitionVisual::_AddOcclusionInstruction(this, &v70);
          v50 = v52;
          if ( v52 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v52, 0x57Eu);
          }
          else if ( v9 )
          {
            v60 = CPopInstruction::Create(&v67);
            v50 = v60;
            if ( v60 < 0 )
            {
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v60, 0x582u);
              v10 = v67;
            }
            else
            {
              v10 = v67;
              v61 = CRenderDataVisual::AddInstruction(v1, v67);
              v50 = v61;
              if ( v61 < 0 )
                MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v61, 0x583u);
            }
          }
        }
      }
      if ( v49 )
        CBaseObject::Release(v49);
      goto LABEL_30;
    }
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v59, 0x572u);
  }
LABEL_30:
  if ( v9 )
    CBaseObject::Release(v9);
  if ( v10 )
    CBaseObject::Release(v10);
  return v50;
}
