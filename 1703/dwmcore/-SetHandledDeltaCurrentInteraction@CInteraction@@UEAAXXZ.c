/*
 * XREFs of ?SetHandledDeltaCurrentInteraction@CInteraction@@UEAAXXZ @ 0x180167350
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::SetHandledDeltaCurrentInteraction(CInteraction *this)
{
  *((_BYTE *)this + 784) |= 7u;
  *((_DWORD *)this + 190) = 2;
}
