/*
 * XREFs of CrmRpcSrvWorkStart @ 0x18006E360
 * Callers:
 *     <none>
 * Callees:
 *     CrmLogSubscriberWorkStart @ 0x18006A06C (CrmLogSubscriberWorkStart.c)
 */

__int64 __fastcall CrmRpcSrvWorkStart(__int64 a1)
{
  CrmLogSubscriberWorkStart(a1);
  return 0LL;
}
