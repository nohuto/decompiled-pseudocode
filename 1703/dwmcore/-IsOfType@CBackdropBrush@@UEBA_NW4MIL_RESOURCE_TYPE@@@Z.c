/*
 * XREFs of ?IsOfType@CBackdropBrush@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x18001B370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CBackdropBrush::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 81) & 0xFFFFFFF5) == 0 && a2 != 89;
}
