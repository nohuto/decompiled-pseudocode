/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_955195b19bdf183231ed606863dab04a___ @ 0x18012A7A4
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_9b0a94d0430e4fd5a47aae3dc7aab811___::Run @ 0x18012A830 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_9b0a94d0430e4fd5a47aae3dc7aab811___--Run.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIPrivilegedWindowOwnershipOperations@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180005130 (-Release@-$RuntimeClass@U-$InterfaceList@UIPrivilegedWindowOwnershipOperations@@U-$InterfaceList.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_955195b19bdf183231ed606863dab04a_____lambda_955195b19bdf183231ed606863dab04a__const_&___ptr64_ @ 0x18012AA10 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_955195b19bdf183231ed606863dab04a_.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_955195b19bdf183231ed606863dab04a_(_QWORD *a1)
{
  __int64 *CAsyncCallbackWithLambda__lambda_955195b19bdf183231ed606863dab04a_____lambda_955195b19bdf183231ed606863dab04a__const_____ptr64; // rax
  __int64 v3; // rdx
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v6; // [rsp+30h] [rbp+8h] BYREF

  CAsyncCallbackWithLambda__lambda_955195b19bdf183231ed606863dab04a_____lambda_955195b19bdf183231ed606863dab04a__const_____ptr64 = (__int64 *)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_955195b19bdf183231ed606863dab04a_____lambda_955195b19bdf183231ed606863dab04a__const_____ptr64_(&v6);
  v3 = *CAsyncCallbackWithLambda__lambda_955195b19bdf183231ed606863dab04a_____lambda_955195b19bdf183231ed606863dab04a__const_____ptr64;
  *CAsyncCallbackWithLambda__lambda_955195b19bdf183231ed606863dab04a_____lambda_955195b19bdf183231ed606863dab04a__const_____ptr64 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IPrivilegedWindowOwnershipOperations,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
  }
  return a1;
}
