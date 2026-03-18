/*
 * XREFs of ?IsOfType@CGeometry2DGroup@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x180154260
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CGeometry2DGroup::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 1) & 0xFFFFFFFD) == 0;
}
