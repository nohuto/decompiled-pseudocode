/*
 * XREFs of NtRollforwardTransactionManager_0 @ 0x14015DDE4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall NtRollforwardTransactionManager_0(HANDLE TransactionManagerHandle, PLARGE_INTEGER TmVirtualClock)
{
  return NtRollforwardTransactionManager(TransactionManagerHandle, TmVirtualClock);
}
