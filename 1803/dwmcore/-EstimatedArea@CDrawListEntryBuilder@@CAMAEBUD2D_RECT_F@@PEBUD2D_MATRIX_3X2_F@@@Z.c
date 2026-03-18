/*
 * XREFs of ?EstimatedArea@CDrawListEntryBuilder@@CAMAEBUD2D_RECT_F@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800C2148
 * Callers:
 *     ?InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x1800AF0D0 (-InsertHW@CDrawListEntryBuilder@@AEAAJUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@.c)
 * Callees:
 *     sqrtf_0 @ 0x1800DD3E3 (sqrtf_0.c)
 */

float __fastcall CDrawListEntryBuilder::EstimatedArea(const struct D2D_RECT_F *a1, const struct D2D_MATRIX_3X2_F *a2)
{
  float v3; // xmm6_4
  float v5; // xmm1_4

  v3 = FLOAT_1_0;
  v5 = FLOAT_1_0;
  if ( a2 )
  {
    v3 = sqrtf_0((float)(a2->m11 * a2->m11) + (float)(a2->m12 * a2->m12));
    v5 = sqrtf_0((float)(a2->m21 * a2->m21) + (float)(a2->m22 * a2->m22));
  }
  return (float)((float)(a1->bottom - a1->top) * v5) * (float)((float)(a1->right - a1->left) * v3);
}
