/*
 * XREFs of ?AddOcclusionInformation@CPrimitiveGroup@@UEAAJPEAVCOcclusionContext@@PEBUD2D_SIZE_F@@@Z @ 0x18000C860
 * Callers:
 *     ?CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@@Z @ 0x1800877F0 (-CollectOcclusion@CVisual@@UEAAJPEAVCContentBounder@@PEAVCOcclusionContext@@PEAVCOcclusionInfo@@.c)
 *     ?PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x18009BD50 (-PostSubgraph@COcclusionContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     ?GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18000B518 (-GetLargestOpaqueRect@CPrimitiveGroup@@AEBA_NPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNot.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800651F0 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z @ 0x180071260 (-AddMultipleAndSet@-$DynArrayImpl@$0A@@@IEAAJIIPEBX@Z.c)
 *     ??$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z @ 0x180099530 (--$Transform2DBoundsHelper@$0A@@CMILMatrix@@AEBAXAEBUMilRectF@@AEAU1@@Z.c)
 *     ?CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18009AF48 (-CheckOcclusionRelevance@COcclusionContext@@AEAA_NPEBV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 */

__int64 __fastcall CPrimitiveGroup::AddOcclusionInformation(
        CPrimitiveGroup *this,
        struct COcclusionContext *a2,
        const struct D2D_SIZE_F *a3)
{
  int v4; // ebx
  int v5; // eax
  void *v6; // rcx
  int v7; // eax
  __m128 v8; // xmm0
  float v9; // xmm4_4
  float v10; // xmm1_4
  float v11; // xmm2_4
  float v12; // xmm3_4
  __m128 v13; // xmm6
  __int64 v14; // rcx
  unsigned int v15; // r8d
  unsigned int v16; // eax
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v20; // eax
  unsigned int v21; // [rsp+38h] [rbp-9h]
  __m128 v22; // [rsp+40h] [rbp-1h] BYREF
  __m128 v23; // [rsp+50h] [rbp+Fh] BYREF
  __m128 v24; // [rsp+60h] [rbp+1Fh] BYREF
  int v25; // [rsp+70h] [rbp+2Fh]

  if ( !CPrimitiveGroup::GetLargestOpaqueRect((__int64)this, (__int64)&v22) || *((_DWORD *)a2 + 237) )
    return 0LL;
  v4 = 0;
  if ( v22.m128_f32[2] <= v22.m128_f32[0] || v22.m128_f32[3] <= v22.m128_f32[1] )
    goto LABEL_37;
  v25 = 0;
  v5 = *((_DWORD *)a2 + 2);
  if ( v5 )
    v6 = (void *)(*((_QWORD *)a2 + 3) + 68LL * (unsigned int)(v5 - 1));
  else
    v6 = &CMILMatrix::Identity;
  CMILMatrix::Transform2DBoundsHelper<0>(v6, &v22, &v23);
  v7 = *((_DWORD *)a2 + 30);
  if ( v7 )
  {
    v8 = (__m128)_mm_loadu_si128((const __m128i *)(*((_QWORD *)a2 + 17) + 16LL * (unsigned int)(v7 - 1)));
    v22 = v8;
    v22.m128_i32[0] = v8.m128_i32[0];
    v9 = v8.m128_f32[0];
    if ( v23.m128_f32[0] > v8.m128_f32[0] )
    {
      v22.m128_i32[0] = v23.m128_i32[0];
      v9 = v23.m128_f32[0];
      v8 = v22;
    }
    v10 = _mm_shuffle_ps(v8, v8, 85).m128_f32[0];
    v22.m128_f32[1] = v10;
    if ( v23.m128_f32[1] > v10 )
    {
      v22.m128_i32[1] = v23.m128_i32[1];
      v10 = v23.m128_f32[1];
      v8 = v22;
    }
    v11 = _mm_shuffle_ps(v8, v8, 170).m128_f32[0];
    v22.m128_f32[2] = v11;
    if ( v11 > v23.m128_f32[2] )
    {
      v11 = v23.m128_f32[2];
      v22.m128_i32[2] = v23.m128_i32[2];
      v8 = v22;
    }
    v12 = _mm_shuffle_ps(v8, v8, 255).m128_f32[0];
    if ( v12 > v23.m128_f32[3] )
    {
      v12 = v23.m128_f32[3];
      v22.m128_i32[3] = v23.m128_i32[3];
      v8 = v22;
    }
    if ( v11 <= v9 || v12 <= v10 )
    {
      v22 = 0uLL;
      v8 = 0uLL;
    }
    v13 = v8;
  }
  else
  {
    v13 = v23;
  }
  v24 = v13;
  if ( !(unsigned __int8)COcclusionContext::CheckOcclusionRelevance(a2, &v24) )
  {
LABEL_27:
    if ( v4 >= 0 )
      return 0LL;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x4C9u);
LABEL_37:
    if ( v4 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x49Eu);
    return 0LL;
  }
  v14 = *((unsigned int *)a2 + 84);
  v15 = v21;
  v16 = v14 + 1;
  if ( (int)v14 + 1 >= (unsigned int)v14 )
    v15 = v14 + 1;
  v4 = v16 < (unsigned int)v14 ? 0x80070216 : 0;
  if ( v16 < (unsigned int)v14 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0xB5u);
  }
  else if ( v15 > *((_DWORD *)a2 + 83) )
  {
    v20 = DynArrayImpl<0>::AddMultipleAndSet((char *)a2 + 312, 20LL, 1LL, &v24);
    v4 = v20;
    if ( v20 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0xC0u);
  }
  else
  {
    v17 = 5 * v14;
    v18 = *((_QWORD *)a2 + 39);
    *(__m128 *)(v18 + 4 * v17) = v13;
    *(_DWORD *)(v18 + 4 * v17 + 16) = v25;
    *((_DWORD *)a2 + 84) = v15;
  }
  if ( v4 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, 0x73Eu);
    goto LABEL_27;
  }
  return 0LL;
}
