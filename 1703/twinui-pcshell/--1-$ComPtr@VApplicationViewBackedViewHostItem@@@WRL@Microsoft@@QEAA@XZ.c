/*
 * XREFs of ??1?$ComPtr@VApplicationViewBackedViewHostItem@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DC5E0
 * Callers:
 *     _HolographicPositioner::_RaiseViewAdded_::_1_::dtor$3 @ 0x18019D5DE (_HolographicPositioner--_RaiseViewAdded_--_1_--dtor$3.c)
 *     _HolographicPositioner::_RaiseViewAdded_::_1_::dtor$8 @ 0x18019D5EA (_HolographicPositioner--_RaiseViewAdded_--_1_--dtor$8.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIViewHostItem@Holographic@Shell@Internal@Windows@@U?$InterfaceList@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@U?$InterfaceList@UIImmersiveApplicationPresentationListener@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DE020 (-Release@-$RuntimeClass@U-$InterfaceList@UIViewHostItem@Holographic@Shell@Internal@_ea_1800DE020.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewBackedViewHostItem>::~ComPtr<ApplicationViewBackedViewHostItem>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostItem,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,Microsoft::WRL::Details::InterfaceList<IImmersiveApplicationPresentationListener,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
