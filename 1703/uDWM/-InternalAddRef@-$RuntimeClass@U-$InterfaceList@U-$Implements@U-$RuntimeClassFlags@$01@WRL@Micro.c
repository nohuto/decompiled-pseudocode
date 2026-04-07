/*
 * XREFs of ?InternalAddRef@?$RuntimeClass@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@IEAAKXZ @ 0x180073804
 * Callers:
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@U?$Implements@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAVHolographicDisplayWatcher@Internal@Holographic@Graphics@Windows@@PEAVHolographicDisplay@345@@Foundation@Windows@@VFtmBase@23@VNil@Details@23@V8923@V8923@V8923@V8923@V8923@V8923@@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800733B0 (-AddRef@-$RuntimeClass@U-$InterfaceList@U-$Implements@U-$RuntimeClassFlags@$01@WRL@_ea_1800733B0.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::Implements<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::HolographicDisplayWatcher *,Windows::Graphics::Holographic::HolographicDisplay *>,Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::InternalAddRef(
        __int64 a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(a1 + 36), a2);
}
