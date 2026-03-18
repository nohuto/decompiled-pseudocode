/*
 * XREFs of TransformPoint @ 0x1801CE028
 * Callers:
 *     _anonymous_namespace_::DecomposeMatrix @ 0x18019BBC4 (_anonymous_namespace_--DecomposeMatrix.c)
 *     ?TransformCoordinateSpace@CInteractionContextTransformHelper@@SAJPEBUtagRECT@@0PEAUINTERACTION_UPDATE@@1@Z @ 0x1801CD744 (-TransformCoordinateSpace@CInteractionContextTransformHelper@@SAJPEBUtagRECT@@0PEAUINTERACTION_U.c)
 * Callees:
 *     <none>
 */

float *__fastcall TransformPoint(int *a1, int *a2, float a3, float a4, float *a5, float *a6)
{
  float v6; // xmm2_4
  float *result; // rax

  v6 = a3 - (double)*a1;
  *a5 = (float)((float)(v6 * (float)(a2[2] - *a2)) / (float)(a1[2] - *a1)) + (float)*a2;
  result = a6;
  *a6 = (float)((float)((float)(a4 - (double)a1[1]) * (float)(a2[3] - a2[1])) / (float)(a1[3] - a1[1])) + (float)a2[1];
  return result;
}
