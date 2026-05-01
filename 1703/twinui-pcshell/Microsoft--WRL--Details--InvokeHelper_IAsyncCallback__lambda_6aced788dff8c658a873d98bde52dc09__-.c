/*
 * XREFs of Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_6aced788dff8c658a873d98bde52dc09__&___ptr64_1__1_::Invoke @ 0x18003A410
 * Callers:
 *     <none>
 * Callees:
 *     _lambda_6aced788dff8c658a873d98bde52dc09_::operator() @ 0x18003988C (_lambda_6aced788dff8c658a873d98bde52dc09_--operator().c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18003A88C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_6aced788dff8c658a873d98bde52dc09______ptr64_1__1_::Invoke(
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
