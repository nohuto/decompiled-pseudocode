/*
 * XREFs of RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x18004AEA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180049E24 @ 0x180049E24 (sub_180049E24.c)
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWithCompletionCallback(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( a1[13] )
    return 3221227288LL;
  a1[13] = a2;
  a1[14] = a3;
  return sub_180049E24(a1[3], (unsigned __int64)a1, &v5, a4);
}
