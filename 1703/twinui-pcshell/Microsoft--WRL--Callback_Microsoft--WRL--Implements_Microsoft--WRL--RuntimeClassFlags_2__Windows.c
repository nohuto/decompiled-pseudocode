/*
 * XREFs of Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::UI::Core::IDispatchedHandler_Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_38c15e6f92a50785525ca7fda06ea9d5___ @ 0x18015F034
 * Callers:
 *     ??$MarshallingEventHandlerWrapperHelper@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@23456@$$ZV?$ComPtr@UISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@WRL@Microsoft@@V?$ComPtr@UISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@9Microsoft@@@@YAJPEAU?$ITypedEventHandler@PEAUISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@PEAUISwitchItemCollectionChangedEventArgs@23456@@Foundation@Windows@@PEAUICoreDispatcher@Core@UI@2@V?$ComPtr@UISwitchItemDataSource@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@WRL@Microsoft@@V?$ComPtr@UISwitchItemCollectionChangedEventArgs@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@78@@Z @ 0x18015F070 (--$MarshallingEventHandlerWrapperHelper@PEAUISwitchItemDataSource@Common@Multitasking@Experience.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIPrivilegedWindowOwnershipOperations@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180005130 (-Release@-$RuntimeClass@U-$InterfaceList@UIPrivilegedWindowOwnershipOperations@@U-$InterfaceList.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::UI::Core::IDispatchedHandler_Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_38c15e6f92a50785525ca7fda06ea9d5__0__1___lambda_38c15e6f92a50785525ca7fda06ea9d5___ @ 0x18015EF2C (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--InvokeHelper_Microsoft--WRL--Implements_M.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::UI::Core::IDispatchedHandler_Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_38c15e6f92a50785525ca7fda06ea9d5___(
        volatile signed __int32 **a1,
        _QWORD *a2)
{
  volatile signed __int32 **v3; // rax
  volatile signed __int32 *v4; // rdx
  volatile signed __int32 *v5; // rcx
  volatile signed __int32 *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::UI::Core::IDispatchedHandler_Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_38c15e6f92a50785525ca7fda06ea9d5__0__1___lambda_38c15e6f92a50785525ca7fda06ea9d5___(
         &v7,
         a2);
  v4 = *v3;
  *v3 = 0LL;
  v5 = v7;
  *a1 = v4;
  if ( v5 )
  {
    v7 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IPrivilegedWindowOwnershipOperations,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v5);
  }
  return a1;
}
