/*
 * XREFs of Microsoft::WRL::Callback_IAsyncCallback__lambda_a2ae839437c916c2354fd63e03dea370__&___ptr64_ @ 0x180043FE0
 * Callers:
 *     ?SwitchViews@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@Z @ 0x18003DD20 (-SwitchViews@CAppViewManager@@UEAAJPEAUHWND__@@0W4VIEW_SWITCH_PREFERENCES@@PEAUIAsyncCallback@@@.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_a2ae839437c916c2354fd63e03dea370__&___ptr64_1__1___lambda_a2ae839437c916c2354fd63e03dea370__&___ptr64_ @ 0x1800457DC (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--InvokeHelper_IAsyncCallback__lambda_a2ae8.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback_IAsyncCallback__lambda_a2ae839437c916c2354fd63e03dea370______ptr64_(
        _QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_IAsyncCallback__lambda_a2ae839437c916c2354fd63e03dea370______ptr64_1__1___lambda_a2ae839437c916c2354fd63e03dea370______ptr64_(&v6);
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
