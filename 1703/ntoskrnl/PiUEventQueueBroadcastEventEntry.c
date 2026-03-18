/*
 * XREFs of PiUEventQueueBroadcastEventEntry @ 0x140464DF0
 * Callers:
 *     PiUEventProcessBroadcastNotifications @ 0x140464A2C (PiUEventProcessBroadcastNotifications.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x140010A20 (KeReleaseGuardedMutex.c)
 *     ExAcquireFastMutex @ 0x1400F0060 (ExAcquireFastMutex.c)
 *     RtlInitUnicodeString @ 0x1400F0F60 (RtlInitUnicodeString.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     ExAllocatePoolWithTag @ 0x140285010 (ExAllocatePoolWithTag.c)
 *     RtlEqualUnicodeString @ 0x1404F7D80 (RtlEqualUnicodeString.c)
 */

void __fastcall PiUEventQueueBroadcastEventEntry(__int64 a1)
{
  PVOID *v2; // rsi
  PVOID *v3; // rdi
  __int64 *v4; // rax
  struct _WORK_QUEUE_ITEM *PoolWithTag; // rax
  int v6; // ecx
  char *v7; // rcx
  __int64 v8; // rcx
  UNICODE_STRING String2; // [rsp+20h] [rbp-28h] BYREF
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-18h] BYREF

  ExAcquireFastMutex(&PiUEventBroadcastEventQueueLock);
  v2 = (PVOID *)PiUEventBroadcastEventQueue;
  v3 = (PVOID *)PiUEventBroadcastEventQueue;
  if ( PiUEventBroadcastEventQueue != &PiUEventBroadcastEventQueue )
  {
    do
    {
      v6 = *((_DWORD *)v3 + 5);
      if ( v6 == *(_DWORD *)(a1 + 20) && *((_DWORD *)v3 + 6) == *(_DWORD *)(a1 + 24) )
      {
        if ( v6 == 3 )
        {
          v7 = *(char **)((char *)v3 + 28) - *(_QWORD *)(a1 + 28);
          if ( !v7 )
            v7 = *(char **)((char *)v3 + 36) - *(_QWORD *)(a1 + 36);
          if ( !v7 )
          {
            RtlInitUnicodeString(&DestinationString, (PCWSTR)(a1 + 44));
            RtlInitUnicodeString(&String2, (PCWSTR)v3 + 22);
            if ( RtlEqualUnicodeString(&DestinationString, &String2, 1u) )
            {
LABEL_11:
              *((_BYTE *)v3 + 16) = 0;
              break;
            }
          }
        }
        else
        {
          if ( v6 != 2 )
            goto LABEL_11;
          v8 = *(_QWORD *)(a1 + 28) - *(_QWORD *)((char *)v3 + 28);
          if ( !v8 )
            v8 = *(_QWORD *)(a1 + 36) - *(_QWORD *)((char *)v3 + 36);
          if ( !v8 )
            goto LABEL_11;
        }
      }
      v3 = (PVOID *)*v3;
    }
    while ( v3 != &PiUEventBroadcastEventQueue );
  }
  *(_BYTE *)(a1 + 16) = 1;
  v4 = (__int64 *)qword_1403685E8;
  if ( *(PVOID **)qword_1403685E8 != &PiUEventBroadcastEventQueue )
    __fastfail(3u);
  *(_QWORD *)a1 = &PiUEventBroadcastEventQueue;
  *(_QWORD *)(a1 + 8) = v4;
  *v4 = a1;
  qword_1403685E8 = a1;
  KeReleaseGuardedMutex(&PiUEventBroadcastEventQueueLock);
  if ( v2 == &PiUEventBroadcastEventQueue )
  {
    PoolWithTag = (struct _WORK_QUEUE_ITEM *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x20uLL, 0x59706E50u);
    if ( PoolWithTag )
    {
      PoolWithTag->List.Flink = 0LL;
      PoolWithTag->WorkerRoutine = (void (__fastcall *)(void *))PiUEventBroadcastEventWorker;
      PoolWithTag->Parameter = PoolWithTag;
      ExQueueWorkItem(PoolWithTag, BackgroundWorkQueue);
    }
  }
}
