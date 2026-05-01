/*
 * XREFs of CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb___::Invoke @ 0x18005E500
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1801E5CE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb___::Invoke(__int64 a1)
{
  __int64 v2; // rax

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_QWORD *)(a1 + 64);
  if ( *(_QWORD *)(v2 + 160) )
    (*(void (__fastcall **)(_QWORD))(***(_QWORD ***)(v2 + 152) + 72LL))(**(_QWORD **)(v2 + 152));
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
