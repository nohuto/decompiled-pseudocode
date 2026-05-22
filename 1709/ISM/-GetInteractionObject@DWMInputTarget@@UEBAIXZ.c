/*
 * XREFs of ?GetInteractionObject@DWMInputTarget@@UEBAIXZ @ 0x1800220F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DWMInputTarget::GetInteractionObject(DWMInputTarget *this)
{
  return *((unsigned int *)this + 20);
}
