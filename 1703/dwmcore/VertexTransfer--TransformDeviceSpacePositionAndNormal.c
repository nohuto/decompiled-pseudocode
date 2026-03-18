/*
 * XREFs of VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x1801BEF88
 * Callers:
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BD014 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldX.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BD1C0 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1801BD1C0.c)
 *     VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BD360 (VertexTransfer--Transfer_VertexTransfer--CGeneral3DOperator_Vertex_UVxN_VertexXYW_C_ea_1801BD360.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BD6CC (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_World.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BD810 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_1801BD810.c)
 *     VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BD948 (VertexTransfer--Transfer_VertexTransfer--CNonScale2DOperator_Vertex_UVxN_VertexXYW__ea_1801BD948.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BDCF0 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BDE68 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801BDE68.c)
 *     VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801BDFD4 (VertexTransfer--Transfer_VertexTransfer--CScale2DOperator_Vertex_UVxN_VertexXYW_Col_ea_1801BDFD4.c)
 * Callees:
 *     __security_check_cookie @ 0x1800D2E60 (__security_check_cookie.c)
 *     ?TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z @ 0x180132DC0 (-TransformIgnoreZW@CMILMatrix@@QEBAXPEBUD2D_POINT_2F@@PEAUMilPoint4F@@I@Z.c)
 */

__int64 __fastcall VertexTransfer::TransformDeviceSpacePositionAndNormal(
        struct D2D_POINT_2F *a1,
        CMILMatrix *this,
        __int64 a3,
        __int64 a4)
{
  float v4; // xmm5_4
  float v5; // xmm1_4
  float v6; // xmm0_4
  _DWORD *v7; // r10
  __int64 result; // rax
  float v9[3]; // [rsp+20h] [rbp-28h] BYREF
  float v10; // [rsp+2Ch] [rbp-1Ch]

  if ( this )
  {
    CMILMatrix::TransformIgnoreZW(this, a1, (struct MilPoint4F *)v9);
    v4 = v10;
    v5 = v9[2];
    v6 = v9[1] / v10;
    *(float *)(a4 + 16) = v9[0] / v10;
    *(float *)(a4 + 20) = v6;
    *(float *)(a4 + 24) = v5 / v4;
    *(_DWORD *)(a4 + 32) = *v7;
    *(_DWORD *)(a4 + 36) = v7[1];
    *(_DWORD *)(a4 + 40) = v7[2];
    result = (unsigned int)v7[3];
    *(_DWORD *)(a4 + 44) = result;
  }
  else
  {
    *(FLOAT *)(a4 + 16) = a1->x;
    result = LODWORD(a1->y);
    *(_QWORD *)(a4 + 20) = (unsigned int)result;
    *(_OWORD *)(a4 + 32) = _xmm;
  }
  *(_DWORD *)(a4 + 28) = 0;
  return result;
}
