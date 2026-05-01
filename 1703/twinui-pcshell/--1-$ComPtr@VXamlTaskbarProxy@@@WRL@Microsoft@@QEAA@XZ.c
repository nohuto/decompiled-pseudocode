/*
 * XREFs of ??1?$ComPtr@VXamlTaskbarProxy@@@WRL@Microsoft@@QEAA@XZ @ 0x18011E6CC
 * Callers:
 *     _XamlExplorerHost::CreateTaskbar_::_1_::dtor$2 @ 0x18019F9E7 (_XamlExplorerHost--CreateTaskbar_--_1_--dtor$2.c)
 *     _XamlExplorerHost::CreateTaskbar_::_1_::dtor$8 @ 0x18019F9FF (_XamlExplorerHost--CreateTaskbar_--_1_--dtor$8.c)
 *     _wil::MakeAndInitializeOrThrow_XamlTaskbarProxy_IImmersiveMonitor_____ptr64_&___ptr64_CreationThreadDispatcher_____ptr64_&___ptr64_IXamlTaskbarProxyHost_____ptr64__::_1_::dtor$0 @ 0x18019FB0F (_wil--MakeAndInitializeOrThrow_XamlTaskbarProxy_IImmersiveMonitor_____ptr64_-___ptr64_CreationTh.c)
 *     _XamlTaskbarProxy::UpdateWindowPositionInternal_::_1_::dtor$0 @ 0x1801A0777 (_XamlTaskbarProxy--UpdateWindowPositionInternal_--_1_--dtor$0.c)
 *     _XamlTaskbarProxy::AsyncDestroy_::_1_::dtor$1 @ 0x1801A07B8 (_XamlTaskbarProxy--AsyncDestroy_--_1_--dtor$1.c)
 *     _XamlTaskbarProxy::SetTaskbarData_::_1_::dtor$1 @ 0x1801A07F9 (_XamlTaskbarProxy--SetTaskbarData_--_1_--dtor$1.c)
 *     _Platform::Details::__abi_FunctorCapture__lambda_ddc57e29664aa3d202cee167658fec4e__void_::Invoke_::_1_::dtor$0 @ 0x1801A0A3F (_Platform--Details--__abi_FunctorCapture__lambda_ddc57e29664aa3d202cee167658fec4e__void_--Invoke.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationTransitionHelper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017200 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIImmersiveApp.c)
 */

volatile signed __int32 *__fastcall Microsoft::WRL::ComPtr<XamlTaskbarProxy>::~ComPtr<XamlTaskbarProxy>(
        volatile signed __int32 **a1)
{
  volatile signed __int32 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
