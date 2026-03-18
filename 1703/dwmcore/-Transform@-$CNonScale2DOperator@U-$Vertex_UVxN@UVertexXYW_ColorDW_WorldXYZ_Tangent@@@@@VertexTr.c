/*
 * XREFs of ?Transform@?$CNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x1801BEDA4
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BD6CC (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_World.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BD810 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_1801BD810.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BD948 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_1801BD948.c)
 * Callees:
 *     <none>
 */

float *__fastcall VertexTransfer::CNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        __int64 a1,
        float *a2,
        __int64 a3,
        unsigned int a4,
        float *a5,
        __int64 a6)
{
  float *result; // rax
  float v7; // xmm1_4
  char *v8; // rdx
  __int64 v9; // rcx

  result = a5;
  *(float *)a6 = (float)((float)(a5[4] * a2[1]) + (float)(*a2 * *a5)) + a5[12];
  v7 = (float)((float)(a5[1] * *a2) + (float)(a5[5] * a2[1])) + a5[13];
  *(_DWORD *)(a6 + 8) = 1065353216;
  *(float *)(a6 + 4) = v7;
  if ( a4 )
  {
    result = (float *)(a6 + 48);
    v8 = (char *)a2 - a6;
    v9 = a4;
    do
    {
      *(_QWORD *)result = *(_QWORD *)((char *)result + (_QWORD)v8 - 32);
      result += 2;
      --v9;
    }
    while ( v9 );
  }
  return result;
}
