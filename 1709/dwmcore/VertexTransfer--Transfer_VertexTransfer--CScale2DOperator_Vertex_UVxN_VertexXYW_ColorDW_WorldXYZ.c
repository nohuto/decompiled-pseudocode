/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D7314
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1800735F8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180073C78 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?BlendPremultipliedColorDW@@YAKKM@Z @ 0x180154F9C (-BlendPremultipliedColorDW@@YAKKM@Z.c)
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@PEAUD2D_POINT_2F@@@Z @ 0x1801D76A4 (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBU-$V.c)
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x1801D7D90 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 */

struct D2DQuaternion *__fastcall VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        __int64 a2,
        float *a3,
        float *a4)
{
  struct D2DQuaternion *result; // rax
  struct D2D_POINT_2F *v6; // r15
  unsigned int v7; // ebp
  unsigned int v8; // r12d
  int v9; // r8d
  float v11; // xmm6_4
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int128 v14; // [rsp+30h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF
  char v16; // [rsp+90h] [rbp+8h] BYREF
  __int64 v17; // [rsp+98h] [rbp+10h]

  result = (struct D2DQuaternion *)&retaddr;
  v17 = a2;
  v6 = *(struct D2D_POINT_2F **)a1;
  v7 = 0;
  v8 = *(_DWORD *)(a1 + 20);
  v9 = a2;
  v11 = *(float *)(a1 + 44);
  v14 = _xmm;
  if ( a3 && a4 )
  {
    result = CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v14, (__int64)v6, (__int64 *)(a1 + 8), a3, a4);
    v9 = v17;
    v14 = *(_OWORD *)result;
  }
  if ( v8 )
  {
    do
    {
      v12 = *(_QWORD *)(a1 + 8) + (int)(v7 * *(_DWORD *)(a1 + 16));
      v13 = *(_QWORD *)(a1 + 56) + (int)(v7 * *(_DWORD *)(a1 + 64));
      Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>(
        *(_DWORD *)(a1 + 8) + v7 * *(_DWORD *)(a1 + 16),
        *(_DWORD *)(a1 + 24) + v7 * *(_DWORD *)(a1 + 32),
        *(_DWORD *)(a1 + 40),
        v9,
        v13,
        (__int64)&v16);
      *(_DWORD *)(v13 + 8) = 1065353216;
      *(_DWORD *)(v13 + 12) = BlendPremultipliedColorDW(*(_DWORD *)(v12 + 12), v11);
      result = (struct D2DQuaternion *)VertexTransfer::TransformDeviceSpacePositionAndNormal(v6, (CMILMatrix *)a3);
      v9 = v17;
      ++v6;
      ++v7;
    }
    while ( v7 < v8 );
  }
  return result;
}
