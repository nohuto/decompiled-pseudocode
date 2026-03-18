/*
 * XREFs of PopFxEmergencyWorker @ 0x140186890
 * Callers:
 *     <none>
 * Callees:
 *     KeSetActualBasePriorityThread @ 0x1400402B0 (KeSetActualBasePriorityThread.c)
 *     KeRemoveQueueEx @ 0x1400F5070 (KeRemoveQueueEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

void __fastcall __noreturn PopFxEmergencyWorker(PKQUEUE Queue)
{
  PLIST_ENTRY EntryArray; // [rsp+48h] [rbp+10h] BYREF

  KeSetActualBasePriorityThread((__int64)KeGetCurrentThread(), 16LL);
  while ( 1 )
  {
    do
      KeRemoveQueueEx(Queue, 0, 0, 0LL, &EntryArray, 1u);
    while ( EntryArray == (PLIST_ENTRY)128 );
    ((void (__fastcall *)(struct _LIST_ENTRY *))EntryArray[1].Flink)(EntryArray[1].Blink);
  }
}
