/*
 * XREFs of ?AddRef@CD3DSurface@@WHI@EAAKXZ @ 0x1800C6D60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CD3DSurface::AddRef(__int64 a1)
{
  return CManipulationFrame::AddRef((CManipulationFrame *)(a1 - 120));
}
