/*
 * XREFs of _lambda_746ce81ff21a836f4d6b75f33bf24800_::_lambda_invoker_cdecl_ @ 0x1801086E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIViewManagerBridge@@U?$InterfaceList@UIMessageProxyListener@@U?$InterfaceList@UIMessageListListener@@U?$InterfaceList@UIMessageMapListener@@U?$InterfaceList@UIShellViewManagerListener@Server@Navigation@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FCBA0 (-Release@-$RuntimeClass@U-$InterfaceList@UIViewManagerBridge@@U-$InterfaceList@UIMessageProxyLis.c)
 *     ?InitializeAndRunCoreUiMessageLoop@ViewManagerBridge@@AEAAXXZ @ 0x18010C04C (-InitializeAndRunCoreUiMessageLoop@ViewManagerBridge@@AEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall lambda_746ce81ff21a836f4d6b75f33bf24800_::_lambda_invoker_cdecl_(ViewManagerBridge *Parameter)
{
  ViewManagerBridge::InitializeAndRunCoreUiMessageLoop(Parameter);
  if ( Parameter )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IViewManagerBridge,Microsoft::WRL::Details::InterfaceList<IMessageProxyListener,Microsoft::WRL::Details::InterfaceList<IMessageListListener,Microsoft::WRL::Details::InterfaceList<IMessageMapListener,Microsoft::WRL::Details::InterfaceList<Navigation::Server::IShellViewManagerListener,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release((volatile signed __int32 *)Parameter);
  return 0LL;
}
