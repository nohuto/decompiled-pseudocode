/*
 * XREFs of RtlUnsubscribeWnfStateChangeNotification @ 0x180088060
 * Callers:
 *     <none>
 * Callees:
 *     sub_18000FFDC @ 0x18000FFDC (sub_18000FFDC.c)
 */

NTSTATUS __cdecl RtlUnsubscribeWnfStateChangeNotification(PWNF_USER_CALLBACK Callback)
{
  int v2; // [rsp+30h] [rbp+8h] BYREF

  return sub_18000FFDC(*((char **)Callback + 3), Callback, &v2);
}
