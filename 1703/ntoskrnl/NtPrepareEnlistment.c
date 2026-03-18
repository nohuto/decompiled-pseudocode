/*
 * XREFs of NtPrepareEnlistment @ 0x140001140
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtPrepareEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtPrepareEnlistment(EnlistmentHandle, TmVirtualClock);
}
