/*
 * XREFs of ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x18018F57C
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801D64D4 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801D65B8 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801D66EC (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D67B8 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldX.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D6908 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1801D6908.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D6AA8 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1801D6AA8.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILMatrix::ComputeAdjointIgnoreZ(__int64 a1, float *a2)
{
  float v2; // xmm5_4
  float v3; // xmm3_4
  float v4; // xmm4_4
  float v5; // xmm6_4
  float v6; // xmm7_4
  float v7; // xmm8_4
  float v8; // xmm9_4
  float v9; // xmm10_4
  float v10; // xmm11_4

  v2 = a2[7];
  v3 = a2[15];
  v4 = a2[3];
  v5 = a2[12];
  v6 = a2[13];
  v7 = *a2;
  v8 = a2[1];
  v9 = a2[4];
  v10 = a2[5];
  *(_DWORD *)(a1 + 8) = 0;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(float *)a1 = (float)(v3 * v10) - (float)(v2 * v6);
  *(float *)(a1 + 4) = (float)(v6 * v4) - (float)(v8 * v3);
  *(float *)(a1 + 12) = (float)(v8 * v2) - (float)(v10 * v4);
  *(float *)(a1 + 16) = (float)(v5 * v2) - (float)(v9 * v3);
  *(float *)(a1 + 20) = (float)(v7 * v3) - (float)(v5 * v4);
  *(float *)(a1 + 28) = (float)(v9 * v4) - (float)(v7 * v2);
  *(float *)(a1 + 60) = (float)(v10 * v7) - (float)(v9 * v8);
  *(float *)(a1 + 52) = (float)(v8 * v5) - (float)(v6 * v7);
  *(float *)(a1 + 48) = (float)(v9 * v6) - (float)(v10 * v5);
  *(_DWORD *)(a1 + 64) = 0;
  return a1;
}
