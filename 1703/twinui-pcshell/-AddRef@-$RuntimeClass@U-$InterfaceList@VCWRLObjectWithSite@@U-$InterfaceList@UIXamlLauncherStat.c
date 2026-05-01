/*
 * XREFs of ?AddRef@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@UIXamlLauncherState@@U?$InterfaceList@UIImmersiveLauncherCortana@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180062B90
 * Callers:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCCommonApplicationViewPositionImpl@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180062BD0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCCommonApplicationViewPositionImpl@@U-$InterfaceList@VF.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@UIXamlLauncherState@@U?$InterfaceList@UIImmersiveLauncherCortana@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WCI@EAAKXZ @ 0x180151640 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithSite@@U-$InterfaceList@UIXam_ea_180151640.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@UIXamlLauncherState@@U?$InterfaceList@UIImmersiveLauncherCortana@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x1801516D0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithSite@@U-$InterfaceList@UIXam_ea_1801516D0.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@UIXamlLauncherState@@U?$InterfaceList@UIImmersiveLauncherCortana@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x1801517F0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithSite@@U-$InterfaceList@UIXam_ea_1801517F0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CWRLObjectWithSite,Microsoft::WRL::Details::InterfaceList<IXamlLauncherState,Microsoft::WRL::Details::InterfaceList<IImmersiveLauncherCortana,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef(
        __int64 a1)
{
  signed __int32 v1; // r8d
  unsigned int v2; // r9d

  v1 = *(_DWORD *)(a1 + 52);
  v2 = 0x7FFFFFFF;
  if ( v1 != 0x7FFFFFFF )
  {
    do
    {
      if ( v1 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 52), v1 + 1, v1) )
        break;
      v1 = *(_DWORD *)(a1 + 52);
    }
    while ( v1 != 0x7FFFFFFF );
    if ( v1 != 0x7FFFFFFF )
      return (unsigned int)(v1 + 1);
  }
  return v2;
}
