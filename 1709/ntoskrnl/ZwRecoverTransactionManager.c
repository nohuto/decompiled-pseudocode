/*
 * XREFs of ZwRecoverTransactionManager @ 0x1401804E0
 * Callers:
 *     CmpInitCmRM @ 0x14050A840 (CmpInitCmRM.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall ZwRecoverTransactionManager(HANDLE TransactionManagerHandle)
{
  _disable();
  __readeflags();
  return KiServiceInternal(TransactionManagerHandle);
}
