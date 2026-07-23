/*
 * XREFs of RtlDeregisterWait @ 0x180089AE0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlDeregisterWait(HANDLE WaitHandle)
{
  return RtlDeregisterWaitEx(WaitHandle, 0LL);
}
