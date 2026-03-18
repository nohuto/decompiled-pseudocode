/*
 * XREFs of ?D2DMatrixRotationZ@@YAPEAUD2DMatrix@@PEAU1@MUD2DVector3@@@Z @ 0x1802066FC
 * Callers:
 *     ?Matrix4x4FromRotationZ@CExpressionValueStack@@QEAAJI@Z @ 0x1801B9D18 (-Matrix4x4FromRotationZ@CExpressionValueStack@@QEAAJI@Z.c)
 * Callees:
 *     cosf_0 @ 0x1800DD3BF (cosf_0.c)
 *     sinf_0 @ 0x1800DD3DD (sinf_0.c)
 */

__int64 __fastcall D2DMatrixRotationZ(__int64 a1, float a2, float *a3)
{
  float v5; // xmm7_4
  float v6; // xmm0_4
  float v7; // xmm3_4
  float v8; // xmm2_4
  __int64 result; // rax

  v5 = sinf_0(a2);
  v6 = cosf_0(a2);
  v7 = *a3;
  v8 = a3[1];
  *(_DWORD *)(a1 + 16) = LODWORD(v5) ^ _xmm;
  *(float *)a1 = v6;
  *(float *)(a1 + 20) = v6;
  *(_QWORD *)(a1 + 40) = 1065353216LL;
  *(_DWORD *)(a1 + 60) = 1065353216;
  result = a1;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 24) = 0LL;
  *(float *)(a1 + 4) = v5;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(float *)(a1 + 48) = (float)((float)(1.0 - v6) * v7) + (float)(v8 * v5);
  *(_DWORD *)(a1 + 56) = 0;
  *(float *)(a1 + 52) = (float)((float)(1.0 - v6) * v8) - (float)(v7 * v5);
  return result;
}
