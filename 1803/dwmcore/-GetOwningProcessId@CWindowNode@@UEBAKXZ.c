/*
 * XREFs of ?GetOwningProcessId@CWindowNode@@UEBAKXZ @ 0x1800D6610
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CWindowNode::GetOwningProcessId(CWindowNode *this)
{
  return *((unsigned int *)this + 156);
}
