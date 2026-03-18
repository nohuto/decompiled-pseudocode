/*
 * XREFs of s_TransformPointByMatrix @ 0x18020ED98
 * Callers:
 *     ?TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@_NPEAU2@@Z @ 0x18020E3FC (-TransformInput@CInteractionContextTransformHelper@@QEAAJAEBUtagPOINTER_INFO@@_NPEAU2@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall s_TransformPointByMatrix(float *a1, int *a2)
{
  float v2; // xmm0_4
  float v3; // xmm1_4
  float v4; // xmm6_4
  __int64 result; // rax

  v2 = (float)*a2;
  v3 = (float)a2[1];
  v4 = (float)((float)(a1[1] * v2) + (float)(a1[3] * v3)) + a1[5];
  *a2 = (int)(float)((float)((float)(v3 * a1[2]) + (float)(v2 * *a1)) + a1[4]);
  result = (unsigned int)(int)v4;
  a2[1] = result;
  return result;
}
