/*
 * XREFs of ??1?$ComPtr@VVisibilityChangedEventArgs@ViewManagerInterop@Desktop@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x18005FED0
 * Callers:
 *     _Windows::Internal::Shell::Desktop::ViewManagerInterop::ObjectWithVisibility::RaiseVisibilityChanged_::_1_::dtor$0 @ 0x18019A632 (_Windows--Internal--Shell--Desktop--ViewManagerInterop--ObjectWithVisibility--RaiseVisibilityCha.c)
 *     _ViewWrapperBase::OperationRequestComplete_::_1_::dtor$3 @ 0x18019F2D1 (_ViewWrapperBase--OperationRequestComplete_--_1_--dtor$3.c)
 *     _ThumbnailInteropFactoryBase::OnSourceSizeChanged_::_1_::dtor$1 @ 0x1801A4936 (_ThumbnailInteropFactoryBase--OnSourceSizeChanged_--_1_--dtor$1.c)
 *     _wil::MakeOrThrow_ThumbnailSourceEventArgs_HSTRING_______ptr64__::_1_::dtor$0 @ 0x1801A497F (_wil--MakeOrThrow_ThumbnailSourceEventArgs_HSTRING_______ptr64__--_1_--dtor$0.c)
 *     _Microsoft::WRL::Details::Make_ThumbnailSourceEventArgs_HSTRING_______ptr64__::_1_::dtor$0 @ 0x1801A49CB (_Microsoft--WRL--Details--Make_ThumbnailSourceEventArgs_HSTRING_______ptr64__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@Shell@Internal@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$00@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18005E960 (-Release@-$RuntimeClass@U-$InterfaceList@UIViewHostViewModeChangeRequestedEventArgs@Holographic@.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>::~ComPtr<Windows::Internal::Shell::Desktop::ViewManagerInterop::VisibilityChangedEventArgs>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostViewModeChangeRequestedEventArgs,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<1>,1,1,0>::Release(result);
  }
  return result;
}
