/*
 * XREFs of CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625__&___ptr64_::Invoke @ 0x18012EF00
 * Callers:
 *     <none>
 * Callees:
 *     ?ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ @ 0x18005C8C8 (-ReconcileVisibility@CImmersiveWindowCollection@CImmersiveApp@@QEAAJXZ.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_e2bfed03b2a69a603428f007f3531625______ptr64_::Invoke(__int64 a1)
{
  __int64 v2; // rdx
  __int64 v3; // r8

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  CImmersiveApp::CImmersiveWindowCollection::ReconcileVisibility(
    *(CImmersiveApp::CImmersiveWindowCollection **)(a1 + 56),
    v2,
    v3);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
