/*
 * XREFs of ?SetHandleFallbackInteractions@CInteraction@@UEAAX_N@Z @ 0x1800C16E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteraction::SetHandleFallbackInteractions(CInteraction *this, char a2)
{
  *((_BYTE *)this + 1440) &= ~4u;
  *((_BYTE *)this + 1440) |= 4 * a2;
}
