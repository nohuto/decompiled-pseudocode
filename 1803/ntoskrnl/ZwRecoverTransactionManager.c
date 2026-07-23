/*
 * XREFs of ZwRecoverTransactionManager @ 0x1401AA120
 * Callers:
 *     CmpInitCmRM @ 0x140561DC4 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverTransactionManager(HANDLE TransactionManagerHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle);
}
