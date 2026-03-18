/*
 * XREFs of IoSetIoPriorityHintIntoThread @ 0x140044E50
 * Callers:
 *     <none>
 * Callees:
 *     PsSetIoPriorityThread @ 0x14004387C (PsSetIoPriorityThread.c)
 */

__int64 __fastcall IoSetIoPriorityHintIntoThread(__int64 a1, unsigned int a2)
{
  if ( a2 < 5 )
    PsSetIoPriorityThread(a1, a2);
  return a2 >= 5 ? 0xC000000D : 0;
}
