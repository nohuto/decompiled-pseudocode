/*
 * XREFs of ?HasSingleTarget@CManipulationContext@@UEBAHXZ @ 0x1800CCE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CManipulationContext::HasSingleTarget(CManipulationContext *this)
{
  return (*((unsigned __int8 *)this + 28) >> 3) & 1;
}
