/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x18021A500
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18000EDB8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18000E340 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?Transform@?$CNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18021B01C (-Transform@-$CNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTr.c)
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x18021B094 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 */

struct D2DQuaternion *__fastcall VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        __int64 a2,
        float *a3,
        float *a4)
{
  struct D2DQuaternion *result; // rax
  unsigned int v5; // ebx
  struct D2D_POINT_2F *v6; // rbp
  unsigned int v8; // r14d
  __int64 v11; // r8
  __int64 v12; // r10
  __int128 v13; // [rsp+30h] [rbp-28h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+0h] BYREF

  result = (struct D2DQuaternion *)&retaddr;
  v5 = 0;
  v6 = *(struct D2D_POINT_2F **)a1;
  v8 = *(_DWORD *)(a1 + 20);
  v13 = _xmm;
  if ( a3 && a4 )
  {
    result = CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v13, (__int64)v6, (__int64 *)(a1 + 8), a3, a4);
    v13 = *(_OWORD *)result;
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
      *(_DWORD *)(v12 + 12) = *(_DWORD *)(v11 + 12);
      result = (struct D2DQuaternion *)VertexTransfer::TransformDeviceSpacePositionAndNormal(v6++, (CMILMatrix *)a3);
      ++v5;
    }
    while ( v5 < v8 );
  }
  return result;
}
