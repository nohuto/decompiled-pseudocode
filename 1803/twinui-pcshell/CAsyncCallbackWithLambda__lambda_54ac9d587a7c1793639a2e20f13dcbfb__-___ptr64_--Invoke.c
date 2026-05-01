/*
 * XREFs of CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb__&___ptr64_::Invoke @ 0x18008CB60
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ac4863598604ec72e89080dc7a8a9967___::Run @ 0x1800165A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ac4863598604ec72e89080dc7a8a9967___--Run.c)
 * Callees:
 *     ?EnsurePositionOffset@CTaskWindow@@UEAAJXZ @ 0x180047B90 (-EnsurePositionOffset@CTaskWindow@@UEAAJXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb______ptr64_::Invoke(__int64 a1)
{
  __int64 v2; // rax
  CTaskWindow *v3; // rcx
  __int64 (__fastcall *v4)(CTaskWindow *); // rax

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_QWORD *)(a1 + 56);
  if ( *(_QWORD *)(v2 + 160) )
  {
    v3 = **(CTaskWindow ***)(v2 + 152);
    v4 = *(__int64 (__fastcall **)(CTaskWindow *))(*(_QWORD *)v3 + 72LL);
    if ( v4 == CTaskWindow::EnsurePositionOffset )
      CTaskWindow::EnsurePositionOffset(v3);
    else
      v4(v3);
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
