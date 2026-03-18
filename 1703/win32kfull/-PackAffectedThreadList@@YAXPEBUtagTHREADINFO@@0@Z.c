/*
 * XREFs of ?PackAffectedThreadList@@YAXPEBUtagTHREADINFO@@0@Z @ 0x1C00B6AF4
 * Callers:
 *     zzzReattachThreads @ 0x1C00B6108 (zzzReattachThreads.c)
 *     PackAffectedThreadsFromThreadCleanup @ 0x1C00B6C20 (PackAffectedThreadsFromThreadCleanup.c)
 * Callees:
 *     UnpackAffectedThreadList @ 0x1C00B6A68 (UnpackAffectedThreadList.c)
 *     ?InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z @ 0x1C00B6C5C (-InAffectedThreadList@@YAPEAUPTI_LIST@@PEBUtagTHREADINFO@@@Z.c)
 */

void __fastcall PackAffectedThreadList(const struct tagTHREADINFO *a1, const struct tagTHREADINFO *a2)
{
  __int64 v2; // r10
  _QWORD **v5; // rsi
  _QWORD *i; // rbx
  _QWORD *v7; // rdi
  __int64 v8; // rcx
  _QWORD *v9; // r8
  _QWORD *v10; // rax
  __int64 v11; // rax

  v2 = *((_QWORD *)a1 + 51);
  v5 = (_QWORD **)(v2 + 168);
  if ( gListAffectedThreadsForQueueRecalc.Flink != &gListAffectedThreadsForQueueRecalc )
  {
    v11 = *(_QWORD *)(off_1C03246F8 + 16LL);
    if ( v11 )
    {
      if ( *(_QWORD *)(v11 + 408) != v2 )
        UnpackAffectedThreadList();
    }
  }
  for ( i = *v5; i != v5; i = (_QWORD *)*i )
  {
    v7 = i - 82;
    v8 = *(i - 34);
    if ( (v8 == *((_QWORD *)a1 + 48)
       || v8 == gpqForeground
       || v8 == gpqForegroundPrev
       || a2 && v8 == *((_QWORD *)a2 + 48))
      && (v7[55] & 1) == 0
      && !InAffectedThreadList((const struct tagTHREADINFO *)(i - 82)) )
    {
      if ( (gnThreadsAffectedForQueueRecalc & 0x3F) == 0 )
      {
        v9 = (_QWORD *)Win32AllocPoolZInit(1536LL, 1767994197LL);
        if ( !v9 )
        {
          UnpackAffectedThreadList();
          return;
        }
      }
      v9[2] = v7;
      v10 = (_QWORD *)off_1C03246F8;
      if ( (struct _LIST_ENTRY *)*off_1C03246F8 != &gListAffectedThreadsForQueueRecalc )
        __fastfail(3u);
      *v9 = &gListAffectedThreadsForQueueRecalc;
      v9[1] = v10;
      *v10 = v9;
      off_1C03246F8 = v9;
      ++gnThreadsAffectedForQueueRecalc;
    }
  }
}
