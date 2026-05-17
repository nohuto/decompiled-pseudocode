/*
 * XREFs of RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x180087890
 * Callers:
 *     <none>
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x18000A2F0 (RtlpRemoveUserSubFromNameSub.c)
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWithCompletionCallback(__int64 *a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( a1[13] )
    return 3221227288LL;
  a1[13] = a2;
  a1[14] = a3;
  return RtlpRemoveUserSubFromNameSub(a1[3], (__int64)a1, &v4);
}
