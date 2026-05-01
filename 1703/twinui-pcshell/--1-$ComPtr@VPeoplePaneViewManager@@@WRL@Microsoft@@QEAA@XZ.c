/*
 * XREFs of ??1?$ComPtr@VPeoplePaneViewManager@@@WRL@Microsoft@@QEAA@XZ @ 0x1800EBA9C
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_PeoplePaneViewManager_IUnknown__::_1_::dtor$0 @ 0x18019DE8A (_Microsoft--WRL--Details--MakeAndInitialize_PeoplePaneViewManager_IUnknown__--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithSite@@U?$InterfaceList@UIPeoplePaneViewManager@@U?$InterfaceList@UIPeopleExperienceHostManager@@U?$InterfaceList@UIApplicationViewChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800EBD60 (-Release@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithSite@@U-$InterfaceList@UIP.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<PeoplePaneViewManager>::~ComPtr<PeoplePaneViewManager>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithSite,Microsoft::WRL::Details::InterfaceList<IPeoplePaneViewManager,Microsoft::WRL::Details::InterfaceList<IPeopleExperienceHostManager,Microsoft::WRL::Details::InterfaceList<IApplicationViewChangeListener,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(result);
  }
  return result;
}
