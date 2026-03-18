/*
 * XREFs of ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@PEAUD2D_POINT_2F@@@Z @ 0x1801BE958
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BDCF0 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BDE68 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801BDE68.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BDFD4 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801BDFD4.c)
 * Callees:
 *     sqrtf_0 @ 0x1800D53C0 (sqrtf_0.c)
 */

float *__fastcall Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
        float *a1,
        __int64 a2,
        unsigned int a3,
        float *a4,
        float *a5,
        float *a6)
{
  float v7; // xmm2_4
  float v9; // xmm3_4
  float v10; // xmm1_4
  float v11; // xmm4_4
  float v12; // xmm6_4
  __int64 v13; // rsi
  __m128 v14; // xmm8
  float v15; // xmm0_4
  float v16; // xmm9_4
  float v17; // xmm1_4
  float v18; // xmm7_4
  float v19; // xmm3_4
  float v20; // xmm10_4
  float v21; // xmm6_4
  float *result; // rax
  __int64 v23; // rbx
  __int64 v24; // rdx
  __m128 v25; // xmm2
  __m128 v26; // xmm1

  v7 = a4[4];
  v9 = a1[1] - *(float *)(a2 + 4);
  v10 = a4[5];
  v11 = *a1 - *(float *)a2;
  v12 = a4[1];
  v13 = a3;
  v14 = (__m128)LODWORD(FLOAT_1_0);
  v15 = v10 * COERCE_FLOAT(HIDWORD(*(_QWORD *)a2));
  v16 = (float)((float)(*a4 * COERCE_FLOAT(*(_QWORD *)a2)) + (float)(v7 * COERCE_FLOAT(HIDWORD(*(_QWORD *)a2))))
      + a4[12];
  v17 = v10 * v9;
  v18 = (float)(*a4 * v11) + (float)(v7 * v9);
  v19 = FLOAT_1_0;
  v20 = (float)((float)(v12 * COERCE_FLOAT(*(_QWORD *)a2)) + v15) + a4[13];
  v21 = (float)(v12 * v11) + v17;
  if ( v18 != 0.0 || v21 != 0.0 )
    v19 = *(float *)(a2 + 8) / sqrtf_0((float)(v21 * v21) + (float)(v18 * v18));
  result = a6;
  *a6 = v16;
  a6[1] = v20;
  *a5 = (float)(v18 * v19) + v16;
  a5[1] = (float)(v21 * v19) + v20;
  if ( (_DWORD)v13 )
  {
    v23 = a2 - (_QWORD)a1;
    v14.m128_f32[0] = 1.0 - v19;
    result = a1 + 5;
    v24 = v13;
    do
    {
      v25 = v14;
      v26 = v14;
      v25.m128_f32[0] = (float)(v14.m128_f32[0] * *(float *)((char *)result + v23 - 4)) + (float)(v19 * *(result - 1));
      v26.m128_f32[0] = (float)(v14.m128_f32[0] * *(float *)((char *)result + v23)) + (float)(v19 * *result);
      *(_QWORD *)((char *)result + (char *)a5 - (char *)a1 + 28) = _mm_unpacklo_ps(v25, v26).m128_u64[0];
      result += 2;
      --v24;
    }
    while ( v24 );
  }
  return result;
}
