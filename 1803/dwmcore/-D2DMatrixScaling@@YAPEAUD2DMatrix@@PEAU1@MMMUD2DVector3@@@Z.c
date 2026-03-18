/*
 * XREFs of ?D2DMatrixScaling@@YAPEAUD2DMatrix@@PEAU1@MMMUD2DVector3@@@Z @ 0x1802067BC
 * Callers:
 *     ?Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z @ 0x1801B9E50 (-Matrix4x4FromScale@CExpressionValueStack@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall D2DMatrixScaling(__int64 a1, float a2, float a3, float a4, float *a5)
{
  float v5; // xmm4_4
  float v6; // xmm0_4
  float v7; // xmm5_4
  __int64 result; // rax

  v5 = (float)(1.0 - a2) * *a5;
  v6 = (float)(1.0 - a3) * a5[1];
  v7 = (float)(1.0 - a4) * a5[2];
  *(_QWORD *)(a1 + 4) = 0LL;
  *(_QWORD *)(a1 + 12) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_DWORD *)(a1 + 44) = 0;
  result = a1;
  *(float *)(a1 + 48) = v5;
  *(float *)(a1 + 52) = v6;
  *(float *)a1 = a2;
  *(float *)(a1 + 20) = a3;
  *(float *)(a1 + 40) = a4;
  *(float *)(a1 + 56) = v7;
  *(_DWORD *)(a1 + 60) = 1065353216;
  return result;
}
