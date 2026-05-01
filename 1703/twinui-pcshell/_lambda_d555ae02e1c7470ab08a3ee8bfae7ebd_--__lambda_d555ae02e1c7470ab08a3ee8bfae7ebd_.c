/*
 * XREFs of _lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_ @ 0x18006F738
 * Callers:
 *     _CSplashScreen::OnSystemVisualChanged_::_1_::dtor$1 @ 0x18019AB5B (_CSplashScreen--OnSystemVisualChanged_--_1_--dtor$1.c)
 *     _CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216___::Invoke_::_1_::dtor$1 @ 0x18019AC16 (_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216___--Invoke_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UISplashScreen@Activation@ApplicationModel@Windows@@U?$InterfaceList@UISplashScreen@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005EA00 (-Release@-$RuntimeClass@U-$InterfaceList@UISplashScreen@Activation@ApplicationModel@Windows@@U-$.c)
 */

volatile signed __int64 *__fastcall lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::ApplicationModel::Activation::ISplashScreen,Microsoft::WRL::Details::InterfaceList<ISplashScreen,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
