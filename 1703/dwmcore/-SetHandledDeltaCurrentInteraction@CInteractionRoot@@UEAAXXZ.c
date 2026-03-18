/*
 * XREFs of ?SetHandledDeltaCurrentInteraction@CInteractionRoot@@UEAAXXZ @ 0x180194E40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionRoot::SetHandledDeltaCurrentInteraction(CInteractionRoot *this)
{
  *((_BYTE *)this + 456) |= 7u;
  *((_DWORD *)this + 108) = 2;
}
