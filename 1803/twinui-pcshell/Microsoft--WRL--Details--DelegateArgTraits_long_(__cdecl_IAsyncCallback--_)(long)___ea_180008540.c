/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_6aced788dff8c658a873d98bde52dc09__&___ptr64__1_long_::Invoke @ 0x180008540
 * Callers:
 *     CDelayIAMOperations::CDelayedOperation__lambda_408d293201316df79a8620e012e4c791___::operator() @ 0x1800083A0 (CDelayIAMOperations--CDelayedOperation__lambda_408d293201316df79a8620e012e4c791___--operator().c)
 * Callees:
 *     _lambda_6aced788dff8c658a873d98bde52dc09_::operator() @ 0x1800085E4 (_lambda_6aced788dff8c658a873d98bde52dc09_--operator().c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801069B4 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_6aced788dff8c658a873d98bde52dc09______ptr64__1_long_::Invoke(
        __int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = lambda_6aced788dff8c658a873d98bde52dc09_::operator()(a1 + 16);
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v1);
  return v2;
}
