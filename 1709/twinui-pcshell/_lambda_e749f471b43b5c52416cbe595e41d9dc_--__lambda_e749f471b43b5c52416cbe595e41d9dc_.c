/*
 * XREFs of _lambda_e749f471b43b5c52416cbe595e41d9dc_::__lambda_e749f471b43b5c52416cbe595e41d9dc_ @ 0x18013BB58
 * Callers:
 *     _UAPViewWrapper::v_SetDesiredNavigationLevel_::_1_::dtor$1 @ 0x1801EF334 (_UAPViewWrapper--v_SetDesiredNavigationLevel_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180127820 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@.c)
 */

volatile signed __int64 *__fastcall lambda_e749f471b43b5c52416cbe595e41d9dc_::__lambda_e749f471b43b5c52416cbe595e41d9dc_(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(result);
  }
  return result;
}
