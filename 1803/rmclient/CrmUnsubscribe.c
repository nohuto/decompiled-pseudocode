/*
 * XREFs of CrmUnsubscribe @ 0x18000D6C0
 * Callers:
 *     CrmSubscribe @ 0x18000D500 (CrmSubscribe.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CrmUnsubscribe(_QWORD *P)
{
  if ( P[1] )
    RtlUnsubscribeWnfStateChangeNotification();
  if ( *P )
    NdrClientCall3((MIDL_STUBLESS_PROXY_INFO *)&stru_180010AE8, 1u, 0LL, P);
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, P);
  return 0LL;
}
