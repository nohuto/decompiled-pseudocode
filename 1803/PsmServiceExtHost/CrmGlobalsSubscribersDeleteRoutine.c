/*
 * XREFs of CrmGlobalsSubscribersDeleteRoutine @ 0x180069F74
 * Callers:
 *     CrmGlobalsSubscriberRemoveAll @ 0x180069E6C (CrmGlobalsSubscriberRemoveAll.c)
 * Callees:
 *     CrmSubscriberReadyQueueRemove @ 0x180034A18 (CrmSubscriberReadyQueueRemove.c)
 *     CrmSubscriberCleanup @ 0x18006A2CC (CrmSubscriberCleanup.c)
 */

BOOLEAN __fastcall CrmGlobalsSubscribersDeleteRoutine(__int64 a1)
{
  void *v1; // rbx

  v1 = (void *)(a1 - 40);
  CrmSubscriberReadyQueueRemove((_QWORD *)(a1 - 40), 0);
  CrmSubscriberCleanup(v1, 0LL);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
}
