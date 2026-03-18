/*
 * XREFs of ?RemoveContact@CInteractionRoot@@UEAAXK@Z @ 0x1801A2A20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionRoot::RemoveContact(CInteractionRoot *this, int a2)
{
  CInteractionProcessor::RemoveContact((CInteractionRoot *)((char *)this + 32), a2);
}
