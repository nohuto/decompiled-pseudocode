/*
 * XREFs of sub_18001655C @ 0x18001655C
 * Callers:
 *     sub_180014980 @ 0x180014980 (sub_180014980.c)
 *     sub_180015A40 @ 0x180015A40 (sub_180015A40.c)
 *     sub_1800196A4 @ 0x1800196A4 (sub_1800196A4.c)
 * Callees:
 *     <none>
 */

bool sub_18001655C()
{
  struct _TEB *v0; // rdx

  v0 = NtCurrentTeb();
  return (unsigned __int64)v0->CurrentTransactionHandle - 1 <= 0xFFFFFFFFFFFFFFFDuLL
      || v0->TxnScopeEnterCallback
      || v0->TxnScopeExitCallback
      || v0->TxnScopeContext
      || v0->TxFsContext != 65534;
}
