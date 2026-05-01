/*
 * XREFs of _lambda_ddc57e29664aa3d202cee167658fec4e_::__lambda_ddc57e29664aa3d202cee167658fec4e_ @ 0x18012871C
 * Callers:
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ddc57e29664aa3d202cee167658fec4e____::_1_::dtor$0 @ 0x1801A0997 (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ddc57e29664aa3d202cee167658fec4.c)
 *     _Platform::Details::__abi_FunctorCapture__lambda_ddc57e29664aa3d202cee167658fec4e__void_::Invoke_::_1_::dtor$1 @ 0x1801A0A4B (_Platform--Details--__abi_FunctorCapture__lambda_ddc57e29664aa3d202cee167658fec4e___ea_1801A0A4B.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationTransitionHelper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017200 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIImmersiveApp.c)
 */

volatile signed __int32 *__fastcall lambda_ddc57e29664aa3d202cee167658fec4e_::__lambda_ddc57e29664aa3d202cee167658fec4e_(
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
