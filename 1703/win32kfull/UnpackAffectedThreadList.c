/*
 * XREFs of UnpackAffectedThreadList @ 0x1C00B6A68
 * Callers:
 *     zzzReattachThreads @ 0x1C00B6108 (zzzReattachThreads.c)
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00B6AF4 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C01182F4 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 UnpackAffectedThreadList()
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v1; // rcx
  __int64 result; // rax

  Flink = gListAffectedThreadsForQueueRecalc.Flink;
  while ( Flink && Flink != &gListAffectedThreadsForQueueRecalc )
  {
    v1 = Flink;
    Flink = Flink[94].Blink;
    result = Win32FreePool(v1);
  }
  gnThreadsAffectedForQueueRecalc = 0;
  off_1C03246F8 = &gListAffectedThreadsForQueueRecalc;
  gListAffectedThreadsForQueueRecalc.Flink = &gListAffectedThreadsForQueueRecalc;
  return result;
}
