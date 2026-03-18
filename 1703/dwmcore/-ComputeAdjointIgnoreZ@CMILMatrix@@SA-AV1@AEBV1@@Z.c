/*
 * XREFs of ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x18001EDF0
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18001C9DC (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18001CB1C (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____0_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BCEE0 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_V.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BD014 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldX.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BD1C0 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1801BD1C0.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BD360 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1801BD360.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CMILMatrix::ComputeAdjointIgnoreZ(__int64 a1, float *a2)
{
  float v2; // xmm1_4
  float v3; // xmm14_4
  float v4; // xmm13_4
  float v5; // xmm11_4
  float v6; // xmm8_4
  float v7; // xmm5_4
  float v8; // xmm4_4
  float v9; // xmm2_4
  float v10; // xmm7_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm3_4

  v2 = a2[12];
  v3 = (float)(*a2 * a2[5]) - (float)(a2[1] * a2[4]);
  v4 = (float)(v2 * a2[1]) - (float)(a2[13] * *a2);
  v5 = (float)(a2[13] * a2[4]) - (float)(v2 * a2[5]);
  v6 = (float)(a2[3] * a2[4]) - (float)(a2[7] * *a2);
  v7 = a2[7] * a2[13];
  v8 = (float)(a2[15] * *a2) - (float)(a2[3] * v2);
  v9 = (float)(a2[7] * v2) - (float)(a2[15] * a2[4]);
  v10 = a2[3] * a2[13];
  v11 = (float)(a2[7] * a2[1]) - (float)(a2[3] * a2[5]);
  v12 = a2[15] * a2[1];
  v13 = a2[15] * a2[5];
  *(_DWORD *)(a1 + 8) = 0;
  *(float *)(a1 + 28) = v6;
  *(float *)(a1 + 48) = v5;
  *(float *)(a1 + 52) = v4;
  *(float *)(a1 + 4) = v10 - v12;
  *(float *)(a1 + 60) = v3;
  *(_DWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0LL;
  *(_QWORD *)(a1 + 40) = 0LL;
  *(_DWORD *)(a1 + 56) = 0;
  *(float *)a1 = v13 - v7;
  *(float *)(a1 + 12) = v11;
  *(float *)(a1 + 16) = v9;
  *(float *)(a1 + 20) = v8;
  *(_DWORD *)(a1 + 64) = 0;
  return a1;
}
