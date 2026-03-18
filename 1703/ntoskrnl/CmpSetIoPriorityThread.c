/*
 * XREFs of CmpSetIoPriorityThread @ 0x14003B93C
 * Callers:
 *     CmpDoFileWrite @ 0x1404D76CC (CmpDoFileWrite.c)
 *     CmpDoSystemCacheWrite @ 0x14066A6BC (CmpDoSystemCacheWrite.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 CmpSetIoPriorityThread()
{
  return PsSetIoPriorityThread();
}
