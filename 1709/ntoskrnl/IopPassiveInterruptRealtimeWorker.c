/*
 * XREFs of IopPassiveInterruptRealtimeWorker @ 0x14015B990
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveQueueEx @ 0x14006C920 (KeRemoveQueueEx.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __fastcall __noreturn IopPassiveInterruptRealtimeWorker(PKQUEUE Queue)
{
  PLIST_ENTRY EntryArray; // [rsp+48h] [rbp+10h] BYREF

  while ( 1 )
  {
    do
      KeRemoveQueueEx(Queue, 0, 0, 0LL, &EntryArray, 1u);
    while ( EntryArray == (PLIST_ENTRY)128 );
    ((void (__fastcall *)(struct _LIST_ENTRY *))EntryArray[1].Flink)(EntryArray[1].Blink);
  }
}
