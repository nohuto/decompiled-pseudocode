/*
 * XREFs of MiZeroAllPageFiles @ 0x14042EDB4
 * Callers:
 *     MiShutdownSystem @ 0x14042EC54 (MiShutdownSystem.c)
 * Callees:
 *     ExQueueWorkItem @ 0x1400613A0 (ExQueueWorkItem.c)
 *     KeWaitForMultipleObjects @ 0x14006B570 (KeWaitForMultipleObjects.c)
 *     KeWaitForSingleObject @ 0x14006D2F0 (KeWaitForSingleObject.c)
 *     KeSetEvent @ 0x140072480 (KeSetEvent.c)
 *     KeInitializeEvent @ 0x140085860 (KeInitializeEvent.c)
 *     __security_check_cookie @ 0x14015D720 (__security_check_cookie.c)
 *     MiZeroPageFile @ 0x1402141C0 (MiZeroPageFile.c)
 *     ExAllocatePoolWithTag @ 0x1402B3110 (ExAllocatePoolWithTag.c)
 */

__int64 MiZeroAllPageFiles()
{
  ULONG v0; // edi
  ULONG v1; // ebp
  __int64 v2; // r15
  struct _KEVENT *v3; // rsi
  __int64 v4; // rax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  struct _WORK_QUEUE_ITEM *v6; // rbx
  PVOID Object[64]; // [rsp+40h] [rbp-528h] BYREF
  struct _KWAIT_BLOCK WaitBlockArray; // [rsp+240h] [rbp-328h] BYREF

  VfZeroAllPagesRunning = 1;
  KeWaitForSingleObject(&unk_14038A3A8, WrKernel, 0, 0, 0LL);
  v0 = Count;
  v1 = Count;
  if ( Count )
  {
    do
    {
      v2 = v1 - 1;
      v3 = (struct _KEVENT *)&Object[3 * v2 + 16];
      KeInitializeEvent(v3, NotificationEvent, 0);
      v4 = *(&MiSystemPartition + v2 + 724);
      Object[v2] = v3;
      if ( (*(_BYTE *)(v4 + 204) & 0x40) != 0
        || (PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x775A6D4Du),
            (v6 = PoolWithTag) == 0LL) )
      {
        KeSetEvent((PRKEVENT)&Object[3 * v2 + 16], 0, 0);
      }
      else
      {
        PoolWithTag[1].List.Flink = (struct _LIST_ENTRY *)*(&MiSystemPartition + v2 + 724);
        PoolWithTag[1].List.Blink = (struct _LIST_ENTRY *)v3;
        if ( v1 == 1 )
        {
          KeSetEvent((PRKEVENT)&Object[3 * v2 + 16], 0, 0);
          MiZeroPageFile(v6);
        }
        else
        {
          PoolWithTag->List.Flink = 0LL;
          PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))MiZeroPageFile;
          PoolWithTag->Parameter = PoolWithTag;
          ExQueueWorkItem(PoolWithTag, CriticalWorkQueue);
        }
      }
      --v1;
    }
    while ( (_DWORD)v2 );
  }
  if ( v0 > 1 )
    KeWaitForMultipleObjects(v0, Object, WaitAll, Executive, 0, 0, 0LL, &WaitBlockArray);
  VfZeroAllPagesRunning = 0;
  return 1LL;
}
