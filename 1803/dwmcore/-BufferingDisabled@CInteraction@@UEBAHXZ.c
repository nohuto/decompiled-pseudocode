/*
 * XREFs of ?BufferingDisabled@CInteraction@@UEBAHXZ @ 0x1800D69E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CInteraction::BufferingDisabled(CInteraction *this)
{
  return (*((unsigned __int8 *)this + 184) >> 4) & 1;
}
