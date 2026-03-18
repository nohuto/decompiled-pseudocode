/*
 * XREFs of ?StartInteraction@CInteractionRoot@@UEAAJ_N0K@Z @ 0x1801A3DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@K@Z @ 0x18019D854 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@K@Z.c)
 */

__int64 __fastcall CInteractionRoot::StartInteraction(CInteractionRoot *this, __int64 a2, char a3, unsigned int a4)
{
  return CInteractionProcessor::StartInteraction((CInteractionRoot *)((char *)this + 32), a2, a3, 0LL, a4);
}
