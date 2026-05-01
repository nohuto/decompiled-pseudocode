/*
 * XREFs of ??1?$ComPtr@VUAPViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FAEC8
 * Callers:
 *     ?ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1800368C0 (-ViewNavigationRequested@ViewEventDispatcher@@QEAAXIIW4ViewActivationFlags@Navigation@@PEAUIProp.c)
 *     _ViewEventDispatcher::ViewNavigationRequested_::_1_::dtor$51 @ 0x1800B308D (_ViewEventDispatcher--ViewNavigationRequested_--_1_--dtor$51.c)
 *     _UAPViewWrapper::v_SetDesiredNavigationLevel_::_1_::dtor$0 @ 0x1800B4B4C (_UAPViewWrapper--v_SetDesiredNavigationLevel_--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_unsigned_int_&___ptr64_IUnknown_____ptr64_unsigned_short_const_____ptr64_unsigned_short_const_(&___ptr64)[53]_ViewEventDispatcher_____ptr64__::_1_::dtor$1 @ 0x1800B63D6 (_Microsoft--WRL--Details--MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_uns_ea_1800B63D6.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_unsigned_int_&___ptr64_IUnknown_____ptr64_&___ptr64_unsigned_short_const_____ptr64_unsigned_short_const_(&___ptr64)[53]_ViewEventDispatcher_____ptr64__::_1_::dtor$1 @ 0x1801C6E55 (_Microsoft--WRL--Details--MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_uns_ea_1801C6E55.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_unsigned_int_&___ptr64_IUnknown_____ptr64_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64_ViewEventDispatcher_____ptr64_&___ptr64__::_1_::dtor$1 @ 0x1801C6FFC (_Microsoft--WRL--Details--MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_uns_ea_1801C6FFC.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@UIUAPViewWrapper@@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002B600 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VViewWrapperBase@@.c)
 */

UAPViewWrapper *__fastcall Microsoft::WRL::ComPtr<UAPViewWrapper>::~ComPtr<UAPViewWrapper>(UAPViewWrapper **a1)
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
