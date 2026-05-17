/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x180087630
 * Callers:
 *     <none>
 * Callees:
 *     RtlpRemoveUserSubFromNameSub @ 0x18000A2F0 (RtlpRemoveUserSubFromNameSub.c)
 */

__int64 __fastcall RtlUnsubscribeWnfStateChangeNotification(__int64 a1)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  return RtlpRemoveUserSubFromNameSub(*(_QWORD *)(a1 + 24), a1, &v2);
}
