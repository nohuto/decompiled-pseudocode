/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x1801D6BE0
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x180061360 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ?BlendPremultipliedColorDW@@YAKKM@Z @ 0x180154F9C (-BlendPremultipliedColorDW@@YAKKM@Z.c)
 *     ?Transform@?$CNonScale2DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x1801D7CA4 (-Transform@-$CNonScale2DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU.c)
 */

void __fastcall VertexTransfer::Transfer_VertexTransfer::CNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        __int64 a2)
{
  unsigned int v2; // edi
  unsigned int v3; // ebx
  __int64 i; // r11
  __int64 v6; // r10
  float v7; // xmm5_4
  int v8; // eax
  __int64 v9; // r8
  __int64 v10; // [rsp+28h] [rbp-10h]

  v2 = *(_DWORD *)(a1 + 20);
  v3 = 0;
  for ( i = a1; v3 < v2; *(_DWORD *)(v9 + 12) = v8 )
  {
    v10 = *(_QWORD *)(i + 56) + (int)(v3 * *(_DWORD *)(i + 64));
    VertexTransfer::CNonScale2DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
      a1,
      *(_DWORD *)(i + 8) + v3 * *(_DWORD *)(i + 16),
      v10,
      *(_DWORD *)(i + 40),
      a2,
      v10);
    v8 = BlendPremultipliedColorDW(*(_DWORD *)(v6 + 12), v7);
    ++v3;
  }
}
