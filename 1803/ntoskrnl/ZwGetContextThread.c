/*
 * XREFs of ZwGetContextThread @ 0x1401A9220
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwGetContextThread(HANDLE ThreadHandle, PCONTEXT Context)
{
  __int64 v2; // r8

  _disable();
  __readeflags();
  return KiServiceInternal(ThreadHandle, Context, v2);
}
