/*
 * XREFs of SmStoreCompressionStop @ 0x1404CA338
 * Callers:
 *     MmProcessWorkingSetControl @ 0x1404CA12C (MmProcessWorkingSetControl.c)
 * Callees:
 *     MmQueryProcessWorkingSetSwapPages @ 0x1400340C4 (MmQueryProcessWorkingSetSwapPages.c)
 *     SmKmStoreRefFromStoreIndex @ 0x140053AB4 (SmKmStoreRefFromStoreIndex.c)
 *     SmpKeyedStoreEntryGet @ 0x140062504 (SmpKeyedStoreEntryGet.c)
 *     KeWaitForSingleObject @ 0x1400EA280 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x1400F14C0 (KeInitializeEvent.c)
 *     ExQueueWorkItem @ 0x1400FED80 (ExQueueWorkItem.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x140249F7C (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     SmSwapStore @ 0x1404C9EBC (SmSwapStore.c)
 */

int __fastcall SmStoreCompressionStop(int a1)
{
  __int64 v2; // rax
  __int64 v3; // rdi
  int v4; // ebx
  __int64 *v5; // rax
  struct _KEVENT Event; // [rsp+30h] [rbp-48h] BYREF
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+48h] [rbp-30h] BYREF
  _KPROCESS *Process; // [rsp+88h] [rbp+10h] BYREF
  __int64 v10; // [rsp+90h] [rbp+18h] BYREF

  Process = KeGetCurrentThread()->ApcState.Process;
  v2 = SmpKeyedStoreEntryGet((ULONG_PTR)&qword_1403FA1A8, &Process, 0, 0);
  v3 = v2;
  if ( v2 )
    v4 = *(unsigned __int16 *)(v2 + 16);
  else
    v4 = dword_1403FA1D0;
  if ( v4 != -1 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    WorkItem.List.Flink = 0LL;
    WorkItem.WorkerRoutine = (void (__fastcall *)(void *))SmpFlushStorePages;
    WorkItem.Parameter = &Event;
    ExQueueWorkItem(&WorkItem, CriticalWorkQueue);
    LODWORD(v2) = KeWaitForSingleObject(&Event, WrKernel, 0, 0, 0LL);
    if ( v3 )
    {
      SmSwapStore(1);
      if ( a1 )
      {
        v5 = (__int64 *)SmKmStoreRefFromStoreIndex((__int64)&SmGlobals, v4 & 0x3FF);
        if ( (*(_DWORD *)*v5 & 0x40000) != 0 )
          SMKM_STORE<SM_TRAITS>::SmStTrimWsStore(*v5, 0LL);
      }
      LODWORD(v2) = MmQueryProcessWorkingSetSwapPages((__int64)Process, &v10);
      if ( (int)v2 < 0 )
        LODWORD(v2) = SmSwapStore(2);
    }
  }
  return v2;
}
