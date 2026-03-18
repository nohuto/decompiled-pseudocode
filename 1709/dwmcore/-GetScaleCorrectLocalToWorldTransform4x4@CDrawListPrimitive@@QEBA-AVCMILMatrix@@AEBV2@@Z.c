/*
 * XREFs of ?GetScaleCorrectLocalToWorldTransform4x4@CDrawListPrimitive@@QEBA?AVCMILMatrix@@AEBV2@@Z @ 0x1801553D8
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180061360 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1800735F8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CDrawListPrimitive::GetScaleCorrectLocalToWorldTransform4x4(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax
  __int128 v4; // xmm9
  int v5; // xmm13_4
  int v6; // xmm14_4
  __m128 v7; // xmm15
  float v8; // xmm8_4
  float v9; // xmm1_4
  __m128 v10; // xmm4
  float v11; // xmm2_4
  float v12; // xmm3_4
  int v13; // [rsp+B0h] [rbp+8h]
  int v14; // [rsp+B8h] [rbp+10h]

  result = a2;
  v4 = *(_OWORD *)(a3 + 32);
  v5 = *(_DWORD *)(a3 + 48);
  v6 = *(_DWORD *)(a3 + 52);
  v7 = (__m128)LODWORD(FLOAT_1_0);
  v8 = 1.0 / *(float *)(a1 + 88);
  v7.m128_f32[0] = 1.0 / *(float *)(a1 + 92);
  v14 = *(_DWORD *)(a3 + 60);
  v13 = *(_DWORD *)(a3 + 56);
  v9 = *(float *)(a3 + 4) * v8;
  v10 = _mm_mul_ps(*(__m128 *)(a3 + 16), _mm_shuffle_ps(v7, v7, 0));
  v11 = *(float *)(a3 + 8) * v8;
  v12 = *(float *)(a3 + 12) * v8;
  *(float *)a2 = v8 * *(float *)a3;
  *(float *)(a2 + 4) = v9;
  *(_DWORD *)(a2 + 48) = v5;
  *(_DWORD *)(a2 + 52) = v6;
  *(_OWORD *)(a2 + 32) = v4;
  *(_DWORD *)(a2 + 56) = v13;
  *(float *)(a2 + 8) = v11;
  *(float *)(a2 + 12) = v12;
  *(_DWORD *)(a2 + 60) = v14;
  *(__m128 *)(a2 + 16) = v10;
  *(_DWORD *)(a2 + 64) = 0;
  return result;
}
