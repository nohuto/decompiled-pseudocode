/*
 * XREFs of CreateAsyncCallbackWithLambda__lambda_ebef71adef573bac280a4194c3fa831a___ @ 0x1800E71E4
 * Callers:
 *     ?TryBack@ApplicationViewBackedViewHostItem@@UEAAJXZ @ 0x1800E61A0 (-TryBack@ApplicationViewBackedViewHostItem@@UEAAJXZ.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIPrivilegedWindowOwnershipOperations@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180005130 (-Release@-$RuntimeClass@U-$InterfaceList@UIPrivilegedWindowOwnershipOperations@@U-$InterfaceList.c)
 *     Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ebef71adef573bac280a4194c3fa831a_____lambda_ebef71adef573bac280a4194c3fa831a__const_&___ptr64_ @ 0x1800E7224 (Microsoft--WRL--Details--Make_CAsyncCallbackWithLambda__lambda_ebef71adef573bac280a4194c3fa831a_.c)
 */

_QWORD *__fastcall CreateAsyncCallbackWithLambda__lambda_ebef71adef573bac280a4194c3fa831a_(
        _QWORD *a1,
        volatile signed __int32 *a2)
{
  __int64 *CAsyncCallbackWithLambda__lambda_ebef71adef573bac280a4194c3fa831a_____lambda_ebef71adef573bac280a4194c3fa831a__const_____ptr64; // rax
  __int64 v4; // rdx
  volatile signed __int32 *v5; // rcx
  volatile signed __int32 *v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  CAsyncCallbackWithLambda__lambda_ebef71adef573bac280a4194c3fa831a_____lambda_ebef71adef573bac280a4194c3fa831a__const_____ptr64 = (__int64 *)Microsoft::WRL::Details::Make_CAsyncCallbackWithLambda__lambda_ebef71adef573bac280a4194c3fa831a_____lambda_ebef71adef573bac280a4194c3fa831a__const_____ptr64_(&v7);
  v4 = *CAsyncCallbackWithLambda__lambda_ebef71adef573bac280a4194c3fa831a_____lambda_ebef71adef573bac280a4194c3fa831a__const_____ptr64;
  *CAsyncCallbackWithLambda__lambda_ebef71adef573bac280a4194c3fa831a_____lambda_ebef71adef573bac280a4194c3fa831a__const_____ptr64 = 0LL;
  v5 = v7;
  *a1 = v4;
  if ( v5 )
  {
    v7 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IPrivilegedWindowOwnershipOperations,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
  }
  return a1;
}
