/*
 * XREFs of WheaAttemptPhysicalPageOffline @ 0x1407CAA50
 * Callers:
 *     KiMcheckAlternateReturn @ 0x14024CB80 (KiMcheckAlternateReturn.c)
 *     WheapPfaMemoryCheck @ 0x1407CBB04 (WheapPfaMemoryCheck.c)
 *     WheapPredictiveFailureAnalysis @ 0x1407CBF94 (WheapPredictiveFailureAnalysis.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14008FA50 (ExQueueWorkItem.c)
 *     KeWaitForSingleObject @ 0x1400F5B20 (KeWaitForSingleObject.c)
 *     KeInitializeEvent @ 0x140107370 (KeInitializeEvent.c)
 *     memset @ 0x1401BCC40 (memset.c)
 *     WheapAttemptPhysicalPageOffline @ 0x1407CAD9C (WheapAttemptPhysicalPageOffline.c)
 */

__int64 __fastcall WheaAttemptPhysicalPageOffline(__int64 a1, __int64 a2, __int64 a3)
{
  char v3; // bl
  char v4; // di
  struct _WORK_QUEUE_ITEM WorkItem; // [rsp+30h] [rbp-50h] BYREF
  _OWORD v8[3]; // [rsp+50h] [rbp-30h] BYREF

  v3 = a3;
  v4 = a2;
  if ( KeGetCurrentThread()->PreviousMode != 1 )
    return WheapAttemptPhysicalPageOffline(a1, a2, a3);
  memset(v8, 0, 0x28uLL);
  *(_QWORD *)&v8[0] = a1;
  BYTE8(v8[0]) = v4;
  BYTE9(v8[0]) = v3;
  KeInitializeEvent((PRKEVENT)&v8[1], NotificationEvent, 0);
  WorkItem.List.Flink = 0LL;
  WorkItem.WorkerRoutine = (void (__fastcall *)(void *))WheapAttemptPhysicalPageOfflineWorker;
  WorkItem.Parameter = v8;
  ExQueueWorkItem(&WorkItem, DelayedWorkQueue);
  KeWaitForSingleObject(&v8[1], Executive, 0, 0, 0LL);
  return HIDWORD(v8[0]);
}
