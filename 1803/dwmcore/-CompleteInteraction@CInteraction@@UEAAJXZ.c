/*
 * XREFs of ?CompleteInteraction@CInteraction@@UEAAJXZ @ 0x180191BE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::CompleteInteraction(CInteraction *this)
{
  unsigned __int64 v1; // rax

  v1 = *((_QWORD *)this + 33);
  *((_BYTE *)this + 184) = *((_BYTE *)this + 184) & 0xF3 | (2 * (*((_BYTE *)this + 184) & 2));
  return CInteractionProcessor::CompleteInteraction(
           (CInteraction *)((char *)this + 344),
           (struct IManipulationResource *)((v1 + 64) & ((unsigned __int128)-(__int128)v1 >> 64)));
}
