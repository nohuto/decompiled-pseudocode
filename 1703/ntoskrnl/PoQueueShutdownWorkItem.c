/*
 * XREFs of PoQueueShutdownWorkItem @ 0x1406C93B0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 */

NTSTATUS __stdcall PoQueueShutdownWorkItem(PWORK_QUEUE_ITEM WorkItem)
{
  NTSTATUS v2; // ebx
  struct _LIST_ENTRY *v3; // rax

  ExAcquireFastMutex(&PopShutdownListMutex);
  v2 = 0;
  if ( PopShutdownListAvailable )
  {
    v3 = (struct _LIST_ENTRY *)qword_14034C0C8;
    if ( *(__int64 **)qword_14034C0C8 != &PopShutdownQueue )
      __fastfail(3u);
    WorkItem->List.Flink = (struct _LIST_ENTRY *)&PopShutdownQueue;
    WorkItem->List.Blink = v3;
    v3->Flink = &WorkItem->List;
    qword_14034C0C8 = (__int64)WorkItem;
  }
  else
  {
    v2 = -1073741077;
  }
  KeReleaseGuardedMutex(&PopShutdownListMutex);
  return v2;
}
