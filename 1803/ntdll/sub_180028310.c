/*
 * XREFs of sub_180028310 @ 0x180028310
 * Callers:
 *     sub_180026330 @ 0x180026330 (sub_180026330.c)
 *     sub_1800273D0 @ 0x1800273D0 (sub_1800273D0.c)
 *     sub_18007B8F8 @ 0x18007B8F8 (sub_18007B8F8.c)
 * Callees:
 *     <none>
 */

bool sub_180028310()
{
  struct _TEB *v0; // rdx

  v0 = NtCurrentTeb();
  return (unsigned __int64)v0->CurrentTransactionHandle - 1 <= 0xFFFFFFFFFFFFFFFDuLL
      || v0->TxnScopeEnterCallback
      || v0->TxnScopeExitCallback
      || v0->TxnScopeContext
      || v0->TxFsContext != 65534;
}
