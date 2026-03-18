/*
 * XREFs of ?AreCasterAndReceiverParallel@CProjectedShadow@@AEBA_NPEAVCDrawingContext@@@Z @ 0x1801B3D34
 * Callers:
 *     ?GetShadowPath@CProjectedShadow@@AEBA?AW4ShadowPath@@PEAVCDrawingContext@@@Z @ 0x1801B5C1C (-GetShadowPath@CProjectedShadow@@AEBA-AW4ShadowPath@@PEAVCDrawingContext@@@Z.c)
 * Callees:
 *     ?GetPlaneOfVisual@CProjectedShadow@@CA?AUD2D_VECTOR_4F@@PEAVCVisual@@AEAVCMILMatrix@@@Z @ 0x1801B589C (-GetPlaneOfVisual@CProjectedShadow@@CA-AUD2D_VECTOR_4F@@PEAVCVisual@@AEAVCMILMatrix@@@Z.c)
 *     ?GetVisualToAnotherVisual@CProjectedShadow@@CA?AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVisual@@1@Z @ 0x1801B5DC8 (-GetVisualToAnotherVisual@CProjectedShadow@@CA-AVCMILMatrix@@PEBVCDrawingContext@@PEAVCVisual@@1.c)
 */

char __fastcall CProjectedShadow::AreCasterAndReceiverParallel(CProjectedShadow *this, struct CDrawingContext *a2)
{
  char v4; // si
  __int64 v5; // rax
  struct CVisual *v6; // rdx
  __m128 v7; // xmm9
  __int64 VisualToAnotherVisual; // rax
  __int128 v9; // xmm1
  __int128 v10; // xmm0
  __int128 v11; // xmm1
  __int64 v12; // rax
  __m128 v13; // xmm10
  float v14; // xmm7_4
  float v15; // xmm5_4
  float v16; // xmm8_4
  float v17; // xmm6_4
  float v18; // xmm2_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm1_4
  float v22; // xmm1_4
  struct D2D_VECTOR_4F v24; // [rsp+38h] [rbp-D0h] BYREF
  __int128 v25; // [rsp+48h] [rbp-C0h] BYREF
  __int128 v26; // [rsp+58h] [rbp-B0h]
  __int128 v27; // [rsp+68h] [rbp-A0h]
  __int128 v28; // [rsp+78h] [rbp-90h]
  int v29; // [rsp+88h] [rbp-80h]
  _BYTE v30[160]; // [rsp+98h] [rbp-70h] BYREF

  v4 = 0;
  v5 = *((_QWORD *)this + 9);
  v25 = _xmm;
  v29 = 32085;
  v6 = *(struct CVisual **)(v5 + 56);
  v26 = _xmm;
  v27 = _xmm;
  v28 = _xmm;
  v7 = (__m128)_mm_loadu_si128((const __m128i *)CProjectedShadow::GetPlaneOfVisual(&v24, v6, (struct CMILMatrix *)&v25));
  VisualToAnotherVisual = CProjectedShadow::GetVisualToAnotherVisual(
                            v30,
                            a2,
                            *(_QWORD *)(*((_QWORD *)this + 10) + 56LL),
                            *(_QWORD *)(*((_QWORD *)this + 9) + 56LL));
  v9 = *(_OWORD *)(VisualToAnotherVisual + 16);
  v25 = *(_OWORD *)VisualToAnotherVisual;
  v10 = *(_OWORD *)(VisualToAnotherVisual + 32);
  v26 = v9;
  v11 = *(_OWORD *)(VisualToAnotherVisual + 48);
  v29 = *(_DWORD *)(VisualToAnotherVisual + 64);
  v12 = *((_QWORD *)this + 10);
  v27 = v10;
  v28 = v11;
  v13 = (__m128)_mm_loadu_si128((const __m128i *)CProjectedShadow::GetPlaneOfVisual(
                                                   &v24,
                                                   *(struct CVisual **)(v12 + 56),
                                                   (struct CMILMatrix *)&v25));
  LODWORD(v14) = _mm_shuffle_ps(v7, v7, 85).m128_u32[0];
  LODWORD(v15) = _mm_shuffle_ps(v7, v7, 170).m128_u32[0];
  LODWORD(v16) = _mm_shuffle_ps(v13, v13, 85).m128_u32[0];
  LODWORD(v17) = _mm_shuffle_ps(v13, v13, 170).m128_u32[0];
  *(float *)&v10 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v7.m128_f32[0] - v13.m128_f32[0])) & _xmm);
  if ( *(float *)&v10 <= 0.0000011920929 )
  {
    v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - v16)) & _xmm);
    if ( v18 <= 0.0000011920929 )
    {
      v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15 - v17)) & _xmm);
      if ( v19 <= 0.0000011920929 )
        return 1;
    }
  }
  v20 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v7.m128_f32[0] - COERCE_FLOAT(v13.m128_i32[0] ^ _xmm))) & _xmm);
  if ( v20 <= 0.0000011920929 )
  {
    v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v14 - COERCE_FLOAT(LODWORD(v16) ^ _xmm))) & _xmm);
    if ( v21 <= 0.0000011920929 )
    {
      v22 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v15 - COERCE_FLOAT(LODWORD(v17) ^ _xmm))) & _xmm);
      if ( v22 <= 0.0000011920929 )
        return 1;
    }
  }
  return v4;
}
