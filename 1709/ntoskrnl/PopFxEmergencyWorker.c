/*
 * XREFs of PopFxEmergencyWorker @ 0x14015C6F0
 * Callers:
 *     <none>
 * Callees:
 *     KeRemoveQueueEx @ 0x14006C920 (KeRemoveQueueEx.c)
 *     KeSetActualBasePriorityThread @ 0x1400A7A70 (KeSetActualBasePriorityThread.c)
 *     _guard_dispatch_icall @ 0x140189900 (_guard_dispatch_icall.c)
 */

void __fastcall __noreturn PopFxEmergencyWorker(PKQUEUE Queue, __int64 a2, _SINGLE_LIST_ENTRY *a3, __int64 a4)
{
  PLIST_ENTRY EntryArray; // [rsp+48h] [rbp+10h] BYREF

  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 16, a3, a4);
  while ( 1 )
  {
    do
      KeRemoveQueueEx(Queue, 0, 0, 0LL, &EntryArray, 1u);
    while ( EntryArray == (PLIST_ENTRY)128 );
    ((void (__fastcall *)(struct _LIST_ENTRY *))EntryArray[1].Flink)(EntryArray[1].Blink);
  }
}
