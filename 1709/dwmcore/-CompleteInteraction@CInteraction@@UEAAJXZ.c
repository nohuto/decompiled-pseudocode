/*
 * XREFs of ?CompleteInteraction@CInteraction@@UEAAJXZ @ 0x1801692F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::CompleteInteraction(CInteraction *this)
{
  unsigned __int64 v1; // rax

  v1 = *((_QWORD *)this + 37);
  *((_BYTE *)this + 216) = *((_BYTE *)this + 216) & 0xF3 | (2 * (*((_BYTE *)this + 216) & 2));
  return CInteractionProcessor::CompleteInteraction(
           (CInteraction *)((char *)this + 376),
           (struct IManipulationResource *)((v1 + 64) & ((unsigned __int128)-(__int128)v1 >> 64)));
}
