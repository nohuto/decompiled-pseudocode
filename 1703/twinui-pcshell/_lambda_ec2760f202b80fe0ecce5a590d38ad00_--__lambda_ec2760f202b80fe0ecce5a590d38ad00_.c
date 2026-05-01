/*
 * XREFs of _lambda_ec2760f202b80fe0ecce5a590d38ad00_::__lambda_ec2760f202b80fe0ecce5a590d38ad00_ @ 0x1801286FC
 * Callers:
 *     _Windows::UI::Core::DispatchedHandler::DispatchedHandler__lambda_ec2760f202b80fe0ecce5a590d38ad00____::_1_::dtor$0 @ 0x1801A096B (_Windows--UI--Core--DispatchedHandler--DispatchedHandler__lambda_ec2760f202b80fe0ecce5a590d38ad0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIImmersiveApplicationTransitionHelper@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180017200 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIImmersiveApp.c)
 */

volatile signed __int32 *__fastcall lambda_ec2760f202b80fe0ecce5a590d38ad00_::__lambda_ec2760f202b80fe0ecce5a590d38ad00_(
        __int64 a1)
{
  volatile signed __int32 *result; // rax

  result = *(volatile signed __int32 **)(a1 + 8);
  if ( result )
  {
    *(_QWORD *)(a1 + 8) = 0LL;
    return (volatile signed __int32 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationTransitionHelper,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
