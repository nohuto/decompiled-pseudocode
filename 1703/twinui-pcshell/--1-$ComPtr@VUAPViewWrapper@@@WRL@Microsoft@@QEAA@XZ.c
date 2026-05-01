/*
 * XREFs of ??1?$ComPtr@VUAPViewWrapper@@@WRL@Microsoft@@QEAA@XZ @ 0x180100A14
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_unsigned_int_&___ptr64_IUnknown_____ptr64_unsigned_short_const_____ptr64_unsigned_short_const_____ptr64_ViewEventDispatcher_____ptr64_const__::_1_::dtor$0 @ 0x18019EBF8 (_Microsoft--WRL--Details--MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_unsigned_int_-__.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_unsigned_int_&___ptr64_IUnknown_____ptr64_unsigned_short_const_____ptr64_unsigned_short_const_(&___ptr64)[53]_ViewEventDispatcher_____ptr64_const__::_1_::dtor$0 @ 0x18019EC10 (_Microsoft--WRL--Details--MakeAndInitialize_UAPViewWrapper_IViewWrapperInternal_uns_ea_18019EC10.c)
 *     _UAPViewWrapper::v_SetDesiredNavigationLevel_::_1_::dtor$0 @ 0x18019F1BD (_UAPViewWrapper--v_SetDesiredNavigationLevel_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VViewWrapperBase@@U?$InterfaceList@UIUAPViewWrapper@@U?$InterfaceList@UIViewWrapperSplashScreenSupport@ViewManagerInterop@Shell@Internal@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800FC480 (-Release@-$RuntimeClass@U-$InterfaceList@VViewWrapperBase@@U-$InterfaceList@UIUAPViewWrapper@@U-.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<UAPViewWrapper>::~ComPtr<UAPViewWrapper>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<ViewWrapperBase,Microsoft::WRL::Details::InterfaceList<IUAPViewWrapper,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::ViewManagerInterop::IViewWrapperSplashScreenSupport,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
