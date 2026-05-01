/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94___ @ 0x18005BE70
 * Callers:
 *     ?QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ @ 0x1800595BC (-QueueAyncPositionReconciliation@CImmersiveWindowCollection@CImmersiveApp@@QEAAXXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIPrivilegedWindowOwnershipOperations@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180005130 (-Release@-$RuntimeClass@U-$InterfaceList@UIPrivilegedWindowOwnershipOperations@@U-$InterfaceList.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94_____lambda_cdc0901c64cfd553c7adcb23aa5d4b94__const_&___ptr64_ @ 0x18005C91C (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94_.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94_(_QWORD *a1)
{
  __int64 *CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94_____lambda_cdc0901c64cfd553c7adcb23aa5d4b94__const_____ptr64; // rax
  __int64 v3; // rdx
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v6; // [rsp+30h] [rbp+8h] BYREF

  CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94_____lambda_cdc0901c64cfd553c7adcb23aa5d4b94__const_____ptr64 = (__int64 *)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94_____lambda_cdc0901c64cfd553c7adcb23aa5d4b94__const_____ptr64_(&v6);
  v3 = *CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94_____lambda_cdc0901c64cfd553c7adcb23aa5d4b94__const_____ptr64;
  *CAsyncCallbackWithLambda__lambda_cdc0901c64cfd553c7adcb23aa5d4b94_____lambda_cdc0901c64cfd553c7adcb23aa5d4b94__const_____ptr64 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IPrivilegedWindowOwnershipOperations,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
  }
  return a1;
}
