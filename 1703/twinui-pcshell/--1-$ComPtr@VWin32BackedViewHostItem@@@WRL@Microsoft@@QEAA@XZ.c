/*
 * XREFs of ??1?$ComPtr@VWin32BackedViewHostItem@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DC600
 * Callers:
 *     _HolographicPositioner::_RaiseViewAdded_::_1_::dtor$2 @ 0x18019D5AE (_HolographicPositioner--_RaiseViewAdded_--_1_--dtor$2.c)
 *     _HolographicPositioner::_RaiseViewAdded_::_1_::dtor$5 @ 0x18019D5BA (_HolographicPositioner--_RaiseViewAdded_--_1_--dtor$5.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIViewHostItem@Holographic@Shell@Internal@Windows@@U?$InterfaceList@UIViewHostItemAppViewInternal@Holographic@Shell@Internal@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800DDC90 (-Release@-$RuntimeClass@U-$InterfaceList@UIViewHostItem@Holographic@Shell@Internal@Windows@@U-$I.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Win32BackedViewHostItem>::~ComPtr<Win32BackedViewHostItem>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostItem,Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Holographic::IViewHostItemAppViewInternal,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
