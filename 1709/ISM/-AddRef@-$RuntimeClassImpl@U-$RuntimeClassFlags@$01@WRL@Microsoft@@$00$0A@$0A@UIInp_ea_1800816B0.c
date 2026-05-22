/*
 * XREFs of ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputDeliveryServer@@UIInputQueueHost@@UIInputServiceProxyOwner@@UIRemoteInputDelivery@@UIInputFocusListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800816B0
 * Callers:
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputDeliveryServer@@UIInputQueueHost@@UIInputServiceProxyOwner@@UIRemoteInputDelivery@@UIInputFocusListener@@@Details@WRL@Microsoft@@WCA@EAAKXZ @ 0x180081600 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputDeliverySer.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputDeliveryServer@@UIInputQueueHost@@UIInputServiceProxyOwner@@UIRemoteInputDelivery@@UIInputFocusListener@@@Details@WRL@Microsoft@@WBI@EAAKXZ @ 0x180081630 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInp_ea_180081630.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputDeliveryServer@@UIInputQueueHost@@UIInputServiceProxyOwner@@UIRemoteInputDelivery@@UIInputFocusListener@@@Details@WRL@Microsoft@@WBA@EAAKXZ @ 0x180081660 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInp_ea_180081660.c)
 *     ?AddRef@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInputDeliveryServer@@UIInputQueueHost@@UIInputServiceProxyOwner@@UIRemoteInputDelivery@@UIInputFocusListener@@@Details@WRL@Microsoft@@W7EAAKXZ @ 0x180081690 (-AddRef@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIInp_ea_180081690.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IInputDeliveryServer,IInputQueueHost,IInputServiceProxyOwner,IRemoteInputDelivery,IInputFocusListener>::AddRef(
        __int64 a1)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)(a1 + 44));
}
