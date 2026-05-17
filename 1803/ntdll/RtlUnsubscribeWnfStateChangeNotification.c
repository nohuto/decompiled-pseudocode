/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x180049DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180049E24 @ 0x180049E24 (sub_180049E24.c)
 */

__int64 __fastcall RtlUnsubscribeWnfStateChangeNotification(__int64 a1)
{
  char v2; // [rsp+30h] [rbp+8h] BYREF

  return sub_180049E24(*(_QWORD *)(a1 + 24), a1, &v2);
}
