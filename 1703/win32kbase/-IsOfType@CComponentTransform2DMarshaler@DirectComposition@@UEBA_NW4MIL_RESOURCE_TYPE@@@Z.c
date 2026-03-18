/*
 * XREFs of ?IsOfType@CComponentTransform2DMarshaler@DirectComposition@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1C001FB20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall DirectComposition::CComponentTransform2DMarshaler::IsOfType(__int64 a1, int a2)
{
  char v2; // cl

  v2 = 1;
  if ( a2 != 28 )
    return (unsigned int)(a2 - 116) <= 1;
  return v2;
}
