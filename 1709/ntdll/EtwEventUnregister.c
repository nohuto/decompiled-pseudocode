/*
 * XREFs of EtwEventUnregister @ 0x180060B60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __cdecl EtwEventUnregister(REGHANDLE RegHandle)
{
  return EtwNotificationUnregister(RegHandle, 0LL);
}
