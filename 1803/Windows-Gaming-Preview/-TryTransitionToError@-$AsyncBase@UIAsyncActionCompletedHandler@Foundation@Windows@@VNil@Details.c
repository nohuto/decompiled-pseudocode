/*
 * XREFs of ?TryTransitionToError@?$AsyncBase@UIAsyncActionCompletedHandler@Foundation@Windows@@VNil@Details@WRL@Microsoft@@$00UDisableCausality@67@@WRL@Microsoft@@IEAA_NJW4CancelTransitionPolicy@23@PEAX@Z @ 0x180033CF4
 * Callers:
 *     ?OnStart@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@UEAAJXZ @ 0x1800333B0 (-OnStart@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCN.c)
 *     ?_AfterExecute@?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@UDisableCausality@WRL@Microsoft@@@Internal@Windows@@AEAAXJ@Z @ 0x18003409C (-_AfterExecute@-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180043940 (_guard_dispatch_icall_nop.c)
 */

bool __fastcall Microsoft::WRL::AsyncBase<Windows::Foundation::IAsyncActionCompletedHandler,Microsoft::WRL::Details::Nil,1,Microsoft::WRL::DisableCausality>::TryTransitionToError(
        __int64 a1,
        signed __int32 a2,
        signed __int32 a3)
{
  char v3; // bl
  _QWORD *v5; // rsi
  __int64 v6; // rcx
  signed __int32 v7; // ecx
  signed __int32 v8; // eax
  signed __int32 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a3;
  v3 = 0;
  if ( !_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 52), a2, 0) )
  {
    v5 = (_QWORD *)(a1 + 40);
    v6 = *(_QWORD *)(a1 + 40);
    if ( v6 )
    {
      *v5 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
    }
    GetRestrictedErrorInfo(v5);
    v7 = *(_DWORD *)(a1 + 48);
    v10 = -2;
    _InterlockedCompareExchange(&v10, v7, -2);
    if ( !v10 )
    {
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 48), 3, 0);
      return v8 == v10;
    }
  }
  return v3;
}
