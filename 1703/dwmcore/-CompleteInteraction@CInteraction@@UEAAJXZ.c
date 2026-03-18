/*
 * XREFs of ?CompleteInteraction@CInteraction@@UEAAJXZ @ 0x1801668B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::CompleteInteraction(CInteraction *this)
{
  *((_BYTE *)this + 200) = *((_BYTE *)this + 200) & 0xF3 | (2 * (*((_BYTE *)this + 200) & 2));
  return CInteractionProcessor::CompleteInteraction(
           (CInteraction *)((char *)this + 360),
           *((struct IManipulationResource **)this + 35));
}
