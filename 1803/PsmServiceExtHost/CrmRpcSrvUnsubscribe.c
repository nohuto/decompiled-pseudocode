/*
 * XREFs of CrmRpcSrvUnsubscribe @ 0x18006E310
 * Callers:
 *     <none>
 * Callees:
 *     CrmSubscriberCleanup @ 0x18006A2CC (CrmSubscriberCleanup.c)
 */

__int64 __fastcall CrmRpcSrvUnsubscribe(__int64 *a1)
{
  void *v1; // rbx

  v1 = (void *)*a1;
  CrmSubscriberCleanup(*a1, 1);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v1);
  *a1 = 0LL;
  return 0LL;
}
