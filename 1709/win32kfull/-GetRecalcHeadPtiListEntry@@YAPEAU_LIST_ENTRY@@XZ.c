/*
 * XREFs of ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C00CAD88
 * Callers:
 *     zzzReattachThreads @ 0x1C00CA9AC (zzzReattachThreads.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C00CACF0 (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00CADA4 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *GetRecalcHeadPtiListEntry(void)
{
  struct _LIST_ENTRY *result; // rax

  result = &gListAffectedThreadsForQueueRecalc;
  if ( gListAffectedThreadsForQueueRecalc.Flink == &gListAffectedThreadsForQueueRecalc )
    return (struct _LIST_ENTRY *)(*(_QWORD *)(gptiCurrent + 432LL) + 168LL);
  return result;
}
