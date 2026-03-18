/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BDA28
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18008B150 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ??$Transform2DAndFillPosXYUVs@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU0@PEAUD2D_POINT_2F@@@Z @ 0x180021EEC (--$Transform2DAndFillPosXYUVs@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBU-$Vertex_UVxN@UVerte.c)
 */

unsigned __int64 __fastcall VertexTransfer::Transfer_VertexTransfer::CScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        float *a2)
{
  unsigned __int64 result; // rax
  unsigned int v3; // r14d
  unsigned int v4; // ebp
  float i; // xmm6_4
  __int64 v8; // rbx
  __int64 v9; // rdi
  unsigned int v10; // ecx
  float v11[4]; // [rsp+30h] [rbp-38h] BYREF
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v3 = *(_DWORD *)(a1 + 20);
  v4 = 0;
  for ( i = *(float *)(a1 + 44);
        v4 < v3;
        *(_DWORD *)(v9 + 12) = result | (((int)(float)((float)BYTE1(v10) * i) | (((int)(float)((float)BYTE2(v10) * i) | ((int)(float)((float)HIBYTE(v10) * i) << 8)) << 8)) << 8) )
  {
    v8 = *(_QWORD *)(a1 + 8) + (int)(v4 * *(_DWORD *)(a1 + 16));
    v9 = *(_QWORD *)(a1 + 56) + (int)(v4 * *(_DWORD *)(a1 + 64));
    Transform2DAndFillPosXYUVs<Vertex_UVxN<VertexXYW_ColorDW>>(
      (float *)v8,
      *(_QWORD *)(a1 + 24) + (int)(v4 * *(_DWORD *)(a1 + 32)),
      *(_DWORD *)(a1 + 40),
      a2,
      (float *)v9,
      v11);
    *(_DWORD *)(v9 + 8) = 1065353216;
    v10 = *(_DWORD *)(v8 + 12);
    ++v4;
    result = (unsigned int)(int)(float)((float)(unsigned __int8)v10 * i);
  }
  return result;
}
