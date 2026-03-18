/*
 * XREFs of ?StartInteraction@CInteraction@@UEAAJ_N0W4InputType@@@Z @ 0x180192AE0
 * Callers:
 *     <none>
 * Callees:
 *     ?StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z @ 0x1801D651C (-StartInteraction@CInteractionProcessor@@QEAAJ_N0PEAUIManipulationResource@@W4InputType@@@Z.c)
 */

__int64 __fastcall CInteraction::StartInteraction(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  return CInteractionProcessor::StartInteraction(
           a1 + 344,
           a2,
           a3,
           (*(_QWORD *)(a1 + 264) + 64LL) & -(__int64)(*(_QWORD *)(a1 + 264) != 0LL),
           a4);
}
