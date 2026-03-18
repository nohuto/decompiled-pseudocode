/*
 * XREFs of ?cross@Numerics@Foundation@Windows@@YA?AUfloat3@123@AEBU4123@0@Z @ 0x18015BEA8
 * Callers:
 *     ?PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z @ 0x180037630 (-PreSubgraph@CDrawingContext@@QEAAJPEBVCVisualTree@@PEA_N@Z.c)
 * Callees:
 *     <none>
 */

float *__fastcall Windows::Foundation::Numerics::cross(float *a1, float *a2, float *a3)
{
  float *result; // rax
  float v4; // xmm2_4
  float v5; // xmm0_4
  float v6; // xmm3_4
  float v7; // xmm3_4

  result = a1;
  v4 = *a3;
  v5 = *a2 * a3[2];
  v6 = *a2 * a3[1];
  *a1 = (float)(a3[2] * a2[1]) - (float)(a3[1] * a2[2]);
  v7 = v6 - (float)(v4 * a2[1]);
  a1[1] = (float)(v4 * a2[2]) - v5;
  a1[2] = v7;
  return result;
}
