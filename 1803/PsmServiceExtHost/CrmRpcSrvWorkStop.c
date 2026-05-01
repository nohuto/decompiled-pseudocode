/*
 * XREFs of CrmRpcSrvWorkStop @ 0x18006E370
 * Callers:
 *     <none>
 * Callees:
 *     CrmLogSubscriberWorkStop @ 0x18006A19C (CrmLogSubscriberWorkStop.c)
 */

__int64 __fastcall CrmRpcSrvWorkStop(__int64 a1)
{
  CrmLogSubscriberWorkStop(a1);
  return 0LL;
}
