/*
 * XREFs of RtlUnsubscribeWnfNotificationWithCompletionCallback @ 0x18004AEA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180049E24 @ 0x180049E24 (sub_180049E24.c)
 */

__int64 __fastcall RtlUnsubscribeWnfNotificationWithCompletionCallback(_QWORD *a1, __int64 a2, __int64 a3)
{
  int v4; // [rsp+30h] [rbp+8h] BYREF

  if ( !a1 || !a2 )
    return 3221225485LL;
  if ( a1[13] )
    return 3221227288LL;
  a1[13] = a2;
  a1[14] = a3;
  return sub_180049E24((char *)a1[3], a1, &v4);
}
