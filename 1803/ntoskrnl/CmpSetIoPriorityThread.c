/*
 * XREFs of CmpSetIoPriorityThread @ 0x1400D1A74
 * Callers:
 *     CmpDoFileWrite @ 0x14049BEC0 (CmpDoFileWrite.c)
 * Callees:
 *     PsSetIoPriorityThread @ 0x14004387C (PsSetIoPriorityThread.c)
 */

__int64 __fastcall CmpSetIoPriorityThread(__int64 a1, unsigned int a2)
{
  return PsSetIoPriorityThread(a1, a2);
}
