/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)___ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_6aced788dff8c658a873d98bde52dc09__&___ptr64__1_long_::Invoke @ 0x18003BA20
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18001D5BC (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _lambda_6aced788dff8c658a873d98bde52dc09_::operator() @ 0x18003ACDC (_lambda_6aced788dff8c658a873d98bde52dc09_--operator().c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long____ptr64_::DelegateInvokeHelper_IAsyncCallback__lambda_6aced788dff8c658a873d98bde52dc09______ptr64__1_long_::Invoke(
        __int64 a1,
        DWORD a2)
{
  int v2; // eax
  unsigned int v3; // ebx

  v2 = lambda_6aced788dff8c658a873d98bde52dc09_::operator()(a1 + 16, a2);
  v3 = v2;
  if ( v2 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v2);
  return v3;
}
