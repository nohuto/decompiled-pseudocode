/*
 * XREFs of NtSinglePhaseReject_0 @ 0x14000149C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtSinglePhaseReject_0(HANDLE EnlistmentHandle, PLARGE_INTEGER TmVirtualClock)
{
  return NtSinglePhaseReject(EnlistmentHandle, TmVirtualClock);
}
