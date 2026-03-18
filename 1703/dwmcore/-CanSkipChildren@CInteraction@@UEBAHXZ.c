/*
 * XREFs of ?CanSkipChildren@CInteraction@@UEBAHXZ @ 0x180166890
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::CanSkipChildren(CInteraction *this)
{
  return CInteractionProcessor::CanSkipChildren((CInteraction *)((char *)this + 360));
}
