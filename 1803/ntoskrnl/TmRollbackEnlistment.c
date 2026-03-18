/*
 * XREFs of TmRollbackEnlistment @ 0x140187A80
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall TmRollbackEnlistment(PKENLISTMENT Enlistment, PLARGE_INTEGER TmVirtualClock)
{
  return __imp_TmRollbackEnlistment(Enlistment, TmVirtualClock);
}
