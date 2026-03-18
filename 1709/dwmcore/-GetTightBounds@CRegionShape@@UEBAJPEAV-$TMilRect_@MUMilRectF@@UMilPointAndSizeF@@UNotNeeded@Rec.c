/*
 * XREFs of ?GetTightBounds@CRegionShape@@UEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x1800350E0
 * Callers:
 *     ?PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEA_N3@Z @ 0x180032030 (-PushCpuOrGpuClipToScope@CScopedClipStack@@QEAAJ$$QEAVCShapePtr@@W4D2D1_ANTIALIAS_MODE@@PEBVCMIL.c)
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEAVCFilterEffect@@11PEA_N@Z @ 0x18003BD30 (-PushEffects@CDrawingContext@@QEAAJAEAUNodeEffects@1@PEBV-$TMilRect_@MUMilRectF@@UMilPointAndSiz.c)
 *     ?IsEmpty@CShape@@UEBA_NXZ @ 0x1800481B0 (-IsEmpty@CShape@@UEBA_NXZ.c)
 *     ?PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180055B70 (-PreSubgraph@CPreComputeContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005F130 (-PreSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 *     ?GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180096CE0 (-GetBoundsSafe@CGeometry@@QEAAJPEBUD2D_SIZE_F@@PEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UN.c)
 *     ?GetTightBounds@CShapePtr@@QEBAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEBVCMILMatrix@@@Z @ 0x180097F70 (-GetTightBounds@CShapePtr@@QEBAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUn.c)
 * Callees:
 *     ??$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z @ 0x18000ACE8 (--$ReleaseInterfaceNoNULL@VCManipulationManager@@@@YAXPEAVCManipulationManager@@@Z.c)
 *     ?GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z @ 0x180034DC0 (-GetD2DGeometry@CRegionShape@@UEBAJPEBVCMILMatrix@@PEAPEAUID2D1Geometry@@@Z.c)
 *     ?HasValidValues@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003687C (-HasValidValues@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ?IsWellOrdered@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x18003692C (-IsWellOrdered@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     ??$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z @ 0x18005A380 (--$Is2DAffine@$0A@@CMILMatrix@@AEBA_N_N@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800C5DD0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CRegionShape::GetTightBounds(CRegionShape *this, __m128 *a2, __int64 a3)
{
  CRegionShape *v4; // r10
  __m128 *v5; // r14
  const struct CMILMatrix *v6; // r9
  __int64 (__fastcall *v7)(CRegionShape *, const struct CMILMatrix *, struct ID2D1Geometry **); // rax
  int D2DGeometry; // eax
  unsigned int v9; // edi
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 result; // rax
  float *v15; // r8
  __m128 v16; // xmm4
  __m128 v17; // xmm4
  __m128 v18; // xmm4
  struct ID2D1Geometry *v19; // [rsp+38h] [rbp-19h] BYREF
  __m128 v20; // [rsp+40h] [rbp-11h]
  __m128 v21; // [rsp+58h] [rbp+7h] BYREF
  __m128 v22; // [rsp+68h] [rbp+17h] BYREF
  unsigned __int64 v23; // [rsp+78h] [rbp+27h]

  v4 = this;
  if ( !*((_QWORD *)this + 1) )
  {
    a2->m128_u64[1] = 0LL;
    result = 0LL;
    a2->m128_u64[0] = 0LL;
    return result;
  }
  v5 = 0LL;
  v19 = 0LL;
  if ( a3 )
  {
    if ( !(unsigned __int8)CMILMatrix::Is2DAffine<0>(a3) )
      goto LABEL_4;
    v5 = &v22;
    v16 = _mm_shuffle_ps((__m128)*(unsigned int *)v15, (__m128)*(unsigned int *)v15, 225);
    v16.m128_f32[0] = v15[1];
    v17 = _mm_shuffle_ps(v16, v16, 198);
    v17.m128_f32[0] = v15[4];
    v18 = _mm_shuffle_ps(v17, v17, 39);
    v18.m128_f32[0] = v15[5];
    v23 = _mm_unpacklo_ps((__m128)*((unsigned int *)v15 + 12), (__m128)*((unsigned int *)v15 + 13)).m128_u64[0];
    v20 = _mm_shuffle_ps(v18, v18, 57);
    v22 = v20;
  }
  v6 = 0LL;
LABEL_4:
  v7 = *(__int64 (__fastcall **)(CRegionShape *, const struct CMILMatrix *, struct ID2D1Geometry **))(*(_QWORD *)v4 + 24LL);
  if ( v7 == CRegionShape::GetD2DGeometry )
    D2DGeometry = CRegionShape::GetD2DGeometry(v4, v6, &v19);
  else
    D2DGeometry = v7(v4, v6, &v19);
  v9 = D2DGeometry;
  if ( D2DGeometry < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, D2DGeometry, 0x3E4u);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(struct ID2D1Geometry *, __m128 *, __m128 *))(*(_QWORD *)v19 + 32LL))(v19, v5, &v21);
    v20 = v21;
    *a2 = v21;
    if ( (unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::HasValidValues(a2) )
    {
      if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsWellOrdered(v11, v10, v12, v13) )
      {
        a2->m128_u64[1] = 0LL;
        a2->m128_u64[0] = 0LL;
      }
    }
    else
    {
      v9 = -2003304438;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, -2003304438, 0x3F0u);
    }
  }
  ReleaseInterfaceNoNULL<CManipulationManager>((__int64)v19);
  return v9;
}
