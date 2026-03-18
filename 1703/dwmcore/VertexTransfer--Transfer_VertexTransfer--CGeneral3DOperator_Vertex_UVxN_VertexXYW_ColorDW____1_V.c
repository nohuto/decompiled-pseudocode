/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___ @ 0x18001C9DC
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@@Z @ 0x18008B150 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMa.c)
 * Callees:
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU3@@Z @ 0x18001CBE8 (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW@@@@@VertexTransfer@@QEAAXAEBU-.c)
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x18001EDF0 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 */

__int64 __fastcall VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW____1_Vertex_UVxN_VertexXYW_ColorDW___(
        __int64 a1,
        __int64 a2)
{
  __int64 v4; // rax
  unsigned int v5; // r15d
  unsigned int v6; // ebp
  float v7; // xmm6_4
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int64 result; // rax
  __int64 v12; // rbx
  __int64 v13; // rdi
  unsigned int v14; // ecx
  _OWORD v15[4]; // [rsp+30h] [rbp-D8h] BYREF
  int i; // [rsp+70h] [rbp-98h]
  __int64 v17; // [rsp+80h] [rbp-88h] BYREF

  v4 = CMILMatrix::ComputeAdjointIgnoreZ(&v17);
  v5 = *(_DWORD *)(a1 + 20);
  v6 = 0;
  v7 = *(float *)(a1 + 44);
  v8 = *(_OWORD *)(v4 + 16);
  v15[0] = *(_OWORD *)v4;
  v15[1] = v8;
  v9 = *(_OWORD *)(v4 + 32);
  v10 = *(_OWORD *)(v4 + 48);
  result = *(unsigned int *)(v4 + 64);
  v15[2] = v9;
  v15[3] = v10;
  for ( i = result;
        v6 < v5;
        *(_DWORD *)(v13 + 12) = result | (((int)(float)((float)BYTE1(v14) * v7) | (((int)(float)((float)BYTE2(v14) * v7) | ((int)(float)((float)HIBYTE(v14) * v7) << 8)) << 8)) << 8) )
  {
    v12 = *(_QWORD *)(a1 + 8) + (int)(v6 * *(_DWORD *)(a1 + 16));
    v13 = *(_QWORD *)(a1 + 56) + (int)(v6 * *(_DWORD *)(a1 + 64));
    VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW>>::Transform(
      (unsigned int)v15,
      *(_DWORD *)(a1 + 8) + v6 * *(_DWORD *)(a1 + 16),
      *(_DWORD *)(a1 + 24) + v6 * *(_DWORD *)(a1 + 32),
      *(_DWORD *)(a1 + 40),
      a2,
      v13);
    v14 = *(_DWORD *)(v12 + 12);
    ++v6;
    result = (unsigned int)(int)(float)((float)(unsigned __int8)v14 * v7);
  }
  return result;
}
