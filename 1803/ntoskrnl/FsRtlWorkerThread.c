/*
 * XREFs of FsRtlWorkerThread @ 0x140185DA0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x1400EA760 (KeSetPriorityThread.c)
 *     KeRemoveQueueEx @ 0x1400F5070 (KeRemoveQueueEx.c)
 *     KeBugCheckEx @ 0x1401AAED0 (KeBugCheckEx.c)
 *     _guard_dispatch_icall @ 0x1401B3560 (_guard_dispatch_icall.c)
 */

void __fastcall __noreturn FsRtlWorkerThread(PVOID StartContext)
{
  __int64 v1; // rdi
  struct _KQUEUE *v2; // rdi
  PLIST_ENTRY v3; // rbx
  PLIST_ENTRY EntryArray; // [rsp+40h] [rbp+8h] BYREF

  v1 = (unsigned int)StartContext;
  KeSetPriorityThread(KeGetCurrentThread(), (_DWORD)StartContext + 16);
  v2 = (struct _KQUEUE *)((char *)&FsRtlWorkerQueues + 64 * v1);
  do
  {
    KeRemoveQueueEx(v2, 0, 0, 0LL, &EntryArray, 1u);
    v3 = EntryArray;
    ((void (__fastcall *)(struct _LIST_ENTRY *))EntryArray[1].Flink)(EntryArray[1].Blink);
  }
  while ( !KeGetCurrentIrql() );
  KeBugCheckEx(0xAu, (ULONG_PTR)v3[1].Flink, KeGetCurrentIrql(), (ULONG_PTR)v3[1].Flink, (ULONG_PTR)v3);
}
