/*
 * XREFs of VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180219CE4
 * Callers:
 *     ??$TransferVertices@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrimitive@@AEBVCMILMatrix@@_NMAEBV?$StridedSpan@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@@Z @ 0x18000EDB8 (--$TransferVertices@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@@YAXAEBVCDrawListPrim.c)
 * Callees:
 *     ?CalculateTBNFrameFrom3Vertices@@YA?AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV?$StridedSpan@$$CBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@@@AEBVCMILMatrix@@2@Z @ 0x18000E340 (-CalculateTBNFrameFrom3Vertices@@YA-AUD2DQuaternion@@PEBUD2D_POINT_2F@@AEBV-$StridedSpan@$$CBU-$.c)
 *     ?ComputeAdjointIgnoreZ@CMILMatrix@@SA?AV1@AEBV1@@Z @ 0x1800177D4 (-ComputeAdjointIgnoreZ@CMILMatrix@@SA-AV1@AEBV1@@Z.c)
 *     ?BlendPremultipliedColorDW@@YAKKM@Z @ 0x18017E390 (-BlendPremultipliedColorDW@@YAKKM@Z.c)
 *     ?Transform@?$CGeneral3DOperator@U?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTransfer@@QEAAXAEBU?$Vertex_UVxN@UVertexXYW_ColorDW@@@@AEBUVertexAAFixup_UVxN@@IAEBVCMILMatrix@@PEAU?$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@Z @ 0x18021AD7C (-Transform@-$CGeneral3DOperator@U-$Vertex_UVxN@UVertexXYW_ColorDW_WorldXYZ_Tangent@@@@@VertexTra.c)
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x18021B094 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 */

struct D2DQuaternion *__fastcall VertexTransfer::Transfer_VertexTransfer::CGeneral3DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___(
        __int64 a1,
        float *a2,
        float *a3)
{
  struct D2D_POINT_2F *v3; // r12
  __int64 v6; // rax
  CMILMatrix *v7; // rdx
  __int64 v8; // r8
  float *v9; // r9
  float v10; // xmm6_4
  unsigned int v11; // esi
  unsigned int v12; // r13d
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  struct D2DQuaternion *result; // rax
  __int64 v17; // rdi
  __int64 v18; // rbx
  _QWORD v19[3]; // [rsp+30h] [rbp-91h] BYREF
  _OWORD v20[4]; // [rsp+48h] [rbp-79h] BYREF
  int v21; // [rsp+88h] [rbp-39h]
  _BYTE v22[96]; // [rsp+98h] [rbp-29h] BYREF

  v3 = *(struct D2D_POINT_2F **)a1;
  v6 = CMILMatrix::ComputeAdjointIgnoreZ((__int64)v22, a2);
  v10 = *(float *)(a1 + 44);
  v11 = 0;
  v12 = *(_DWORD *)(a1 + 20);
  v13 = *(_OWORD *)(v6 + 16);
  v20[0] = *(_OWORD *)v6;
  v20[1] = v13;
  v14 = *(_OWORD *)(v6 + 32);
  v15 = *(_OWORD *)(v6 + 48);
  result = (struct D2DQuaternion *)*(unsigned int *)(v6 + 64);
  v20[2] = v14;
  v20[3] = v15;
  v21 = (int)result;
  *(_OWORD *)&v19[1] = _xmm;
  if ( a3 && v9 )
  {
    result = CalculateTBNFrameFrom3Vertices((struct D2DQuaternion *)&v19[1], (__int64)v3, (__int64 *)v8, a3, v9);
    v7 = (CMILMatrix *)a2;
    v8 = a1 + 8;
    *(_OWORD *)&v19[1] = *(_OWORD *)result;
  }
  if ( v12 )
  {
    do
    {
      v17 = *(_QWORD *)v8 + (int)(*(_DWORD *)(v8 + 8) * v11);
      v18 = *(_QWORD *)(a1 + 56) + (int)(*(_DWORD *)(a1 + 64) * v11);
      VertexTransfer::CGeneral3DOperator<Vertex_UVxN<VertexXYW_ColorDW_WorldXYZ_Tangent>>::Transform(
        (CMILMatrix *)v20,
        v7,
        v18);
      *(_DWORD *)(v18 + 12) = BlendPremultipliedColorDW(*(_DWORD *)(v17 + 12), v10);
      result = (struct D2DQuaternion *)VertexTransfer::TransformDeviceSpacePositionAndNormal(v3, (CMILMatrix *)a3);
      v7 = (CMILMatrix *)a2;
      v8 = a1 + 8;
      ++v3;
      ++v11;
    }
    while ( v11 < v12 );
  }
  return result;
}
