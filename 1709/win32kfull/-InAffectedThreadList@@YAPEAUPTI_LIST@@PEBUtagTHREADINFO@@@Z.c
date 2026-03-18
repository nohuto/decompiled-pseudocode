/*
 * XREFs of ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C00C976C
 * Callers:
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00C9610 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     PackAffectedThreadsFromThreadCleanup @ 0x1C00C9730 (PackAffectedThreadsFromThreadCleanup.c)
 *     zzzReattachThreads @ 0x1C00CA9AC (zzzReattachThreads.c)
 * Callees:
 *     <none>
 */

struct PTI_LIST *__fastcall InAffectedThreadList(const struct tagTHREADINFO *a1)
{
  struct PTI_LIST *result; // rax

  for ( result = (struct PTI_LIST *)gListAffectedThreadsForQueueRecalc.Flink;
        result != (struct PTI_LIST *)&gListAffectedThreadsForQueueRecalc;
        result = *(struct PTI_LIST **)result )
  {
    if ( a1 == *((const struct tagTHREADINFO **)result + 2) )
      return result;
  }
  return 0LL;
}
