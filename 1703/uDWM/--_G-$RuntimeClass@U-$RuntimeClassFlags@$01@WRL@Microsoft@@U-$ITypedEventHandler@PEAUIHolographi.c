/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIHolographicDisplayInternal@Internal@Holographic@Graphics@Windows@@PEAUIInspectable@@@Foundation@Windows@@VNil@Details@23@V7823@V7823@V7823@V7823@V7823@V7823@V7823@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180073200
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x18004DEC0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Graphics::Holographic::Internal::IHolographicDisplayInternal *,IInspectable *>,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`scalar deleting destructor'(
        __int64 a1,
        char a2)
{
  *(_DWORD *)(a1 + 12) = -1073741823;
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      a1);
  return a1;
}
