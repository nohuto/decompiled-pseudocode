/*
 * XREFs of ?InternalAddRef@?$RuntimeClass@U?$InterfaceList@U?$ITypedEventHandler@PEAUIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@PEAUIInspectable@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@IEAAKXZ @ 0x1800737F8
 * Callers:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@U?$ITypedEventHandler@PEAUIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@PEAUIInspectable@@@Foundation@Windows@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800733A0 (-AddRef@-$RuntimeClass@U-$InterfaceList@U-$ITypedEventHandler@PEAUIHolographicDisplayInternal@In.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal *,IInspectable *>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::InternalAddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 12), a2);
}
