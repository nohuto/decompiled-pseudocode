/*
 * XREFs of ?Compute@CubicBezierInterpolation@@UEAAXMW4DCOMPOSITION_EXPRESSION_TYPE@@PEAVCExpressionValue@@11@Z @ 0x180066C10
 * Callers:
 *     ?Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z @ 0x1800A6D00 (-Calculate@KeyframeSequence@@QEAAXPEAVCExpressionValueStack@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CubicBezierInterpolation::Compute(__int64 a1, float a2)
{
  int v2; // r10d
  double v4; // xmm7_8
  float v5; // xmm8_4
  float v6; // xmm12_4
  unsigned int v7; // ecx
  double v8; // xmm12_8
  unsigned int v9; // edx
  double v10; // xmm8_8
  __int128 v11; // xmm13
  __int128 v12; // xmm5
  unsigned int v13; // eax
  double v14; // xmm6_8
  double v15; // xmm2_8
  double i; // xmm0_8
  double v17; // xmm1_8
  unsigned int v18; // eax
  double v19; // xmm4_8
  double v20; // xmm1_8
  unsigned int v21; // eax
  double v22; // xmm0_8
  unsigned int v23; // eax
  double v24; // xmm1_8
  double v25; // xmm3_8
  double v26; // xmm2_8
  double v27; // xmm3_8
  double v28; // xmm0_8
  unsigned int v29; // eax
  double v30; // xmm1_8
  double v31; // xmm6_8
  float v32; // xmm0_4
  float v33; // xmm2_4
  __int128 v34; // xmm1
  double v35; // xmm3_8
  double v36; // xmm0_8
  float v37; // xmm2_4
  unsigned int v38; // eax
  double v39; // xmm0_8
  double j; // xmm2_8
  double v41; // xmm3_8
  double v42; // xmm4_8
  double k; // xmm2_8

  v2 = 0;
  v4 = DOUBLE_1_0;
  v5 = *(float *)(a1 + 24);
  v6 = *(float *)(a1 + 32);
  v11 = 0LL;
  v7 = 2;
  v8 = v6;
  v9 = 3;
  v10 = v5;
  *(double *)&v11 = a2;
  v12 = v11;
  do
  {
    v13 = 2;
    v14 = 1.0 - *(double *)&v12;
    v15 = DOUBLE_1_0;
    for ( i = 1.0 - *(double *)&v12; ; i = i * i )
    {
      if ( (v13 & 1) != 0 )
        v15 = v15 * i;
      v13 >>= 1;
      if ( !v13 )
        break;
    }
    v17 = *(double *)&v12;
    v18 = 2;
    v19 = DOUBLE_1_0;
    while ( 1 )
    {
      if ( (v18 & 1) != 0 )
        v19 = v19 * v17;
      v18 >>= 1;
      if ( !v18 )
        break;
      v17 = v17 * v17;
    }
    v20 = *(double *)&v12;
    v21 = 3;
    v22 = DOUBLE_1_0;
    while ( 1 )
    {
      if ( (v21 & 1) != 0 )
        v22 = v22 * v20;
      v21 >>= 1;
      if ( !v21 )
        break;
      v20 = v20 * v20;
    }
    v23 = 2;
    v24 = 1.0 - *(double *)&v12;
    v25 = v14 * 3.0 * v19 * v8 + v15 * 3.0 * *(double *)&v12 * v10;
    v26 = DOUBLE_1_0;
    v27 = v25 + v22;
    while ( 1 )
    {
      if ( (v23 & 1) != 0 )
        v26 = v26 * v24;
      v23 >>= 1;
      if ( !v23 )
        break;
      v24 = v24 * v24;
    }
    v28 = *(double *)&v12;
    v29 = 2;
    v30 = DOUBLE_1_0;
    while ( 1 )
    {
      if ( (v29 & 1) != 0 )
        v30 = v30 * v28;
      v29 >>= 1;
      if ( !v29 )
        break;
      v28 = v28 * v28;
    }
    v31 = v14 * 6.0 * *(double *)&v12 * (v8 - v10) + v26 * 3.0 * v10 + v30 * 3.0 * (1.0 - v8);
    v32 = v31;
    v33 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v32) & _xmm);
    if ( v33 < 0.0000011920929 )
      break;
    *((_QWORD *)&v34 + 1) = *((_QWORD *)&v12 + 1);
    v35 = (v27 - *(double *)&v11) / v31;
    *(double *)&v34 = *(double *)&v12 - v35;
    v36 = *(double *)&v12 - (*(double *)&v12 - v35);
    v12 = v34;
    *(float *)&v36 = v36;
    v37 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(*(float *)&v36) & _xmm);
    if ( v37 < 0.0000011920929 )
      break;
    ++v2;
  }
  while ( v2 < 30 );
  v38 = 2;
  v39 = DOUBLE_1_0;
  for ( j = 1.0 - *(double *)&v12; ; j = j * j )
  {
    if ( (v38 & 1) != 0 )
      v39 = v39 * j;
    v38 >>= 1;
    if ( !v38 )
      break;
  }
  v41 = *(double *)&v12;
  v42 = DOUBLE_1_0;
  while ( 1 )
  {
    if ( (v7 & 1) != 0 )
      v42 = v42 * v41;
    v7 >>= 1;
    if ( !v7 )
      break;
    v41 = v41 * v41;
  }
  for ( k = *(double *)&v12; ; k = k * k )
  {
    if ( (v9 & 1) != 0 )
      v4 = v4 * k;
    v9 >>= 1;
    if ( !v9 )
      break;
  }
  return KeyframeInterpolation::Interpolate(a1);
}
