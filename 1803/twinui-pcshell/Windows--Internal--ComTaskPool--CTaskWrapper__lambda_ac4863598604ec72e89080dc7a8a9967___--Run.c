/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ac4863598604ec72e89080dc7a8a9967___::Run @ 0x1800165A0
 * Callers:
 *     <none>
 * Callees:
 *     CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__&___ptr64_::Invoke @ 0x1800194B0 (CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56__-___ptr64_--Invoke.c)
 *     CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__&___ptr64_::Invoke @ 0x1800878C0 (CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216__-___ptr64_--Invoke.c)
 *     CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb__&___ptr64_::Invoke @ 0x18008CB60 (CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb__-___ptr64_--Invoke.c)
 *     CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94__&___ptr64_::Invoke @ 0x18008E700 (CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94__-___ptr64_--Invoke.c)
 *     CAsyncCallbackWithLambda__lambda_c57b015ca5be0aa76b5ef311fd246426___::Invoke @ 0x18008FC60 (CAsyncCallbackWithLambda__lambda_c57b015ca5be0aa76b5ef311fd246426___--Invoke.c)
 *     _guard_dispatch_icall_nop @ 0x1800A27A0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_ac4863598604ec72e89080dc7a8a9967___::Run(
        __int64 a1)
{
  int v2; // ebx
  __int64 v3; // rcx
  void (__fastcall *v4)(__int64, _QWORD); // rax
  RTL_SRWLOCK *v5; // rcx

  AcquireSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  v2 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 56LL);
  ReleaseSRWLockShared(CApplicationManagerUtility::g_pIAMGlobals);
  if ( v2 != 2 )
  {
    v3 = *(_QWORD *)(a1 + 32);
    v4 = *(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v3 + 24LL);
    if ( (char *)v4 == (char *)CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56______ptr64_::Invoke )
    {
      CAsyncCallbackWithLambda__lambda_0ed677524a6dc3cf61a74a5bf9087e56______ptr64_::Invoke(v3, 0LL);
    }
    else if ( (char *)v4 == (char *)CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb______ptr64_::Invoke )
    {
      CAsyncCallbackWithLambda__lambda_54ac9d587a7c1793639a2e20f13dcbfb______ptr64_::Invoke(v3, 0LL);
    }
    else if ( (char *)v4 == (char *)CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______ptr64_::Invoke )
    {
      CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216______ptr64_::Invoke(v3, 0LL);
    }
    else if ( (char *)v4 == (char *)CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______ptr64_::Invoke )
    {
      CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94______ptr64_::Invoke(v3, 0LL);
    }
    else if ( (char *)v4 == (char *)CAsyncCallbackWithLambda__lambda_c57b015ca5be0aa76b5ef311fd246426___::Invoke )
    {
      CAsyncCallbackWithLambda__lambda_c57b015ca5be0aa76b5ef311fd246426___::Invoke(v3, 0LL);
    }
    else
    {
      v4(v3, 0LL);
    }
  }
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v5 = CApplicationManagerUtility::g_pIAMGlobals;
  --*(_DWORD *)(*(_QWORD *)(a1 + 24) + 204LL);
  ReleaseSRWLockExclusive(v5);
}
