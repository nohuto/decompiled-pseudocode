/*
 * XREFs of ?GetNumContacts@CInteraction@@EEBAIK@Z @ 0x1800CC7E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::GetNumContacts(CInteraction *this, int a2)
{
  return *((unsigned int *)this + (unsigned int)(a2 - 1) + 64);
}
