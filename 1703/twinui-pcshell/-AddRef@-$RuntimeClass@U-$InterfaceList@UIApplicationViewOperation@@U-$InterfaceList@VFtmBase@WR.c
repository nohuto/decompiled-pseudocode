/*
 * XREFs of ?AddRef@?$RuntimeClass@U?$InterfaceList@UIApplicationViewOperation@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800051A0
 * Callers:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@U?$ITypedEventHandler@PEAVSplashScreen@Activation@ApplicationModel@Windows@@PEAUIInspectable@@@Foundation@Windows@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x1800066D0 (-AddRef@-$RuntimeClass@U-$InterfaceList@U-$ITypedEventHandler@PEAVSplashScreen@Activation@Applic.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@UIImmersiveCharmsWindowManager@@U?$InterfaceList@UICharmWindowManagerInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x18001C710 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithSite@@U-$InterfaceList@UIImmersiveCharmsW.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VCWRLObjectWithSite@@U?$InterfaceList@UIImmersiveCharmsWindowManager@@U?$InterfaceList@UICharmWindowManagerInternal@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x18003BEB0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VCWRLObjectWithSite@@U-$InterfaceList@UIImm_ea_18003BEB0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IApplicationViewOperation,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef(
        __int64 a1)
{
  signed __int32 v1; // r8d
  unsigned int v2; // r9d

  v1 = *(_DWORD *)(a1 + 36);
  v2 = 0x7FFFFFFF;
  if ( v1 != 0x7FFFFFFF )
  {
    do
    {
      if ( v1 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 36), v1 + 1, v1) )
        break;
      v1 = *(_DWORD *)(a1 + 36);
    }
    while ( v1 != 0x7FFFFFFF );
    if ( v1 != 0x7FFFFFFF )
      return (unsigned int)(v1 + 1);
  }
  return v2;
}
