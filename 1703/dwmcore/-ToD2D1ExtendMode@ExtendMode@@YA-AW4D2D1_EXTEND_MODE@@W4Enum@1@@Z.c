/*
 * XREFs of ?ToD2D1ExtendMode@ExtendMode@@YA?AW4D2D1_EXTEND_MODE@@W4Enum@1@@Z @ 0x18015E75C
 * Callers:
 *     ?InsertWARP@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttributesDesc@@PEBUD2D_MATRIX_3X2_F@@@Z @ 0x18015BF50 (-InsertWARP@CDrawListPrimitiveBuilder@@AEAAJAEBUPrimitiveGeometryDesc@@PEBUPrimitiveVertexAttrib.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExtendMode::ToD2D1ExtendMode(unsigned __int8 a1)
{
  __int64 result; // rax

  if ( a1 <= 1u )
    return 0LL;
  result = 2LL;
  if ( a1 == 2 )
    return 1LL;
  if ( a1 != 3 )
    return 0LL;
  return result;
}
