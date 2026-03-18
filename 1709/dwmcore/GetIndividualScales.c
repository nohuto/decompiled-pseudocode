/*
 * XREFs of GetIndividualScales @ 0x1801CD488
 * Callers:
 *     ?UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z @ 0x1801CE210 (-UpdateTransform@CInteractionContextTransformHelper@@QEAAJAEBVMatrix3x2F@D2D1@@PEA_N@Z.c)
 * Callees:
 *     sqrtf_0 @ 0x1800C5DAA (sqrtf_0.c)
 */

__int64 __fastcall GetIndividualScales(__int64 a1, float *a2, float *a3)
{
  float v6; // xmm6_4
  float v7; // xmm7_4
  float v8; // xmm0_4
  float v10; // xmm3_4
  float v11; // xmm2_4
  float v12; // xmm7_4
  float v13; // xmm6_4
  float v14; // xmm1_4
  float v15; // xmm2_4
  float v16; // xmm3_4
  float v17; // xmm0_4

  *(_DWORD *)(a1 + 16) = 0;
  *(_DWORD *)(a1 + 20) = 0;
  v6 = *(float *)a1;
  v7 = *(float *)(a1 + 8);
  v8 = sqrtf_0((float)(v6 * v6) + (float)(v7 * v7));
  *a2 = v8;
  if ( v8 == 0.0 )
    return 2147942487LL;
  v10 = *(float *)(a1 + 12);
  v11 = *(float *)(a1 + 4);
  v12 = v7 / v8;
  v13 = v6 / v8;
  *(float *)(a1 + 8) = v12;
  *(float *)a1 = v13;
  v14 = (float)(v12 * v10) + (float)(v11 * v13);
  v15 = v11 - (float)(v13 * v14);
  v16 = v10 - (float)(v12 * v14);
  *(float *)(a1 + 4) = v15;
  *(float *)(a1 + 12) = v16;
  v17 = sqrtf_0((float)(v16 * v16) + (float)(v15 * v15));
  *a3 = v17;
  if ( v17 == 0.0 )
    return 2147942487LL;
  else
    return 0LL;
}
