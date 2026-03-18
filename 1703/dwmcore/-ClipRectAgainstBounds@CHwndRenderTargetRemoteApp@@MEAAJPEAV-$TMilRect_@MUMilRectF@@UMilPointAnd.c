/*
 * XREFs of ?ClipRectAgainstBounds@CHwndRenderTargetRemoteApp@@MEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x180155AA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CHwndRenderTargetRemoteApp::ClipRectAgainstBounds(__int64 a1, float *a2)
{
  __m128i v2; // xmm0
  __int64 v3; // rcx
  float v4; // xmm2_4
  float v5; // xmm1_4
  float v6; // xmm0_4

  v2 = *(__m128i *)(a1 + 376);
  v3 = *(_QWORD *)(a1 + 376);
  v2.m128i_i64[0] = _mm_srli_si128(v2, 8).m128i_u64[0];
  v4 = (float)v2.m128i_i32[1];
  v5 = (float)v2.m128i_i32[0];
  v6 = (float)SHIDWORD(v3);
  if ( (float)(int)v3 > *a2 )
    *a2 = (float)(int)v3;
  if ( v6 > a2[1] )
    a2[1] = v6;
  if ( a2[2] > v5 )
    a2[2] = v5;
  if ( a2[3] > v4 )
    a2[3] = v4;
  if ( a2[2] <= *a2 || a2[3] <= a2[1] )
  {
    *((_QWORD *)a2 + 1) = 0LL;
    *(_QWORD *)a2 = 0LL;
  }
  return 0LL;
}
