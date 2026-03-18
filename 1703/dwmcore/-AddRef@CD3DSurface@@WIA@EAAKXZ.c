/*
 * XREFs of ?AddRef@CD3DSurface@@WIA@EAAKXZ @ 0x1800D5F80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DSurface::AddRef(__int64 a1)
{
  return CManipulationFrame::AddRef((CManipulationFrame *)(a1 - 128));
}
