/*
 * XREFs of NtPrepareComplete @ 0x140187790
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtPrepareComplete(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtPrepareComplete(EnlistmentHandle, TmVirtualClock);
}
