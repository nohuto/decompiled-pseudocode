/*
 * XREFs of ?SetHandledDeltaCurrentInteraction@CInteraction@@UEAAXXZ @ 0x180169FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::SetHandledDeltaCurrentInteraction(CInteraction *this)
{
  *((_BYTE *)this + 992) |= 7u;
  *((_DWORD *)this + 242) = 2;
}
