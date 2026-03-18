/*
 * XREFs of ?RemoveContact@CInteraction@@UEAAXK@Z @ 0x1801670B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::RemoveContact(CInteraction *this, unsigned int a2)
{
  CInteractionProcessor::RemoveContact((CInteraction *)((char *)this + 360), a2);
}
