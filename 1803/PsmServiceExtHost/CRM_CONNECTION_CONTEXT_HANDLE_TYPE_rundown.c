/*
 * XREFs of CRM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown @ 0x18006E240
 * Callers:
 *     <none>
 * Callees:
 *     CrmSubscriberCleanup @ 0x18006A2CC (CrmSubscriberCleanup.c)
 */

BOOLEAN __fastcall CRM_CONNECTION_CONTEXT_HANDLE_TYPE_rundown(void *a1)
{
  CrmSubscriberCleanup((__int64)a1, 1);
  return RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a1);
}
