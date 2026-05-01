/*
 * XREFs of _lambda_5eeb3274d8dd6409222f94091fb661d1_::__lambda_5eeb3274d8dd6409222f94091fb661d1_ @ 0x1801E2D5C
 * Callers:
 *     _UAPViewWrapper::v_SetDesiredNavigationLevel_::_1_::dtor$1 @ 0x1800B4B58 (_UAPViewWrapper--v_SetDesiredNavigationLevel_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B600 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@.c)
 */

UAPViewWrapper *__fastcall lambda_5eeb3274d8dd6409222f94091fb661d1_::__lambda_5eeb3274d8dd6409222f94091fb661d1_(
        UAPViewWrapper **a1)
{
  UAPViewWrapper *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (UAPViewWrapper *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ViewWrapperBase,IUAPViewWrapper,Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport>::Release(result);
  }
  return result;
}
