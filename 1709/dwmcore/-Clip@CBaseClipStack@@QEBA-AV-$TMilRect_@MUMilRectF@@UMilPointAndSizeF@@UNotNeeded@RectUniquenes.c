/*
 * XREFs of ?Clip@CBaseClipStack@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x1800B8688
 * Callers:
 *     ?GetWorldBounds2D@CPreComputeContext@@AEAA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@M@Z @ 0x180055A98 (-GetWorldBounds2D@CPreComputeContext@@AEAA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeed.c)
 *     ?GetDestinationRect@COcclusionContext@@AEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV2@@Z @ 0x18005D344 (-GetDestinationRect@COcclusionContext@@AEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 *     ?GetDestinationRect@COcclusionContext@@QEBA?AV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@AEBV?$TMil3DRect@MV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@UMil3DRectF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180060D18 (-GetDestinationRect@COcclusionContext@@QEBA-AV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNee.c)
 * Callees:
 *     <none>
 */

__m128 *__fastcall CBaseClipStack::Clip(__int64 a1, __m128 *a2, __m128 *a3)
{
  __m128 v3; // xmm0
  float v4; // xmm4_4
  float v5; // xmm1_4
  float v6; // xmm2_4
  float v7; // xmm3_4
  __m128 *result; // rax
  __m128 v9; // [rsp+0h] [rbp-10h]

  if ( *(_DWORD *)a1 )
  {
    v3 = (__m128)_mm_loadu_si128((const __m128i *)(*(_QWORD *)(a1 + 16) + 16LL * (unsigned int)(*(_DWORD *)a1 - 1)));
    v9 = v3;
    v9.m128_i32[0] = v3.m128_i32[0];
    v4 = v3.m128_f32[0];
    if ( a3->m128_f32[0] > v3.m128_f32[0] )
    {
      v9.m128_i32[0] = a3->m128_i32[0];
      v4 = a3->m128_f32[0];
      v3 = v9;
    }
    v5 = _mm_shuffle_ps(v3, v3, 85).m128_f32[0];
    v9.m128_f32[1] = v5;
    if ( a3->m128_f32[1] > v5 )
    {
      v9.m128_i32[1] = a3->m128_i32[1];
      v5 = v9.m128_f32[1];
      v3 = v9;
    }
    v6 = _mm_shuffle_ps(v3, v3, 170).m128_f32[0];
    v9.m128_f32[2] = v6;
    if ( v6 > a3->m128_f32[2] )
    {
      v6 = a3->m128_f32[2];
      v9.m128_f32[2] = v6;
      v3 = v9;
    }
    v7 = _mm_shuffle_ps(v3, v3, 255).m128_f32[0];
    if ( v7 > a3->m128_f32[3] )
    {
      v7 = a3->m128_f32[3];
      v9.m128_f32[3] = v7;
      v3 = v9;
    }
    if ( v6 <= v4 || v7 <= v5 )
      v3 = 0uLL;
  }
  else
  {
    v3 = *a3;
  }
  result = a2;
  *a2 = v3;
  return result;
}
