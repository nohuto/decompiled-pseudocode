/*
 * XREFs of ?ClipAgainstMargins@CWindowNode@@QEAAXPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x1800903AC
 * Callers:
 *     ?RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@PEBVCShape@@PEAU_MARGINS@@H_N55PEAU_D3DCOLORVALUE@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@PEA_N@Z @ 0x180090490 (-RenderImage@CWindowNode@@AEAAJPEAVCDrawingContext@@PEAVCWindowOcclusionInfo@@PEAVIImageSource@@.c)
 * Callees:
 *     __security_check_cookie @ 0x1800DAB00 (__security_check_cookie.c)
 */

__int64 __fastcall CWindowNode::ClipAgainstMargins(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // eax
  int v4; // eax
  __int64 result; // rax
  __m128 v6; // xmm1
  float v7; // xmm2_4
  float v8; // xmm0_4
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  __m128 v12; // xmm2
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  __m128 v16; // xmm2
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm2_4
  __m128i v20; // [rsp+0h] [rbp-20h]

  v2 = *(_DWORD *)(a1 + 820);
  if ( v2 > 0 )
  {
    v20 = _mm_loadu_si128((const __m128i *)(a1 + 140));
    v9 = *(float *)v20.m128i_i32 + (float)v2;
    if ( v9 > *(float *)a2 )
      *(float *)a2 = v9;
    if ( *(float *)&v20.m128i_i32[1] > *(float *)(a2 + 4) )
      *(_DWORD *)(a2 + 4) = v20.m128i_i32[1];
    v10 = *(float *)(a2 + 8);
    if ( v10 > *(float *)&v20.m128i_i32[2] )
    {
      *(_DWORD *)(a2 + 8) = v20.m128i_i32[2];
      v10 = *(float *)&v20.m128i_i32[2];
    }
    v11 = *(float *)(a2 + 12);
    if ( v11 > *(float *)&v20.m128i_i32[3] )
    {
      *(_DWORD *)(a2 + 12) = v20.m128i_i32[3];
      v11 = *(float *)&v20.m128i_i32[3];
      v10 = *(float *)(a2 + 8);
    }
    if ( v10 <= *(float *)a2 || v11 <= *(float *)(a2 + 4) )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
  }
  v3 = *(_DWORD *)(a1 + 824);
  if ( v3 > 0 )
  {
    v12 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 140));
    v13 = _mm_shuffle_ps(v12, v12, 170).m128_f32[0] - (float)v3;
    if ( v12.m128_f32[0] > *(float *)a2 )
      *(_DWORD *)a2 = v12.m128_i32[0];
    if ( v12.m128_f32[1] > *(float *)(a2 + 4) )
      *(_DWORD *)(a2 + 4) = v12.m128_i32[1];
    v14 = *(float *)(a2 + 8);
    if ( v14 > v13 )
    {
      *(float *)(a2 + 8) = v13;
      v14 = v13;
    }
    v15 = *(float *)(a2 + 12);
    if ( v15 > v12.m128_f32[3] )
    {
      *(_DWORD *)(a2 + 12) = v12.m128_i32[3];
      v15 = v12.m128_f32[3];
      v14 = *(float *)(a2 + 8);
    }
    if ( v14 <= *(float *)a2 || v15 <= *(float *)(a2 + 4) )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
  }
  v4 = *(_DWORD *)(a1 + 828);
  if ( v4 > 0 )
  {
    v6 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 140));
    v7 = (float)v4 + _mm_shuffle_ps(v6, v6, 85).m128_f32[0];
    if ( v6.m128_f32[0] > *(float *)a2 )
      *(_DWORD *)a2 = v6.m128_i32[0];
    if ( v7 > *(float *)(a2 + 4) )
      *(float *)(a2 + 4) = v7;
    v8 = *(float *)(a2 + 8);
    if ( v8 > v6.m128_f32[2] )
    {
      *(_DWORD *)(a2 + 8) = v6.m128_i32[2];
      v8 = v6.m128_f32[2];
    }
    v6.m128_i32[0] = *(_DWORD *)(a2 + 12);
    if ( v6.m128_f32[0] > v6.m128_f32[3] )
    {
      *(_DWORD *)(a2 + 12) = v6.m128_i32[3];
      v6.m128_i32[0] = v6.m128_i32[3];
      v8 = *(float *)(a2 + 8);
    }
    if ( v8 <= *(float *)a2 || v6.m128_f32[0] <= *(float *)(a2 + 4) )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
  }
  result = *(unsigned int *)(a1 + 832);
  if ( (int)result > 0 )
  {
    v16 = (__m128)_mm_loadu_si128((const __m128i *)(a1 + 140));
    v17 = _mm_shuffle_ps(v16, v16, 255).m128_f32[0] - (float)(int)result;
    if ( v16.m128_f32[0] > *(float *)a2 )
      *(_DWORD *)a2 = v16.m128_i32[0];
    if ( v16.m128_f32[1] > *(float *)(a2 + 4) )
      *(_DWORD *)(a2 + 4) = v16.m128_i32[1];
    v18 = *(float *)(a2 + 8);
    if ( v18 > v16.m128_f32[2] )
    {
      *(_DWORD *)(a2 + 8) = v16.m128_i32[2];
      v18 = v16.m128_f32[2];
    }
    v19 = *(float *)(a2 + 12);
    if ( v19 > v17 )
    {
      *(float *)(a2 + 12) = v17;
      v19 = v17;
      v18 = *(float *)(a2 + 8);
    }
    if ( v18 <= *(float *)a2 || v19 <= *(float *)(a2 + 4) )
    {
      *(_QWORD *)(a2 + 8) = 0LL;
      *(_QWORD *)a2 = 0LL;
    }
  }
  return result;
}
