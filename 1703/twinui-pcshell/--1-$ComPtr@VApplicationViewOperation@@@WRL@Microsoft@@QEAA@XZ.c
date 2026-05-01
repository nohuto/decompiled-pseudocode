/*
 * XREFs of ??1?$ComPtr@VApplicationViewOperation@@@WRL@Microsoft@@QEAA@XZ @ 0x1800DC5A0
 * Callers:
 *     _HolographicPositioner::_TransitionViewToHolographic_::_1_::dtor$3 @ 0x18019D73A (_HolographicPositioner--_TransitionViewToHolographic_--_1_--dtor$3.c)
 *     _HolographicPositioner::_TransitionViewFromHolographic_::_1_::dtor$1 @ 0x18019D75E (_HolographicPositioner--_TransitionViewFromHolographic_--_1_--dtor$1.c)
 *     _HolographicPositioner::_UpdateViewStateDataForView_::_1_::dtor$1 @ 0x18019D776 (_HolographicPositioner--_UpdateViewStateDataForView_--_1_--dtor$1.c)
 *     _ApplicationViewBackedViewHostItem::put_Visibility_::_1_::dtor$0 @ 0x18019D9D6 (_ApplicationViewBackedViewHostItem--put_Visibility_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIApplicationViewOperation@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800E26A0 (-Release@-$RuntimeClass@U-$InterfaceList@UIApplicationViewOperation@@U-$InterfaceLi_ea_1800E26A0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<ApplicationViewOperation>::~ComPtr<ApplicationViewOperation>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IApplicationViewOperation,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
