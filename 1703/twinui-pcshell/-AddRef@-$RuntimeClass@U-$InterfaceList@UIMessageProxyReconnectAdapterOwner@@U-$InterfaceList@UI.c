/*
 * XREFs of ?AddRef@?$RuntimeClass@U?$InterfaceList@UIMessageProxyReconnectAdapterOwner@@U?$InterfaceList@UIRemoteTabTipAdapter@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180167240
 * Callers:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@UIMessageProxyReconnectAdapterOwner@@U?$InterfaceList@UIRemoteTabTipAdapter@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180167620 (-AddRef@-$RuntimeClass@U-$InterfaceList@UIMessageProxyReconnectAdapterOwner@@U-$Int_ea_180167620.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IMessageProxyReconnectAdapterOwner,Microsoft::WRL::Details::InterfaceList<IRemoteTabTipAdapter,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::AddRef(
        __int64 a1)
{
  signed __int32 v1; // r8d
  unsigned int v2; // r9d

  v1 = *(_DWORD *)(a1 + 20);
  v2 = 0x7FFFFFFF;
  if ( v1 != 0x7FFFFFFF )
  {
    do
    {
      if ( v1 == _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 20), v1 + 1, v1) )
        break;
      v1 = *(_DWORD *)(a1 + 20);
    }
    while ( v1 != 0x7FFFFFFF );
    if ( v1 != 0x7FFFFFFF )
      return (unsigned int)(v1 + 1);
  }
  return v2;
}
