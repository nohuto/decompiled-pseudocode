/*
 * XREFs of TmRollbackComplete @ 0x14015DD70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRollbackComplete(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmRollbackComplete(Enlistment, TmVirtualClock);
}
