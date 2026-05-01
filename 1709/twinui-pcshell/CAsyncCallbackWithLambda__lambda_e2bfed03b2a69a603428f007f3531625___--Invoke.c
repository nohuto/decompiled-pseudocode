/*
 * XREFs of CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625___::Invoke @ 0x18005E600
 * Callers:
 *     <none>
 * Callees:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005BA88 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625___::Invoke(__int64 a1)
{
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(*(CImmersiveApp::CImmersiveWindowCollection **)(a1 + 64));
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
