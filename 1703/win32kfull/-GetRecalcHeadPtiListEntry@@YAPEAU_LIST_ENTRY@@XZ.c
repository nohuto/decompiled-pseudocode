/*
 * XREFs of ?GetRecalcHeadPtiListEntry@@YAPEAU_LIST_ENTRY@@XZ @ 0x1C00B6534
 * Callers:
 *     zzzReattachThreads @ 0x1C00B6108 (zzzReattachThreads.c)
 *     ?zzzRecalcThreadAttachment@@YAXXZ @ 0x1C00B649C (-zzzRecalcThreadAttachment@@YAXXZ.c)
 *     ?zzzRecalc2@@YAXPEAUtagQ@@@Z @ 0x1C00B6550 (-zzzRecalc2@@YAXPEAUtagQ@@@Z.c)
 * Callees:
 *     <none>
 */

struct _LIST_ENTRY *GetRecalcHeadPtiListEntry(void)
{
  struct _LIST_ENTRY *result; // rax

  result = &gListAffectedThreadsForQueueRecalc;
  if ( gListAffectedThreadsForQueueRecalc.Flink == &gListAffectedThreadsForQueueRecalc )
    return (struct _LIST_ENTRY *)(*(_QWORD *)(gptiCurrent + 408LL) + 168LL);
  return result;
}
