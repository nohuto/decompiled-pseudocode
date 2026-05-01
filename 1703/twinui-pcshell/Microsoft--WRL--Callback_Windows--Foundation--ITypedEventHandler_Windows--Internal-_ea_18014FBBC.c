/*
 * XREFs of Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_9262982839a28cab179fa715a6d41adf___ @ 0x18014FBBC
 * Callers:
 *     ?InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experience@Shell@Internal@Windows@@@Z @ 0x18014CC9C (-InitializeCortanaExperienceManager@XamlLauncher@@AEAAJPEAUIShellExperienceManagerFactory@Experi.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019DC0 (-Release@-$RuntimeClass@U-$InterfaceList@UIImmersiveComponentCreator@@VNil@Details@WRL@Microsoft.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_9262982839a28cab179fa715a6d41adf__2__1___lambda_9262982839a28cab179fa715a6d41adf___ @ 0x180150E2C (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--InvokeHelper_Windows--Founda_ea_180150E2C.c)
 */

_QWORD *__fastcall Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_9262982839a28cab179fa715a6d41adf___(
        _QWORD *a1)
{
  __int64 *v2; // rax
  __int64 v3; // rdx
  volatile signed __int32 *v4; // rcx
  volatile signed __int32 *v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = (__int64 *)Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_IInspectable_____ptr64___lambda_9262982839a28cab179fa715a6d41adf__2__1___lambda_9262982839a28cab179fa715a6d41adf___(&v6);
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
