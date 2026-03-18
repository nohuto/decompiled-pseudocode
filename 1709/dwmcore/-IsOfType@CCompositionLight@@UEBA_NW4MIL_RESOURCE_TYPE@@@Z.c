/*
 * XREFs of ?IsOfType@CCompositionLight@@UEBA_NW4MIL_RESOURCE_TYPE@@@Z @ 0x1800B1610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionLight::IsOfType(__int64 a1, int a2)
{
  return ((a2 - 30) & 0xFFFFFFB7) == 0 && a2 != 38;
}
