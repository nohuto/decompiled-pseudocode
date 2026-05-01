/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIXamlViewHost@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@VNil@Details@23@V8923@V8923@V8923@V8923@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180130050
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClass@U?$InterfaceList@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@U?$InterfaceList@UIXamlViewHost@@U?$InterfaceList@UIAllUpViewHostInternal@@U?$InterfaceList@UITabletModeChangeListener@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@MEAA@XZ @ 0x18012F2C8 (--1-$RuntimeClass@U-$InterfaceList@V-$CMultitaskingViewHostBase@UIAllUpViewHost@@@@U-$InterfaceL.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180195074 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAllUpViewHost>,IXamlViewHost,IAllUpViewHostInternal,ITabletModeChangeListener,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CMultitaskingViewHostBase<IAllUpViewHost>,Microsoft::WRL::Details::InterfaceList<IXamlViewHost,Microsoft::WRL::Details::InterfaceList<IAllUpViewHostInternal,Microsoft::WRL::Details::InterfaceList<ITabletModeChangeListener,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::~RuntimeClass<Microsoft::WRL::Details::InterfaceList<CMultitaskingViewHostBase<IAllUpViewHost>,Microsoft::WRL::Details::InterfaceList<IXamlViewHost,Microsoft::WRL::Details::InterfaceList<IAllUpViewHostInternal,Microsoft::WRL::Details::InterfaceList<ITabletModeChangeListener,Microsoft::WRL::Details::Nil>>>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
