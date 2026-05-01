/*
 * XREFs of ?AddRef@?$RuntimeClass@U?$InterfaceList@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@U?$InterfaceList@UIXamlViewHost@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18013F950
 * Callers:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@V?$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@U?$InterfaceList@UIXamlViewHost@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@WHA@EAAKXZ @ 0x180140310 (-AddRef@-$RuntimeClass@U-$InterfaceList@V-$CMultitaskingViewHostBase@UISnapAssistViewHost@@@@U-$.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@V?$CMultitaskingViewHostBase@UIAltTabViewHost@@@@U?$InterfaceList@UIXamlViewHost@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180140340 (-AddRef@-$RuntimeClass@U-$InterfaceList@V-$CMultitaskingViewHostBase@UIAltTabViewHo_ea_180140340.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CMultitaskingViewHostBase<IAltTabViewHost>,Microsoft::WRL::Details::InterfaceList<IXamlViewHost,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef(
        __int64 a1)
{
  signed __int32 v1; // r8d
  unsigned int v2; // r9d

  v1 = *(_DWORD *)(a1 + 124);
  v2 = 0x7FFFFFFF;
  if ( v1 != 0x7FFFFFFF )
  {
    do
    {
      if ( v1 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 124), v1 + 1, v1) )
        break;
      v1 = *(_DWORD *)(a1 + 124);
    }
    while ( v1 != 0x7FFFFFFF );
    if ( v1 != 0x7FFFFFFF )
      return (unsigned int)(v1 + 1);
  }
  return v2;
}
