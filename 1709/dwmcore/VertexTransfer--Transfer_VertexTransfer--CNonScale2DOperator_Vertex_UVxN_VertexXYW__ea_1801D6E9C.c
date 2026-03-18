/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1801D6E9C
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x1800735F8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x180073C78 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?Transform@?$CNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x1801D7D18 (-Transform@-$CNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTr.c)
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x1801D7D90 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 */

struct D2DQuaternion *__fastcall VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        __int64 a2,
        float *a3,
        float *a4)
{
  struct D2DQuaternion *result; // rax
  unsigned int v5; // edi
  struct D2D_POINT_2F *v6; // rbp
  unsigned int v8; // r14d
  float v11; // xmm6_4
  __int64 v12; // r8
  unsigned int v13; // r9d
  __int64 v14; // r10
  __int128 v15; // [rsp+30h] [rbp-58h] BYREF
  _UNKNOWN *retaddr; // [rsp+88h] [rbp+0h] BYREF

  result = (struct D2DQuaternion *)&retaddr;
  v5 = 0;
  v6 = *(struct D2D_POINT_2F **)a1;
  v8 = *(_DWORD *)(a1 + 20);
  v11 = *(float *)(a1 + 44);
  v15 = _xmm;
  if ( a3 && a4 )
  {
    result = CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v15, (__int64)v6, (__int64 *)(a1 + 8), a3, a4);
    v15 = *(_OWORD *)result;
  }
  if ( v8 )
  {
    do
    {
      VertexTransfer::CNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        a1,
        *(_DWORD *)(a1 + 8) + v5 * *(_DWORD *)(a1 + 16),
        *(_DWORD *)(a1 + 8) + v5 * *(_DWORD *)(a1 + 16),
        *(_DWORD *)(a1 + 40),
        a2,
        *(_QWORD *)(a1 + 56) + (int)(v5 * *(_DWORD *)(a1 + 64)));
      v13 = *(_DWORD *)(v12 + 12);
      *(_DWORD *)(v14 + 12) = (int)(float)(unsigned __int8)v13 | (((int)(float)BYTE1(v13) | (((int)(float)BYTE2(v13) | ((int)(float)((float)HIBYTE(v13) * v11) << 8)) << 8)) << 8);
      result = (struct D2DQuaternion *)VertexTransfer::TransformDeviceSpacePositionAndNormal(v6++, (CMILMatrix *)a3);
      ++v5;
    }
    while ( v5 < v8 );
  }
  return result;
}
