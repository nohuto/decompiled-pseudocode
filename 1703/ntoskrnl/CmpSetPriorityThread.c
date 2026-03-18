/*
 * XREFs of CmpSetPriorityThread @ 0x14003B948
 * Callers:
 *     CmpDoFileWrite @ 0x1404D76CC (CmpDoFileWrite.c)
 *     CmpDoSystemCacheWrite @ 0x14066A6BC (CmpDoSystemCacheWrite.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
KPRIORITY __stdcall CmpSetPriorityThread(PKTHREAD Thread, KPRIORITY Priority)
{
  return KeSetPriorityThread(Thread, Priority);
}
