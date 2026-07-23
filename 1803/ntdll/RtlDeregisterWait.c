/*
 * XREFs of RtlDeregisterWait @ 0x180055800
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl RtlDeregisterWait(HANDLE WaitHandle)
{
  return RtlDeregisterWaitEx(WaitHandle, 0LL);
}
