/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x180049DA0
 * Callers:
 *     <none>
 * Callees:
 *     sub_180049E24 @ 0x180049E24 (sub_180049E24.c)
 */

NTSTATUS __cdecl RtlUnsubscribeWnfStateChangeNotification(PWNF_USER_CALLBACK Callback)
{
  return sub_180049E24(*((PVOID *)Callback + 3), Callback);
}
