/*
 * XREFs of ?GetOwningProcessSequenceNumber@CWindowNode@@UEBA_KXZ @ 0x1800C1430
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall CWindowNode::GetOwningProcessSequenceNumber(CWindowNode *this)
{
  return *((_QWORD *)this + 76);
}
