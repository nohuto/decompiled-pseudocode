/*
 * XREFs of CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94__&___ptr64_::Invoke @ 0x18008E700
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ac4863598604ec72e89080dc7a8a9967___::Run @ 0x1800165A0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_ac4863598604ec72e89080dc7a8a9967___--Run.c)
 * Callees:
 *     ?OnFramePositionChanged@CImmersiveApp@@UEAAJXZ @ 0x18004C210 (-OnFramePositionChanged@CImmersiveApp@@UEAAJXZ.c)
 *     ?IsPPIEdition@@YA_NXZ @ 0x18008E774 (-IsPPIEdition@@YA_NXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______ptr64_::Invoke(__int64 a1)
{
  CImmersiveApp *v2; // rcx
  __int64 (__fastcall *v3)(CImmersiveApp *); // rax
  __int64 v5; // rax

  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = (CImmersiveApp *)(*(_QWORD *)(a1 + 48) + 112LL);
  v3 = *(__int64 (__fastcall **)(CImmersiveApp *))(*(_QWORD *)v2 + 488LL);
  if ( v3 == CImmersiveApp::OnFramePositionChanged )
    CImmersiveApp::OnFramePositionChanged(v2);
  else
    v3(v2);
  if ( IsPPIEdition() )
  {
    v5 = *(_QWORD *)(a1 + 56);
    if ( *(_QWORD *)(v5 + 160) )
      (*(void (__fastcall **)(_QWORD))(***(_QWORD ***)(v5 + 152) + 72LL))(**(_QWORD **)(v5 + 152));
  }
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  return 0LL;
}
