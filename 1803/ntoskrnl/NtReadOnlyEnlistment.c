/*
 * XREFs of NtReadOnlyEnlistment @ 0x140187810
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtReadOnlyEnlistment(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_NtReadOnlyEnlistment(EnlistmentHandle, TmVirtualClock);
}
