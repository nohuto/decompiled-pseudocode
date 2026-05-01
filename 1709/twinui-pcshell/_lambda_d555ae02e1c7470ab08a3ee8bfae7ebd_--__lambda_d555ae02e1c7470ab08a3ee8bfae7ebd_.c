/*
 * XREFs of _lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_ @ 0x18007247C
 * Callers:
 *     _CSplashScreen::OnSystemVisualChanged_::_1_::dtor$1 @ 0x1801E952E (_CSplashScreen--OnSystemVisualChanged_--_1_--dtor$1.c)
 *     _CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216___::Invoke_::_1_::dtor$1 @ 0x1801E95DD (_CAsyncCallbackWithLambda__lambda_ca324c265ed58b3d9541d2204f682216___--Invoke_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@ApplicationModel@Windows@@UIInternalAppInfo@5Extensions@Internal@6@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180060610 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@UIAppDisplayInfo@A.c)
 */

volatile signed __int64 *__fastcall lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_::__lambda_d555ae02e1c7470ab08a3ee8bfae7ebd_(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Windows::ApplicationModel::IAppDisplayInfo,Windows::Internal::Extensions::ApplicationModel::IInternalAppInfo,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
