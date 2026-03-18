/*
 * XREFs of ?XMConvertFloatToHalf@PackedVector@DirectX@@YAGM@Z @ 0x180015A04
 * Callers:
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180014FC8 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____0_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1800152F8 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_1800152F8.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____2_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x1800155F0 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_1800155F0.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdNonScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180219328 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdNonScale2DOperator_Vertex_UVxN_Ve_ea_180219328.c)
 *     VertexTransfer::SimdTransfer_VertexTransfer::CSimdScale2DOperator_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent____1_Vertex_UVxN_VertexXYW_ColorDW_WorldXYZ_Tangent___ @ 0x180219830 (VertexTransfer--SimdTransfer_VertexTransfer--CSimdScale2DOperator_Vertex_UVxN_Verte_ea_180219830.c)
 *     VertexTransfer::TransformDeviceSpacePositionAndNormal @ 0x18021B094 (VertexTransfer--TransformDeviceSpacePositionAndNormal.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall DirectX::PackedVector::XMConvertFloatToHalf(DirectX::PackedVector *this, float a2)
{
  int v2; // xmm0_4
  unsigned int v3; // edx
  unsigned int v4; // edx
  unsigned int v5; // eax

  v3 = v2 & 0x7FFFFFFF;
  if ( (v2 & 0x7FFFFFFFu) > 0x477FE000 )
  {
    v5 = (v2 & 0x7FFFFF) != 0 && (v2 & 0x7F800000) == 2139095040 ? 0x7FFF : 31744;
  }
  else
  {
    if ( v3 < 0x38800000 )
      v4 = (v2 & 0x7FFFFF | 0x800000u) >> (113 - (v3 >> 23));
    else
      v4 = v3 - 939524096;
    v5 = ((((v4 >> 13) & 1) + v4 + 4095) >> 13) & 0x7FFF;
  }
  return HIWORD(v2) & 0x8000 | v5;
}
