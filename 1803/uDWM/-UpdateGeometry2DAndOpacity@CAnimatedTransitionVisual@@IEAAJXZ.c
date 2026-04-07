/*
 * XREFs of ?UpdateGeometry2DAndOpacity@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180010F30
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180011698 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z @ 0x180005594 (-D2DMatrixTransformation2D@@YAPEAUD2DMatrix@@PEAU1@PEBUD2DVector2@@M11M1@Z.c)
 *     ?Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z @ 0x18000F61C (-Create@CDrawTileImageInstruction@@SAJPEAVCResource@@AEBUtagRECT@@AEBUtagPOINT@@MPEAPEAV1@@Z.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180010A44 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?InternalRelease@?$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ @ 0x180010A78 (-InternalRelease@-$ComPtr@VCSecondaryWindowRepresentation@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z @ 0x180010EAC (-_AddOcclusionInstruction@CAnimatedTransitionVisual@@IEAAJAEBUtagRECT@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180014004 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z @ 0x180017F28 (-AddInstruction@CRenderDataVisual@@QEAAJPEAVCRenderDataInstruction@@@Z.c)
 *     ?SetOpacity@CVisual@@UEAAXN@Z @ 0x180026940 (-SetOpacity@CVisual@@UEAAXN@Z.c)
 *     ?D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z @ 0x180032E70 (-D2DMatrixMultiply@@YAPEAUD2DMatrix@@PEAU1@PEBU1@1@Z.c)
 *     ?Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z @ 0x180033C78 (-Create@CPushTransformInstruction@@SAJPEAVCResource@@PEAPEAV1@@Z.c)
 *     ?Create@CPopInstruction@@SAJPEAPEAV1@@Z @ 0x1800355B0 (-Create@CPopInstruction@@SAJPEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x180048EF0 (__security_check_cookie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180049FC4 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18004B390 (_guard_dispatch_icall_nop.c)
 *     ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z @ 0x1800A9650 (-D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@M@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DAndOpacity(CAnimatedTransitionVisual *this)
{
  CRenderDataVisual *v1; // r15
  CBaseObject *v3; // rbx
  char v4; // si
  int v5; // edx
  CBaseObject *v6; // rdi
  char v7; // r12
  __int64 v8; // xmm0_8
  char v9; // r14
  __m128i v10; // xmm6
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // ecx
  float v14; // xmm5_4
  __m128i v15; // xmm15
  unsigned int v16; // eax
  struct tagRECT v17; // xmm0
  float v18; // xmm6_4
  __m128i v19; // xmm9
  int v20; // eax
  float v21; // xmm9_4
  float v22; // xmm15_4
  float v23; // xmm11_4
  float v24; // xmm10_4
  float v25; // xmm11_4
  float left; // xmm7_4
  float v27; // xmm15_4
  float v28; // xmm14_4
  float v29; // xmm8_4
  float v30; // xmm13_4
  float top; // xmm6_4
  LONG v32; // eax
  float v33; // xmm12_4
  float v34; // xmm7_4
  float v35; // xmm7_4
  int v36; // ecx
  float v37; // xmm8_4
  float v38; // xmm10_4
  float v39; // xmm0_4
  float v40; // xmm2_4
  float v41; // xmm1_4
  float v42; // xmm5_4
  float v43; // xmm1_4
  float v44; // xmm2_4
  float v45; // xmm1_4
  float v46; // xmm1_4
  float v47; // xmm1_4
  double v48; // xmm0_8
  float v49; // xmm1_4
  struct CResource *v50; // rsi
  int v51; // eax
  unsigned int v52; // esi
  float v54; // xmm0_4
  __int64 v55; // rax
  int v56; // eax
  int v57; // eax
  float v58; // xmm9_4
  int v59; // ecx
  int v60; // eax
  __int64 v61; // rdx
  int v62; // [rsp+28h] [rbp-E0h]
  char v63; // [rsp+48h] [rbp-C0h]
  struct tagRECT v64; // [rsp+58h] [rbp-B0h] BYREF
  float v65[2]; // [rsp+68h] [rbp-A0h] BYREF
  float v66[2]; // [rsp+70h] [rbp-98h] BYREF
  struct CRenderDataInstruction *v67; // [rsp+78h] [rbp-90h] BYREF
  struct CRenderDataInstruction *v68; // [rsp+80h] [rbp-88h] BYREF
  struct CPopInstruction *v69; // [rsp+88h] [rbp-80h] BYREF
  _DWORD v70[2]; // [rsp+90h] [rbp-78h] BYREF
  struct tagRECT v71; // [rsp+98h] [rbp-70h] BYREF
  __int64 v72; // [rsp+A8h] [rbp-60h] BYREF
  double v73; // [rsp+B0h] [rbp-58h]
  double v74; // [rsp+B8h] [rbp-50h]
  double v75; // [rsp+C0h] [rbp-48h]
  double v76; // [rsp+C8h] [rbp-40h]
  __int64 v77; // [rsp+D0h] [rbp-38h]
  float v78; // [rsp+D8h] [rbp-30h]
  float v79; // [rsp+DCh] [rbp-2Ch]
  int v80; // [rsp+E0h] [rbp-28h]
  int v81; // [rsp+E4h] [rbp-24h]
  float v82; // [rsp+E8h] [rbp-20h] BYREF
  float v83; // [rsp+ECh] [rbp-1Ch]
  int v84; // [rsp+F0h] [rbp-18h]
  int v85; // [rsp+F4h] [rbp-14h]
  float v86; // [rsp+F8h] [rbp-10h]
  float v87; // [rsp+FCh] [rbp-Ch]
  int v88; // [rsp+100h] [rbp-8h]
  int v89; // [rsp+104h] [rbp-4h]
  int v90; // [rsp+108h] [rbp+0h]
  int v91; // [rsp+10Ch] [rbp+4h]
  int v92; // [rsp+110h] [rbp+8h]
  int v93; // [rsp+114h] [rbp+Ch]
  float v94; // [rsp+118h] [rbp+10h]
  float v95; // [rsp+11Ch] [rbp+14h]
  int v96; // [rsp+120h] [rbp+18h]
  int v97; // [rsp+124h] [rbp+1Ch]
  wil::details::in1diag3 *retaddr; // [rsp+200h] [rbp+F8h]

  v1 = (CAnimatedTransitionVisual *)((char *)this + 8);
  CVisual::SetOpacity((CAnimatedTransitionVisual *)((char *)this + 8), 0.9999899864196777);
  v67 = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = *((_DWORD *)this + 214);
  v6 = 0LL;
  v7 = 0;
  v8 = *(_QWORD *)((char *)this + 764);
  v9 = 0;
  v10 = _mm_cvtsi32_si128(*((_DWORD *)this + 215));
  v11 = *((_DWORD *)this + 216) - v5;
  v64.right = *((_DWORD *)this + 193);
  v12 = 0;
  if ( v11 >= 0 )
    v12 = v11;
  v13 = *((_DWORD *)this + 217) - *((_DWORD *)this + 215);
  v14 = (float)v5;
  v63 = 0;
  v68 = 0LL;
  v69 = 0LL;
  v15 = _mm_cvtsi32_si128(v12);
  v16 = 0;
  if ( v13 >= 0 )
    v16 = v13;
  *(_QWORD *)&v64.left = v8;
  v17 = *(struct tagRECT *)((char *)this + 856);
  v18 = _mm_cvtepi32_ps(v10).m128_f32[0];
  v19 = _mm_cvtsi32_si128(v16);
  v20 = *((_DWORD *)this + 238);
  v65[0] = (float)v5;
  v66[0] = v18;
  v21 = _mm_cvtepi32_ps(v19).m128_f32[0];
  v22 = _mm_cvtepi32_ps(v15).m128_f32[0];
  v23 = v22 * *((float *)this + 194);
  v24 = (float)(v21 * *((float *)this + 195)) + v18;
  v71 = v17;
  v25 = v23 + v14;
  *(float *)&v70[1] = v24;
  *(float *)v70 = v25;
  if ( v20 || *((_DWORD *)this + 239) )
  {
    left = (float)v71.left;
    v27 = v22 / (float)((float)v20 / *((float *)this + 203));
    v28 = *(float *)&v64.left * v27;
    v29 = v21 / (float)((float)*((int *)this + 239) / *((float *)this + 204));
    v30 = *(float *)&v64.top * v29;
    v64.left = RoundToNearestInt((float)((float)((float)v71.left - v25) / v27) + v25);
    top = (float)v71.top;
    v64.top = RoundToNearestInt((float)((float)((float)v71.top - v24) / v29) + v24);
    v64.right = RoundToNearestInt((float)((float)((float)v71.right - v25) / v27) + v25);
    v32 = RoundToNearestInt((float)((float)((float)v71.bottom - v24) / v29) + v24);
    v14 = v65[0];
    v5 = *((_DWORD *)this + 214);
    v4 = 0;
    v64.bottom = v32;
    v1 = (CAnimatedTransitionVisual *)((char *)this + 8);
    v71 = v64;
    v9 = 0;
    v33 = (float)((float)((float)((float)((float)v64.left - v25) * v27) + v25) - left) * *((float *)this + 191);
    v34 = (float)((float)((float)((float)v64.top - v24) * v29) + v24) - top;
    v18 = v66[0];
    v35 = v34 * *((float *)this + 192);
  }
  else
  {
    v30 = *(float *)&v64.top;
    v33 = 0.0;
    v28 = *(float *)&v64.left;
    v35 = 0.0;
  }
  v36 = *((_DWORD *)this + 216);
  v37 = (float)(v36 + v5) * 0.5;
  v38 = (float)(*((_DWORD *)this + 215) + *((_DWORD *)this + 217)) * 0.5;
  v39 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v28 - 1.0)) & _xmm);
  if ( v39 >= 0.0000011920929
    || (v40 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v30 - 1.0)) & _xmm), v40 >= 0.0000011920929) )
  {
    *(_QWORD *)&v64.left = __PAIR64__(LODWORD(v30), LODWORD(v28));
    v7 = 1;
  }
  v41 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*((float *)this + 197)) & _xmm);
  if ( v41 >= 0.0000011920929 )
  {
    v58 = v21 * *((float *)this + 201);
    v59 = v36 - v5;
    v60 = 0;
    v4 = 1;
    if ( v59 >= 0 )
      v60 = v59;
    v65[1] = v58 + v18;
    v65[0] = (float)((float)v60 * *((float *)this + 200)) + v14;
  }
  v42 = *((float *)this + 188);
  v43 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v42) & _xmm);
  if ( v43 >= 0.0000011920929 )
  {
    v44 = *((float *)this + 189);
  }
  else
  {
    v44 = *((float *)this + 189);
    v45 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v44) & _xmm);
    if ( v45 < 0.0000011920929 )
    {
      v46 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v33) & _xmm);
      if ( v46 < 0.0000011920929 )
      {
        v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v35) & _xmm);
        if ( v47 < 0.0000011920929 )
          goto LABEL_14;
      }
    }
  }
  v9 = 1;
  v66[0] = v42 - v33;
  v66[1] = v44 - v35;
LABEL_14:
  v96 = 0;
  v95 = 0.0;
  v94 = 0.0;
  v93 = 0;
  v91 = 0;
  v90 = 0;
  v89 = 0;
  v88 = 0;
  v86 = 0.0;
  v85 = 0;
  v84 = 0;
  v83 = 0.0;
  v48 = *((float *)this + 235);
  v97 = 1065353216;
  v92 = 1065353216;
  v87 = 1.0;
  v82 = 1.0;
  v49 = COERCE_DOUBLE(*(_QWORD *)&v48 & _xmm);
  if ( v49 >= 0.0000011920929 )
  {
    v76 = 0.0;
    v75 = 0.0;
    v74 = 0.0078125;
    v73 = 0.0;
    v80 = 0;
    LODWORD(v78) = LODWORD(v37) ^ _xmm;
    v63 = 1;
    LODWORD(v79) = LODWORD(v38) ^ _xmm;
    v81 = 1065353216;
    v77 = 1065353216LL;
    v72 = 1065353216LL;
    D2DMatrixMultiply((struct D2DMatrix *)&v82, (const struct D2DMatrix *)&v82, (const struct D2DMatrix *)&v72);
    D2DMatrixRotationZ((struct D2DMatrix *)&v72, *((float *)this + 235) * 0.017453292);
    D2DMatrixMultiply((struct D2DMatrix *)&v82, (const struct D2DMatrix *)&v82, (const struct D2DMatrix *)&v72);
    v76 = 0.0;
    v75 = 0.0;
    v74 = 0.0078125;
    v73 = 0.0;
    v80 = 0;
    v78 = v37;
    v79 = v38;
    v81 = 1065353216;
    v77 = 1065353216LL;
    v72 = 1065353216LL;
    D2DMatrixMultiply((struct D2DMatrix *)&v82, (const struct D2DMatrix *)&v82, (const struct D2DMatrix *)&v72);
  }
  if ( !v7 && !v4 && !v9
    || (v4 ? (v54 = *((float *)this + 197)) : (v54 = 0.0),
        (D2DMatrixTransformation2D(
           (struct D2DMatrix *)&v72,
           (const struct D2DVector2 *)((unsigned __int64)v70 & -(__int64)(v7 != 0)),
           0.0,
           (const struct D2DVector2 *)((unsigned __int64)&v64 & -(__int64)(v7 != 0)),
           (const struct D2DVector2 *)((unsigned __int64)v65 & -(__int64)(v4 != 0)),
           v54,
           (const struct D2DVector2 *)((unsigned __int64)v66 & -(__int64)(v9 != 0))),
         D2DMatrixMultiply((struct D2DMatrix *)&v82, (const struct D2DMatrix *)&v82, (const struct D2DMatrix *)&v72),
         !v4)
     && !v7
     && !v9) )
  {
    if ( !v63 )
      goto LABEL_20;
  }
  v55 = *((_QWORD *)this + 41);
  *(double *)&v72 = v82;
  v73 = v83;
  v74 = v86;
  v75 = v87;
  v76 = v94;
  *(double *)&v77 = v95;
  v51 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v55 + 16) + 1168LL))(
          *(_QWORD *)(v55 + 16),
          *(unsigned int *)(v55 + 24),
          &v72);
  v52 = v51;
  if ( v51 < 0 )
  {
    v61 = 1373LL;
    goto LABEL_60;
  }
  v56 = CPushTransformInstruction::Create(*((struct CResource **)this + 41), &v68);
  v52 = v56;
  if ( v56 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x55F,
      (unsigned int)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
      (const char *)(unsigned int)v56,
      v62);
    v3 = v68;
    goto LABEL_27;
  }
  v3 = v68;
  v51 = CRenderDataVisual::AddInstruction(v1, v68);
  v52 = v51;
  if ( v51 < 0 )
  {
    v61 = 1376LL;
  }
  else
  {
LABEL_20:
    v50 = (struct CResource *)*((_QWORD *)this + 75);
    if ( !v50 )
      v50 = (struct CResource *)*((_QWORD *)this + 73);
    Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v67);
    v51 = CDrawTileImageInstruction::Create(
            v50,
            &v71,
            (const struct tagPOINT *)this + 118,
            *((float *)this + 186),
            &v67);
    v52 = v51;
    if ( v51 < 0 )
    {
      v61 = 1386LL;
    }
    else
    {
      v51 = CRenderDataVisual::AddInstruction(v1, v67);
      v52 = v51;
      if ( v51 < 0 )
      {
        v61 = 1387LL;
      }
      else
      {
        v51 = CAnimatedTransitionVisual::_AddOcclusionInstruction(this, &v71);
        v52 = v51;
        if ( v51 < 0 )
        {
          v61 = 1388LL;
        }
        else
        {
          if ( !v3 )
          {
LABEL_26:
            v52 = 0;
            goto LABEL_27;
          }
          v57 = CPopInstruction::Create(&v69);
          v52 = v57;
          if ( v57 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x570,
              (unsigned int)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
              (const char *)(unsigned int)v57,
              v62);
            v6 = v69;
            goto LABEL_27;
          }
          v6 = v69;
          v51 = CRenderDataVisual::AddInstruction(v1, v69);
          v52 = v51;
          if ( v51 >= 0 )
            goto LABEL_26;
          v61 = 1393LL;
        }
      }
    }
  }
LABEL_60:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v61,
    (unsigned int)"windows\\dwm\\udwm\\animatedtransitionvisual.cpp",
    (const char *)(unsigned int)v51,
    v62);
LABEL_27:
  if ( v6 )
    CBaseObject::Release(v6);
  if ( v3 )
    CBaseObject::Release(v3);
  Microsoft::WRL::ComPtr<CSecondaryWindowRepresentation>::InternalRelease(&v67);
  return v52;
}
