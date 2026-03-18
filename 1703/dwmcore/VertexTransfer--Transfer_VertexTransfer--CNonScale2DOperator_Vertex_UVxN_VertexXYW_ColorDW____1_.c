/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801BD498
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18008B150 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ?Transform@?$CNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x1801BED30 (-Transform@-$CNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU.c)
 */

__int64 __fastcall VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  __int64 i; // r11
  __int64 v6; // r8
  unsigned int v7; // r9d
  float v8; // xmm4_4
  __int64 result; // rax
  __int64 v10; // r10

  v2 = *(_DWORD *)(a1 + 20);
  v3 = 0;
  for ( i = a1; v3 < v2; *(_DWORD *)(v10 + 12) = a1 )
  {
    VertexTransfer::CNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
      a1,
      *(_DWORD *)(i + 8) + v3 * *(_DWORD *)(i + 16),
      *(_DWORD *)(i + 8) + v3 * *(_DWORD *)(i + 16),
      *(_DWORD *)(i + 40),
      a2,
      *(_QWORD *)(i + 56) + (int)(v3 * *(_DWORD *)(i + 64)));
    v7 = *(_DWORD *)(v6 + 12);
    ++v3;
    result = (unsigned int)(int)(float)((float)(unsigned __int8)v7 * v8);
    LODWORD(a1) = result | (((int)(float)((float)BYTE1(v7) * v8) | (((int)(float)((float)BYTE2(v7) * v8) | ((int)(float)((float)HIBYTE(v7) * v8) << 8)) << 8)) << 8);
  }
  return result;
}
