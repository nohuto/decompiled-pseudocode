/*
 * XREFs of ?StartInteraction@CInteraction@@UEAAJ_N0K@Z @ 0x18016A1D0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@K@Z @ 0x18019D854 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@K@Z.c)
 */

__int64 __fastcall CInteraction::StartInteraction(CInteraction *this, bool a2, bool a3, unsigned int a4)
{
  return CInteractionProcessor::StartInteraction(
           (CInteraction *)((char *)this + 376),
           a2,
           a3,
           (struct IManipulationResource *)((*((_QWORD *)this + 37) + 64LL) & -(__int64)(*((_QWORD *)this + 37) != 0LL)),
           a4);
}
