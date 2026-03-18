/*
 * XREFs of ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00C9610
 * Callers:
 *     PackAffectedThreadsFromThreadCleanup @ 0x1C00C9730 (PackAffectedThreadsFromThreadCleanup.c)
 *     zzzReattachThreads @ 0x1C00CA9AC (zzzReattachThreads.c)
 * Callees:
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C00C976C (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 *     UnpackAffectedThreadList @ 0x1C00CB2A8 (UnpackAffectedThreadList.c)
 */

void __fastcall PackAffectedThreadList(const struct tagTHREADINFO *a1, struct _LIST_ENTRY **a2)
{
  struct _LIST_ENTRY *v2; // r10
  struct _LIST_ENTRY **p_Blink; // rsi
  struct _LIST_ENTRY *i; // rbx
  struct _LIST_ENTRY *v7; // rdi
  struct _LIST_ENTRY *v8; // rcx
  struct _LIST_ENTRY *v9; // r8
  struct _LIST_ENTRY *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct _LIST_ENTRY *Flink; // rax

  v2 = (struct _LIST_ENTRY *)*((_QWORD *)a1 + 54);
  p_Blink = &v2[10].Blink;
  if ( gListAffectedThreadsForQueueRecalc.Flink != &gListAffectedThreadsForQueueRecalc )
  {
    Flink = off_1C03206E8[1].Flink;
    if ( Flink )
    {
      if ( Flink[27].Flink != v2 )
        UnpackAffectedThreadList(a1, a2, 0LL);
    }
  }
  for ( i = *p_Blink; i != (struct _LIST_ENTRY *)p_Blink; i = i->Flink )
  {
    v7 = (struct _LIST_ENTRY *)((char *)i - 712);
    v8 = i[-19].Flink;
    if ( (v8 == *((struct _LIST_ENTRY **)a1 + 51)
       || v8 == (struct _LIST_ENTRY *)gpqForeground
       || v8 == (struct _LIST_ENTRY *)gpqForegroundPrev
       || a2 && v8 == a2[51])
      && ((__int64)v7[29].Flink & 1) == 0
      && !InAffectedThreadList((const struct tagTHREADINFO *)&i[-45].Blink) )
    {
      if ( (gnThreadsAffectedForQueueRecalc & 0x3F) == 0 )
      {
        v9 = (struct _LIST_ENTRY *)Win32AllocPoolZInit(1536LL, 1767994197LL);
        if ( !v9 )
        {
          UnpackAffectedThreadList(v12, v11, 0LL);
          return;
        }
      }
      v9[1].Flink = v7;
      v10 = off_1C03206E8;
      if ( off_1C03206E8->Flink != &gListAffectedThreadsForQueueRecalc )
        __fastfail(3u);
      v9->Flink = &gListAffectedThreadsForQueueRecalc;
      v9->Blink = v10;
      v10->Flink = v9;
      off_1C03206E8 = v9;
      ++gnThreadsAffectedForQueueRecalc;
    }
  }
}
