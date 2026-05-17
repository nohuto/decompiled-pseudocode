/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x180088060
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FFDC @ 0x18000FFDC (sub_18000FFDC.c)
 */

__int64 __fastcall RtlUnsubscribeWnfStateChangeNotification(__int64 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  return sub_18000FFDC(*(_QWORD *)(a1 + 24), a1, &v2);
}
