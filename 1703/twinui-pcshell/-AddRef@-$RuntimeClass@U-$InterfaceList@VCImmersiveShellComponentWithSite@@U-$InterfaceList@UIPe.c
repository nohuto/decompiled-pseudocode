/*
 * XREFs of ?AddRef@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithSite@@U?$InterfaceList@UIPeoplePaneViewManager@@U?$InterfaceList@UIPeopleExperienceHostManager@@U?$InterfaceList@UIApplicationViewChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18002DBA0
 * Callers:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithSite@@U?$InterfaceList@UIPeoplePaneViewManager@@U?$InterfaceList@UIPeopleExperienceHostManager@@U?$InterfaceList@UIApplicationViewChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WEA@EAAKXZ @ 0x18002DFE0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithSite@@U-$Inter_ea_18002DFE0.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@VCIAMSpecialWindowBase@@U?$InterfaceList@UIFallbackWindow@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@UIRawElementProviderSimple@@U?$InterfaceList@UIInvokeProvider@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WEI@EAAKXZ @ 0x18002E030 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithSite@@U-$InterfaceList@VCIAMSpecialWindow.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithSite@@U?$InterfaceList@UIPeoplePaneViewManager@@U?$InterfaceList@UIPeopleExperienceHostManager@@U?$InterfaceList@UIApplicationViewChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18002E070 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithSite@@U-$Inter_ea_18002E070.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithSite@@U?$InterfaceList@UIPeoplePaneViewManager@@U?$InterfaceList@UIPeopleExperienceHostManager@@U?$InterfaceList@UIApplicationViewChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WFA@EAAKXZ @ 0x18002E080 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithSite@@U-$Inter_ea_18002E080.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@VCIAMSpecialWindowBase@@U?$InterfaceList@UIFallbackWindow@@U?$InterfaceList@UIImmersiveMonitorNotification@@U?$InterfaceList@UIRawElementProviderSimple@@U?$InterfaceList@UIInvokeProvider@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WDI@EAAKXZ @ 0x18002E0C0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithSite@@U-$InterfaceList@VCIAM_ea_18002E0C0.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithSite@@U?$InterfaceList@UIPeoplePaneViewManager@@U?$InterfaceList@UIPeopleExperienceHostManager@@U?$InterfaceList@UIApplicationViewChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x1800ED510 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithSite@@U-$Inter_ea_1800ED510.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithSite,Microsoft::WRL::Details::InterfaceList<IPeoplePaneViewManager,Microsoft::WRL::Details::InterfaceList<IPeopleExperienceHostManager,Microsoft::WRL::Details::InterfaceList<IApplicationViewChangeListener,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef(
        __int64 a1)
{
  signed __int32 v1; // r8d
  unsigned int v2; // r9d

  v1 = *(_DWORD *)(a1 + 92);
  v2 = 0x7FFFFFFF;
  if ( v1 != 0x7FFFFFFF )
  {
    do
    {
      if ( v1 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 92), v1 + 1, v1) )
        break;
      v1 = *(_DWORD *)(a1 + 92);
    }
    while ( v1 != 0x7FFFFFFF );
    if ( v1 != 0x7FFFFFFF )
      return (unsigned int)(v1 + 1);
  }
  return v2;
}
