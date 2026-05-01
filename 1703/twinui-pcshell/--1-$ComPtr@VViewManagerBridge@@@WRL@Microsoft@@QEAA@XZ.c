/*
 * XREFs of ??1?$ComPtr@VViewManagerBridge@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FCE44
 * Callers:
 *     __lambda_746ce81ff21a836f4d6b75f33bf24800_::_lambda_invoker_cdecl__::_1_::dtor$0 @ 0x18019ED39 (__lambda_746ce81ff21a836f4d6b75f33bf24800_--_lambda_invoker_cdecl__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIViewManagerBridge@@U?$InterfaceList@UIMessageProxyListener@@U?$InterfaceList@UIMessageListListener@@U?$InterfaceList@UIMessageMapListener@@U?$InterfaceList@UIShellViewManagerListener@Server@Navigation@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FCBA0 (-Release@-$RuntimeClass@U-$InterfaceList@UIViewManagerBridge@@U-$InterfaceList@UIMessageProxyLis.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<ViewManagerBridge>::~ComPtr<ViewManagerBridge>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IViewManagerBridge,Microsoft::WRL::Details::InterfaceList<IMessageProxyListener,Microsoft::WRL::Details::InterfaceList<IMessageListListener,Microsoft::WRL::Details::InterfaceList<IMessageMapListener,Microsoft::WRL::Details::InterfaceList<Navigation::Server::IShellViewManagerListener,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
