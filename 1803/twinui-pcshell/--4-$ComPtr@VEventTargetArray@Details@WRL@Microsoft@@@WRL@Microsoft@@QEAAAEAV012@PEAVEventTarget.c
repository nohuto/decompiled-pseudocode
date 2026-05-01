/*
 * XREFs of ??4?$ComPtr@VEventTargetArray@Details@WRL@Microsoft@@@WRL@Microsoft@@QEAAAEAV012@PEAVEventTargetArray@Details@12@@Z @ 0x1800541E8
 * Callers:
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_5e56cf8d1dd2eec0a17832a5cbbc524e__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64___ @ 0x18007DF74 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_5e56cf8d1dd2eec0a17832a5cbbc524e__Windo.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_4935cb68771a3c75d2224a753f78fcb0__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager_____ptr64_Windows::Internal::Shell::Experience::ICortanaShownEventArgs_____ptr64___ @ 0x180085900 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_4935cb68771a3c75d2224a753f78fcb0__Windo.c)
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_6fa41624ad117cbea5b5b5fb1da71b97__Windows::Foundation::ITypedEventHandler_Windows::ApplicationModel::Activation::SplashScreen_____ptr64_IInspectable_____ptr64___ @ 0x1801380B4 (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_6fa41624ad117cbea5b5b5fb1da71b97__Wind.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_8178a51d0eb57af575486b4cf7867d56__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::IBaseExperienceManager_____ptr64_Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs_____ptr64___ @ 0x180156A70 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_8178a51d0eb57af575486b4cf7867d56__Windo.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_8241ab7c54b4c0e48d4fcc85deacecc3__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopDataSource_____ptr64_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktopCollectionChangedEventArgs_____ptr64___ @ 0x18015A14C (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_8241ab7c54b4c0e48d4fcc85deacecc3__Windo.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_d789d36f4409f79ab6db7c104c5ebf63__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager_____ptr64_int___ @ 0x1801728E4 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_d789d36f4409f79ab6db7c104c5ebf63__Windo.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_580d0bd5d4367160b721ed6c73d01f7d__Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Holographic::IViewHostItem_____ptr64_Windows::Internal::Shell::Holographic::IFrameworkViewTypeSetEventArgs_____ptr64___ @ 0x1801BAF94 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_580d0bd5d4367160b721ed6c73d01f7d__Windo.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_1236e2c0be9b000750d1b0bdd8ae8f82__Windows::Internal::Shell::Popups::IPopupPropertyChangedEventHandler_ @ 0x1801E3BEC (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_1236e2c0be9b000750d1b0bdd8ae8f82__Windo.c)
 *     Microsoft::WRL::InvokeTraits_2_::InvokeDelegates__lambda_ef2e29dadc09aecb7a7bd0b9bbc37d0e__Windows::Foundation::ITypedEventHandler_Windows::Internal::ComposableShell::Multitasking::IVirtualDesktop_____ptr64_enum_Windows::Internal::ComposableShell::Multitasking::VirtualDesktopProperty___ @ 0x180261840 (Microsoft--WRL--InvokeTraits_2_--InvokeDelegates__lambda_ef2e29dadc09aecb7a7bd0b9bbc37d0e__Windo.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180054260 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIUnknown@@@Detai.c)
 *     ?InternalAddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewIconLoaderNotifications@@@Details@WRL@Microsoft@@IEAAKXZ @ 0x18025257C (-InternalAddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicat.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<Microsoft::WRL::Details::EventTargetArray>::operator=(
        __int64 *a1,
        __int64 a2)
{
  __int64 v3; // r10
  __int64 v4; // rcx

  v3 = a2;
  v4 = *a1;
  if ( v4 != a2 )
  {
    if ( a2 )
    {
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewIconLoaderNotifications>::InternalAddRef(a2);
      v4 = *a1;
    }
    *a1 = v3;
    if ( v4 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IUnknown>::Release(v4);
  }
  return a1;
}
