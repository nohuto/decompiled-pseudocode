/*
 * XREFs of Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::UI::Core::IDispatchedHandler_Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_716cffebc34cd4f96d4c619749227c89___ @ 0x180164CCC
 * Callers:
 *     ??$MarshallingEventHandlerWrapperHelper@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W4SwitchItemProperty@23456@$$ZV?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@WRL@Microsoft@@W4723456@@@YAJPEAU?$ITypedEventHandler@PEAUISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@W4SwitchItemProperty@23456@@Foundation@Windows@@PEAUICoreDispatcher@Core@UI@2@V?$ComPtr@UISwitchItem@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@WRL@Microsoft@@W4SwitchItemProperty@Common@Multitasking@Experiences@ComposableShell@WindowsInternal@@@Z @ 0x180164D08 (--$MarshallingEventHandlerWrapperHelper@PEAUISwitchItem@Common@Multitasking@Experiences@Composab.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIPrivilegedWindowOwnershipOperations@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180005130 (-Release@-$RuntimeClass@U-$InterfaceList@UIPrivilegedWindowOwnershipOperations@@U-$InterfaceList.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::UI::Core::IDispatchedHandler_Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_716cffebc34cd4f96d4c619749227c89__0__1___lambda_716cffebc34cd4f96d4c619749227c89___ @ 0x180164BD8 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--InvokeHelper_Microsoft--WRL-_ea_180164BD8.c)
 */

volatile signed __int32 **__fastcall Microsoft::WRL::Callback_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::UI::Core::IDispatchedHandler_Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_716cffebc34cd4f96d4c619749227c89___(
        volatile signed __int32 **a1,
        _QWORD *a2)
{
  volatile signed __int32 **v3; // rax
  volatile signed __int32 *v4; // rdx
  volatile signed __int32 *v5; // rcx
  volatile signed __int32 *v7; // [rsp+30h] [rbp+8h] BYREF

  v3 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::InvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::UI::Core::IDispatchedHandler_Microsoft::WRL::FtmBase_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil_Microsoft::WRL::Details::Nil___lambda_716cffebc34cd4f96d4c619749227c89__0__1___lambda_716cffebc34cd4f96d4c619749227c89___(
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
