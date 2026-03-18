/*
 * XREFs of ?ToD2D1InterpolationMode@InterpolationMode@@YA?AW4D2D1_INTERPOLATION_MODE@@W4Enum@1@@Z @ 0x18015E778
 * Callers:
 *     ?InsertWARP@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18015BF50 (-InsertWARP@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall InterpolationMode::ToD2D1InterpolationMode(char a1)
{
  if ( !a1 )
    return 0LL;
  if ( a1 == 2 )
    return 3LL;
  return 1LL;
}
