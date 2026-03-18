/*
 * XREFs of UnpackAffectedThreadList @ 0x1C00CB2A8
 * Callers:
 *     ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00C9610 (-PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z.c)
 *     zzzReattachThreads @ 0x1C00CA9AC (zzzReattachThreads.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C0122E58 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall UnpackAffectedThreadList(__int64 a1, __int64 a2, __int64 a3)
{
  struct _LIST_ENTRY *Flink; // rbx
  struct _LIST_ENTRY *v4; // rcx
  __int64 result; // rax

  Flink = gListAffectedThreadsForQueueRecalc.Flink;
  while ( Flink && Flink != &gListAffectedThreadsForQueueRecalc )
  {
    v4 = Flink;
    Flink = Flink[94].Blink;
    result = Win32FreePool(v4, a2, a3);
  }
  gnThreadsAffectedForQueueRecalc = 0;
  off_1C03206E8 = &gListAffectedThreadsForQueueRecalc;
  gListAffectedThreadsForQueueRecalc.Flink = &gListAffectedThreadsForQueueRecalc;
  return result;
}
