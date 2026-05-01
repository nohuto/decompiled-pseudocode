/*
 * XREFs of _lambda_f8ed3535b9be488def6348833eca1e9b_::__lambda_f8ed3535b9be488def6348833eca1e9b_ @ 0x180083E4C
 * Callers:
 *     _wil::details::functor_wrapper_void__lambda_5e806e717ccb9713449452a6c1a1f847__&___ptr64_::Run_::_1_::dtor$1 @ 0x18019B837 (_wil--details--functor_wrapper_void__lambda_5e806e717ccb9713449452a6c1a1f847__-___p_ea_18019B837.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180084250 (-Release@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithGITSite@@U-$InterfaceList@.c)
 */

__int64 __fastcall lambda_f8ed3535b9be488def6348833eca1e9b_::__lambda_f8ed3535b9be488def6348833eca1e9b_(__int64 a1)
{
  __int64 result; // rax

  if ( *(_QWORD *)(a1 + 8) )
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveMonitorNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release();
  return result;
}
