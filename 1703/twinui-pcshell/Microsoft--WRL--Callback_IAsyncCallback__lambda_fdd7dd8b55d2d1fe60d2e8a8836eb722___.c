/*
 * XREFs of Microsoft::WRL::Callback_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722___ @ 0x18003A2E0
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_fc741a4743938d06b405cea5fdae9784___::Run @ 0x18003A5D0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_fc741a4743938d06b405cea5fdae9784___--Run.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722__1__1___lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722___ @ 0x18003A4E0 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--InvokeHelper_IAsyncCallback__lambda_fdd7d.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722___(_QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722__1__1___lambda_fdd7dd8b55d2d1fe60d2e8a8836eb722___(&v6);
  v3 = *v2;
  *v2 = 0LL;
  v4 = v6;
  *a1 = v3;
  if ( v4 )
  {
    v6 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IImmersiveComponentCreator,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v4);
  }
  return a1;
}
