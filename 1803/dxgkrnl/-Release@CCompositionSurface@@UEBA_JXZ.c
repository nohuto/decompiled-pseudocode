/*
 * XREFs of ?Release@CCompositionSurface@@UEBA_JXZ @ 0x1C004C860
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LONG_PTR __fastcall CCompositionSurface::Release(CCompositionSurface *this)
{
  return ObfDereferenceObject((char *)this - 32);
}
