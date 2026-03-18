/*
 * XREFs of ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x180027FA0
 * Callers:
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x180053AF0 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18005DE70 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180059FB0 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18005CC50 (-CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180068800 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z @ 0x180076954 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800C2B30 (__security_check_cookie.c)
 */

__int64 __fastcall CPrimitiveGroup::AddOcclusionInformation(
        CPrimitiveGroup *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  float v4; // xmm0_4
  float v5; // xmm2_4
  float v6; // xmm3_4
  int v7; // ebx
  int v8; // eax
  void *v9; // rcx
  int v10; // eax
  __m128 v11; // xmm0
  float v12; // xmm4_4
  float v13; // xmm1_4
  float v14; // xmm2_4
  float v15; // xmm3_4
  __m128 v16; // xmm6
  __int64 v17; // rcx
  unsigned int v18; // r8d
  unsigned int v19; // eax
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v23; // eax
  unsigned int v24; // [rsp+38h] [rbp-9h]
  __m128 v25; // [rsp+40h] [rbp-1h] BYREF
  __m128 v26; // [rsp+50h] [rbp+Fh] BYREF
  __m128 v27; // [rsp+60h] [rbp+1Fh] BYREF
  int v28; // [rsp+70h] [rbp+2Fh]

  if ( !*((_QWORD *)this + 63) )
    return 0LL;
  v4 = *((float *)this + 141);
  v5 = *((float *)this + 140);
  v6 = *((float *)this + 142);
  v25.m128_i32[0] = *((_DWORD *)this + 139);
  *(unsigned __int64 *)((char *)v25.m128_u64 + 4) = __PAIR64__(LODWORD(v4), LODWORD(v5));
  v25.m128_f32[3] = v6;
  if ( v4 <= v25.m128_f32[0] || v6 <= v5 || *((_DWORD *)a2 + 259) )
    return 0LL;
  v7 = 0;
  if ( v6 <= v5 )
    goto LABEL_38;
  v28 = 0;
  v8 = *((_DWORD *)a2 + 2);
  if ( v8 )
    v9 = (void *)(*((_QWORD *)a2 + 3) + 68LL * (unsigned int)(v8 - 1));
  else
    v9 = &CMILMatrix::Identity;
  CMILMatrix::Transform2DBoundsHelper<0>(v9, &v25, &v26);
  v10 = *((_DWORD *)a2 + 30);
  if ( v10 )
  {
    v11 = (__m128)_mm_loadu_si128((const __m128i *)(*((_QWORD *)a2 + 17) + 16LL * (unsigned int)(v10 - 1)));
    v25 = v11;
    v25.m128_i32[0] = v11.m128_i32[0];
    v12 = v11.m128_f32[0];
    if ( v26.m128_f32[0] > v11.m128_f32[0] )
    {
      v25.m128_i32[0] = v26.m128_i32[0];
      v12 = v26.m128_f32[0];
      v11 = v25;
    }
    v13 = _mm_shuffle_ps(v11, v11, 85).m128_f32[0];
    v25.m128_f32[1] = v13;
    if ( v26.m128_f32[1] > v13 )
    {
      v25.m128_i32[1] = v26.m128_i32[1];
      v13 = v26.m128_f32[1];
      v11 = v25;
    }
    v14 = _mm_shuffle_ps(v11, v11, 170).m128_f32[0];
    v25.m128_f32[2] = v14;
    if ( v14 > v26.m128_f32[2] )
    {
      v14 = v26.m128_f32[2];
      v25.m128_i32[2] = v26.m128_i32[2];
      v11 = v25;
    }
    v15 = _mm_shuffle_ps(v11, v11, 255).m128_f32[0];
    if ( v15 > v26.m128_f32[3] )
    {
      v15 = v26.m128_f32[3];
      v25.m128_i32[3] = v26.m128_i32[3];
      v11 = v25;
    }
    if ( v14 <= v12 || v15 <= v13 )
    {
      v25 = 0uLL;
      v11 = 0uLL;
    }
    v16 = v11;
  }
  else
  {
    v16 = v26;
  }
  v27 = v16;
  if ( !(unsigned __int8)COcclusionContext::CheckOcclusionRelevance(a2, &v27) )
  {
LABEL_28:
    if ( v7 >= 0 )
      return 0LL;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x4B5u);
LABEL_38:
    if ( v7 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x451u);
    return 0LL;
  }
  v17 = *((unsigned int *)a2 + 106);
  v18 = v24;
  v19 = v17 + 1;
  if ( (int)v17 + 1 >= (unsigned int)v17 )
    v18 = v17 + 1;
  v7 = v19 < (unsigned int)v17 ? 0x80070216 : 0;
  if ( v19 < (unsigned int)v17 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0xB5u);
  }
  else if ( v18 > *((_DWORD *)a2 + 105) )
  {
    v23 = DynArrayImpl<0>::AddMultipleAndSet((char *)a2 + 400, 20LL, 1LL, &v27);
    v7 = v23;
    if ( v23 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v23, 0xC0u);
  }
  else
  {
    v20 = 5 * v17;
    v21 = *((_QWORD *)a2 + 50);
    *(__m128 *)(v21 + 4 * v20) = v16;
    *(_DWORD *)(v21 + 4 * v20 + 16) = v28;
    *((_DWORD *)a2 + 106) = v18;
  }
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x73Cu);
    goto LABEL_28;
  }
  return 0LL;
}
