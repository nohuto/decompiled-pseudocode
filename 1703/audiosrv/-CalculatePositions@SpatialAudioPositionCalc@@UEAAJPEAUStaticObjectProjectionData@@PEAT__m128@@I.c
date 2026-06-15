/*
 * XREFs of ?CalculatePositions@SpatialAudioPositionCalc@@UEAAJPEAUStaticObjectProjectionData@@PEAT__m128@@I@Z @ 0x1800CC9B0
 * Callers:
 *     <none>
 * Callees:
 *     _TlgCreateSz @ 0x180016D60 (_TlgCreateSz.c)
 *     _TlgWrite @ 0x180026640 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180048BE0 (__security_check_cookie.c)
 *     ?ComputeCubicProjectOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets@@PEAUStaticObjectProjectionData@@@Z @ 0x1800CCC74 (-ComputeCubicProjectOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets@@PE.c)
 *     ?ComputeRadialProjectionOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets@@PEAUStaticObjectProjectionData@@@Z @ 0x1800CCDF4 (-ComputeRadialProjectionOffsets@SpatialAudioPositionCalc@@AEAAXPEAUSpatialAudioProjectionOffsets.c)
 *     ?LookUpOffsetValue@SpatialAudioPositionCalc@@AEAAMEPEAUSpatialAudioProjectionOffsets@@@Z @ 0x1800CD044 (-LookUpOffsetValue@SpatialAudioPositionCalc@@AEAAMEPEAUSpatialAudioProjectionOffsets@@@Z.c)
 */

__int64 __fastcall SpatialAudioPositionCalc::CalculatePositions(
        SpatialAudioPositionCalc *this,
        struct StaticObjectProjectionData *a2,
        union __m128 *a3,
        int a4)
{
  __m128 v4; // xmm0
  unsigned int v5; // edi
  unsigned __int8 *v6; // r14
  union __m128 *v7; // rsi
  SpatialAudioPositionCalc *v9; // rcx
  __m128 v10; // xmm7
  SpatialAudioPositionCalc *v11; // rcx
  __m128 v12; // xmm6
  SpatialAudioPositionCalc *v13; // rcx
  int v14; // r9d
  char *v15; // r10
  __m128 v16; // xmm5
  __m128 v17; // xmm4
  __m128 v18; // xmm3
  __m128 v19; // xmm3
  __m128 v20; // xmm1
  __m128 v21; // xmm2
  __m128 v22; // xmm4
  __m128 v23; // xmm4
  LPCGUID v24; // r8
  LPCGUID v25; // r9
  int v27; // [rsp+38h] [rbp-59h] BYREF
  int v28; // [rsp+3Ch] [rbp-55h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+48h] [rbp-49h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+68h] [rbp-29h] BYREF
  int *v31; // [rsp+78h] [rbp-19h]
  __int64 v32; // [rsp+80h] [rbp-11h]
  int *v33; // [rsp+88h] [rbp-9h]
  __int64 v34; // [rsp+90h] [rbp-1h]

  v5 = 0;
  v6 = (unsigned __int8 *)this + 80;
  v7 = a3;
  if ( a2 && a3 && a4 == 272 )
  {
    if ( *((_DWORD *)a2 + 27) )
      SpatialAudioPositionCalc::ComputeRadialProjectionOffsets(this, (struct SpatialAudioProjectionOffsets *)&pData, a2);
    else
      SpatialAudioPositionCalc::ComputeCubicProjectOffsets(this, (struct SpatialAudioProjectionOffsets *)&pData, a2);
    while ( 1 )
    {
      v4.m128_f32[0] = SpatialAudioPositionCalc::LookUpOffsetValue(
                         v9,
                         v6[2],
                         (struct SpatialAudioProjectionOffsets *)&pData);
      v10 = v4;
      v4.m128_f32[0] = SpatialAudioPositionCalc::LookUpOffsetValue(
                         v11,
                         v6[1],
                         (struct SpatialAudioProjectionOffsets *)&pData);
      v12 = v4;
      v4.m128_f32[0] = SpatialAudioPositionCalc::LookUpOffsetValue(
                         v13,
                         *v6,
                         (struct SpatialAudioProjectionOffsets *)&pData);
      v17 = _mm_unpacklo_ps(_mm_unpacklo_ps(v4, v10), _mm_unpacklo_ps(v12, (__m128)0LL));
      *v7 = v17;
      if ( !*((_DWORD *)a2 + 27) )
      {
        if ( v14 )
        {
          v18 = (__m128)*((unsigned int *)a2 + 24);
          goto LABEL_22;
        }
        if ( (*v15 & 0x20) != 0 )
        {
          v18 = (__m128)*((unsigned int *)a2 + 25);
          goto LABEL_22;
        }
        if ( (*v15 & 0x41) == 0x41 )
        {
          v18 = (__m128)*((unsigned int *)a2 + 22);
          goto LABEL_22;
        }
        if ( (*v15 & 0x42) == 0x42 )
        {
          v18 = (__m128)*((unsigned int *)a2 + 23);
          goto LABEL_22;
        }
        if ( *v15 < 0 )
        {
          v18 = (__m128)*((unsigned int *)a2 + 20);
          goto LABEL_22;
        }
        if ( (*v15 & 1) != 0 )
        {
          v18 = (__m128)*((unsigned int *)a2 + 19);
          goto LABEL_22;
        }
        if ( (*v15 & 2) != 0 )
        {
          v18 = (__m128)*((unsigned int *)a2 + 21);
LABEL_22:
          if ( v18.m128_f32[0] != 1.0 )
            *v7 = _mm_mul_ps(_mm_unpacklo_ps(_mm_unpacklo_ps(v18, v18), _mm_unpacklo_ps(v18, (__m128)0LL)), v17);
        }
      }
      v19 = _mm_mul_ps(*v7, (__m128)_xmm);
      v4 = v16;
      v6 += 3;
      v20 = _mm_or_ps(_mm_and_ps(DirectX::g_XMNegativeZero, v19), DirectX::g_XMNoFraction);
      v21 = _mm_cmple_ps(_mm_and_ps(DirectX::g_XMAbsMask, v19), DirectX::g_XMNoFraction);
      v22 = _mm_div_ps(
              _mm_xor_ps(_mm_and_ps(_mm_sub_ps(_mm_add_ps(v20, v19), v20), v21), _mm_andnot_ps(v21, v19)),
              (__m128)_xmm);
      v23 = _mm_shuffle_ps(v22, v22, 39);
      v23.m128_f32[0] = v16.m128_f32[0];
      *v7++ = _mm_shuffle_ps(v23, v23, 39);
      if ( (__int64)(v15 + 4) >= (__int64)&unk_1801018C4 )
        return v5;
    }
  }
  if ( (unsigned int)dword_18012A260 > 2 )
  {
    TlgCreateSz(&pDesc, "SpatialAudioPositionCalc::CalculatePositions");
    v27 = 263;
    v31 = &v27;
    v33 = &v28;
    v32 = 4LL;
    v28 = -2147024809;
    v34 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_18012A260, &unk_1800FBA75, v24, v25, 5u, &pData);
  }
  return (unsigned int)-2147024809;
}
