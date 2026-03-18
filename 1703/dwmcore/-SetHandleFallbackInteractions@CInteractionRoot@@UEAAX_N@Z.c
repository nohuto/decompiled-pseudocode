/*
 * XREFs of ?SetHandleFallbackInteractions@CInteractionRoot@@UEAAX_N@Z @ 0x1800CCF10
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CInteractionRoot::SetHandleFallbackInteractions(CInteractionRoot *this, char a2)
{
  *((_BYTE *)this + 904) &= ~4u;
  *((_BYTE *)this + 904) |= 4 * a2;
}
