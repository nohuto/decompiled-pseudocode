/*
 * XREFs of ?AddRef@CCompositionSurface@@UEBAJXZ @ 0x1C004C5B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall CCompositionSurface::AddRef(CCompositionSurface *this)
{
  return ObReferenceObjectByPointer((char *)this - 32, 3u, g_pDxgkCompositionObjectType, 0);
}
