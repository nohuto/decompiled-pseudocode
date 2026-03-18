/*
 * XREFs of DCEInverseTransform @ 0x1C01BF9CC
 * Callers:
 *     DCEHitTestWindow @ 0x1C01BF8F0 (DCEHitTestWindow.c)
 * Callees:
 *     FixedPointSubPixel @ 0x1C01C01C0 (FixedPointSubPixel.c)
 */

__int64 __fastcall DCEInverseTransform(int *a1, float *a2, int *a3, int *a4)
{
  float v4; // xmm0_4
  float v5; // xmm1_4
  int *v6; // r10
  float v7; // xmm3_4
  float v8; // xmm7_4
  float v9; // xmm9_4
  float v10; // xmm6_4
  float v11; // xmm2_4
  float v12; // xmm5_4
  int v13; // eax
  float v14; // xmm4_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm1_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm4_4
  float v23; // xmm5_4
  float v24; // xmm0_4
  float v25; // xmm6_4
  float v26; // xmm3_4
  float v27; // xmm6_4

  v5 = *a2;
  v6 = a1;
  v7 = a2[8] - *a2;
  v8 = a2[16] - *a2;
  v9 = a2[1];
  v10 = a2[9] - v9;
  v11 = a2[17] - v9;
  if ( a3 )
    FixedPointSubPixel(*a3);
  else
    v4 = 0.0;
  v12 = (float)((float)*a4 + v4) - v5;
  if ( a3 )
    FixedPointSubPixel(a3[1]);
  else
    v4 = 0.0;
  v13 = 0;
  v14 = (float)((float)a4[1] + v4) - v9;
  v15 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7) & _xmm);
  if ( v15 <= 0.00000011920929 )
  {
    v16 = v7;
    v17 = v10;
    v7 = v8;
    v10 = v11;
    v8 = v16;
    v11 = v17;
    v13 = 1;
  }
  v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v7) & _xmm);
  if ( v18 <= 0.00000011920929 )
    return 0LL;
  v20 = (float)(v11 * v7) - (float)(v8 * v10);
  v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v20) & _xmm);
  if ( v21 <= 0.00000011920929 )
    return 0LL;
  v22 = (float)((float)(v14 * v7) - (float)(v12 * v10)) / v20;
  v23 = (float)(v12 - (float)(v22 * v8)) / v7;
  if ( v13 )
  {
    v24 = v23;
    v23 = v22;
    v22 = v24;
  }
  v25 = (float)((float)((float)((float)((float)(a2[14] - a2[6]) * v23) + a2[6]) + (float)((float)(a2[22] - a2[6]) * v22))
              * (float)(v6[2] - *v6))
      + (float)*v6;
  v26 = (float)((float)((float)((float)((float)(a2[15] - a2[7]) * v23) + a2[7]) + (float)((float)(a2[23] - a2[7]) * v22))
              * (float)(v6[3] - v6[1]))
      + (float)v6[1];
  if ( v25 < 0.0 )
    v27 = v25 - 0.5;
  else
    v27 = v25 + 0.5;
  *a4 = (int)v27;
  if ( v26 < 0.0 )
    a4[1] = (int)(float)(v26 - 0.5);
  else
    a4[1] = (int)(float)(v26 + 0.5);
  return 1LL;
}
