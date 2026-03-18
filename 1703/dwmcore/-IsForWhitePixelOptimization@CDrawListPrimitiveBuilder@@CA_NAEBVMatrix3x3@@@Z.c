/*
 * XREFs of ?IsForWhitePixelOptimization@CDrawListPrimitiveBuilder@@CA_NAEBVMatrix3x3@@@Z @ 0x18015C33C
 * Callers:
 *     ?InsertWARP@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18015BF50 (-InsertWARP@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 * Callees:
 *     memcmp_0 @ 0x1800D5390 (memcmp_0.c)
 */

bool __fastcall CDrawListPrimitiveBuilder::IsForWhitePixelOptimization(const struct Matrix3x3 *a1)
{
  if ( (dword_180241CAC & 1) == 0 )
  {
    dword_180241CD0 = LODWORD(FLOAT_1_0);
    dword_180241CAC |= 1u;
    qword_180241CB0 = 0LL;
    qword_180241CB8 = 0LL;
    qword_180241CC0 = 0LL;
    qword_180241CC8 = 0LL;
  }
  return memcmp_0(a1, &qword_180241CB0, 0x24uLL) == 0;
}
