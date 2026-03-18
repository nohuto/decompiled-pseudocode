/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18021A188
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x1800ACDB0 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ?Transform@?$CNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x18021AFA8 (-Transform@-$CNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU.c)
 */

__int64 __fastcall VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____2_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  float v4; // xmm2_4
  __int64 i; // r11
  __int64 v7; // r8
  __int64 result; // rax
  __int64 v9; // r10

  v2 = *(_DWORD *)(a1 + 20);
  v3 = 0;
  v4 = *(float *)(a1 + 44);
  for ( i = a1; v3 < v2; *(_DWORD *)(v9 + 12) = a1 )
  {
    VertexTransfer::CNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
      a1,
      *(_DWORD *)(i + 8) + v3 * *(_DWORD *)(i + 16),
      *(_DWORD *)(i + 8) + v3 * *(_DWORD *)(i + 16),
      *(_DWORD *)(i + 40),
      a2,
      *(_QWORD *)(i + 56) + (int)(v3 * *(_DWORD *)(i + 64)));
    ++v3;
    result = (unsigned int)(int)(float)(unsigned __int8)*(_DWORD *)(v7 + 12);
    LODWORD(a1) = result | (((int)(float)(unsigned __int8)BYTE1(*(_DWORD *)(v7 + 12)) | (((int)(float)(unsigned __int8)BYTE2(*(_DWORD *)(v7 + 12)) | ((int)(float)((float)HIBYTE(*(_DWORD *)(v7 + 12)) * v4) << 8)) << 8)) << 8);
  }
  return result;
}
