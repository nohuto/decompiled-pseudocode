/*
 * XREFs of ?DrawImageResource_TileMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@MAEBUMilPoint2F@@AEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800561AC
 * Callers:
 *     ?TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawListEntryBuilder@@_NIV?$span@$$CBE$0?0@gsl@@PEA_N@Z @ 0x180056940 (-TryDrawCommandAsDrawList@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListCache@@PEAVCDrawLi.c)
 * Callees:
 *     ?DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_NPEAVCImageSource@@PEBUD2D_RECT_F@@4M4@Z @ 0x180055E70 (-DrawImageResource_FillMode@CRenderData@@AEAAJPEAVCDrawingContext@@PEAVCDrawListEntryBuilder@@_N.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x18005E450 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 *     fmodf_0 @ 0x1800DD3CB (fmodf_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800DD420 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRenderData::DrawImageResource_TileMode(
        __int64 a1,
        struct CDrawingContext *a2,
        struct CDrawListEntryBuilder *a3,
        char a4,
        struct CImageSource *a5,
        FLOAT a6,
        float *a7,
        float *a8)
{
  int v11; // eax
  unsigned int v12; // edi
  float right; // xmm11_4
  float bottom; // xmm9_4
  float v15; // xmm0_4
  float v16; // xmm10_4
  CRenderData *v17; // rcx
  float v18; // xmm0_4
  float v19; // xmm8_4
  float v20; // xmm13_4
  float v21; // xmm1_4
  float v22; // xmm12_4
  float v23; // xmm1_4
  float v24; // xmm7_4
  float v25; // xmm6_4
  float v26; // xmm2_4
  float v27; // xmm3_4
  float v28; // xmm0_4
  bool v29; // zf
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // xmm3_4
  float v35; // xmm2_4
  int v36; // eax
  float v37; // xmm0_4
  float v38; // xmm0_4
  struct D2D_RECT_F v40; // [rsp+58h] [rbp-B0h] BYREF
  struct D2D_RECT_F v41; // [rsp+68h] [rbp-A0h] BYREF
  struct D2D_RECT_F v42; // [rsp+78h] [rbp-90h] BYREF
  struct D2D_RECT_F v43; // [rsp+88h] [rbp-80h] BYREF

  v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, struct D2D_RECT_F *))(*((_QWORD *)a5 + 1) + 120LL))(
          (__int64)a5 + 8,
          0LL,
          0LL,
          &v43);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x38Cu);
  }
  else
  {
    right = v43.right;
    bottom = v43.bottom;
    v40 = v43;
    v41 = v43;
    v15 = fmodf_0(*a7, v43.right);
    v16 = v15;
    if ( v15 < 0.0 )
      v16 = v15 + right;
    v18 = fmodf_0(a7[1], bottom);
    v19 = v18;
    if ( v18 < 0.0 )
      v19 = v18 + bottom;
    v20 = right - v16;
    v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(right - v16)) & _xmm);
    if ( v21 < 0.0000011920929 )
      v20 = right;
    v22 = bottom - v19;
    v23 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(bottom - v19)) & _xmm);
    if ( v23 < 0.0000011920929 )
      v22 = bottom;
    v24 = a8[1];
    if ( a8[3] > v24 )
    {
      while ( 1 )
      {
        v25 = *a8;
        v26 = a8[2];
        if ( v26 > *a8 )
          break;
LABEL_29:
        if ( v24 == a8[1] )
          v38 = v22;
        else
          v38 = bottom;
        v24 = v24 + v38;
        if ( a8[3] <= v24 )
          return v12;
      }
      v27 = *a8;
      while ( 1 )
      {
        v42.left = v25;
        v42.top = v24;
        if ( v25 == v27 )
          v28 = v20;
        else
          v28 = right;
        v29 = v24 == a8[1];
        v30 = v28 + v25;
        v42.right = v30;
        if ( v29 )
          v31 = v22;
        else
          v31 = bottom;
        v32 = v31 + v24;
        v42.bottom = v32;
        if ( v26 <= v30 )
        {
          v42.right = v26;
          v30 = v26;
        }
        v33 = a8[3];
        if ( v33 <= v32 )
        {
          v42.bottom = a8[3];
          v32 = v33;
        }
        v34 = v25 == v27 ? v16 : 0.0;
        v29 = v24 == a8[1];
        v40.left = v34;
        v35 = v29 ? v19 : 0.0;
        v40.top = v35;
        v40.right = (float)(v30 - v25) + v34;
        v40.bottom = (float)(v32 - v24) + v35;
        v36 = CRenderData::DrawImageResource_FillMode(v17, a2, a3, a4, a5, &v40, &v42, a6, &v41);
        v12 = v36;
        if ( v36 < 0 )
          break;
        v27 = *a8;
        if ( v25 == *a8 )
          v37 = v20;
        else
          v37 = right;
        v26 = a8[2];
        v25 = v25 + v37;
        if ( v26 <= v25 )
          goto LABEL_29;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v36, 0x3D7u);
    }
  }
  return v12;
}
