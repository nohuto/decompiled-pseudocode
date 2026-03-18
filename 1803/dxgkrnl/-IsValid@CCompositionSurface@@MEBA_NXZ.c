/*
 * XREFs of ?IsValid@CCompositionSurface@@MEBA_NXZ @ 0x1C0011D00
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CCompositionSurface::IsValid(CCompositionSurface *this)
{
  return *((_BYTE *)this + 40);
}
