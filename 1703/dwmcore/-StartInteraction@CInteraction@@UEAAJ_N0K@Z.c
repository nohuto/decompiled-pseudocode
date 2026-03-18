/*
 * XREFs of ?StartInteraction@CInteraction@@UEAAJ_N0K@Z @ 0x180167560
 * Callers:
 *     <none>
 * Callees:
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@K@Z @ 0x180134F84 (-StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@K@Z.c)
 */

__int64 __fastcall CInteraction::StartInteraction(
        struct IManipulationResource **this,
        char a2,
        char a3,
        unsigned int a4)
{
  return CInteractionProcessor::StartInteraction((CInteractionProcessor *)(this + 45), a2, a3, this[35], a4);
}
