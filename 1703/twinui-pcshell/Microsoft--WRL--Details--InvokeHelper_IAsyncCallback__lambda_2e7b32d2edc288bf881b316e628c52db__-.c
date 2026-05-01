/*
 * XREFs of Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_2e7b32d2edc288bf881b316e628c52db__&___ptr64_1__1_::Invoke @ 0x180045050
 * Callers:
 *     <none>
 * Callees:
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x18003A88C (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _lambda_2e7b32d2edc288bf881b316e628c52db_::operator() @ 0x18003D170 (_lambda_2e7b32d2edc288bf881b316e628c52db_--operator().c)
 */

__int64 __fastcall Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_2e7b32d2edc288bf881b316e628c52db______ptr64_1__1_::Invoke(
        __int64 a1)
{
  int v1; // eax
  unsigned int v2; // ebx

  v1 = lambda_2e7b32d2edc288bf881b316e628c52db_::operator()(a1 + 16);
  v2 = v1;
  if ( v1 < 0 )
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot((unsigned int)v1);
  return v2;
}
