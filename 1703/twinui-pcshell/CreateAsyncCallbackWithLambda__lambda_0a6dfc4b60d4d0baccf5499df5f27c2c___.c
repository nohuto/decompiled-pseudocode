/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_0a6dfc4b60d4d0baccf5499df5f27c2c___ @ 0x180144AC8
 * Callers:
 *     CreationThreadDispatcher::RunSync__lambda_6b10e70171ff618d2ed46f6369068d10___ @ 0x180144878 (CreationThreadDispatcher--RunSync__lambda_6b10e70171ff618d2ed46f6369068d10___.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIPrivilegedWindowOwnershipOperations@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180005130 (-Release@-$RuntimeClass@U-$InterfaceList@UIPrivilegedWindowOwnershipOperations@@U-$InterfaceList.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_0a6dfc4b60d4d0baccf5499df5f27c2c_____lambda_0a6dfc4b60d4d0baccf5499df5f27c2c__const_&___ptr64_ @ 0x180144C60 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_0a6dfc4b60d4d0baccf5499df5f27c2c_.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_0a6dfc4b60d4d0baccf5499df5f27c2c_(_QWORD *a1)
{
  __int64 *CAsyncCallbackWithLambda__lambda_0a6dfc4b60d4d0baccf5499df5f27c2c_____lambda_0a6dfc4b60d4d0baccf5499df5f27c2c__const_____ptr64; // rax
  __int64 v3; // rdx
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v6; // [rsp+30h] [rbp+8h] BYREF

  CAsyncCallbackWithLambda__lambda_0a6dfc4b60d4d0baccf5499df5f27c2c_____lambda_0a6dfc4b60d4d0baccf5499df5f27c2c__const_____ptr64 = (__int64 *)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_0a6dfc4b60d4d0baccf5499df5f27c2c_____lambda_0a6dfc4b60d4d0baccf5499df5f27c2c__const_____ptr64_(&v6);
  v3 = *CAsyncCallbackWithLambda__lambda_0a6dfc4b60d4d0baccf5499df5f27c2c_____lambda_0a6dfc4b60d4d0baccf5499df5f27c2c__const_____ptr64;
  *CAsyncCallbackWithLambda__lambda_0a6dfc4b60d4d0baccf5499df5f27c2c_____lambda_0a6dfc4b60d4d0baccf5499df5f27c2c__const_____ptr64 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IPrivilegedWindowOwnershipOperations,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
  }
  return a1;
}
