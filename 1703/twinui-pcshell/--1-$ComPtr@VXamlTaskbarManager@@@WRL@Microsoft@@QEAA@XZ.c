/*
 * XREFs of ??1?$ComPtr@VXamlTaskbarManager@@@WRL@Microsoft@@QEAA@XZ @ 0x180121E48
 * Callers:
 *     _XamlTaskbarManager_CreateInstance_::_1_::dtor$2 @ 0x18019FFBA (_XamlTaskbarManager_CreateInstance_--_1_--dtor$2.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@U?$ChainInterfaces@UIXamlTaskbarManagerInternal@@UIXamlTaskbarManager@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180121690 (-Release@-$RuntimeClass@U-$InterfaceList@U-$ChainInterfaces@UIXamlTaskbarManagerInternal@@UIXaml.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<XamlTaskbarManager>::~ComPtr<XamlTaskbarManager>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IXamlTaskbarManagerInternal,IXamlTaskbarManager,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
