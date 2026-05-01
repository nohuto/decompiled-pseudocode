/*
 * XREFs of ??_G?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIXamlViewHost@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18015D900
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V?$CMultitaskingViewHostBase@UIAllUpViewHost@@@@UIXamlViewHost@@UIAllUpViewHostInternal@@UITabletModeChangeListener@@@Details@WRL@Microsoft@@MEAA@XZ @ 0x18015C9F0 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@V-$CMultitaskingViewHos.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CMultitaskingViewHostBase<IAllUpViewHost>,IXamlViewHost,IAllUpViewHostInternal,ITabletModeChangeListener>::`scalar deleting destructor'(
        void *Block,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<IAllUpViewHost>,IXamlViewHost,IAllUpViewHostInternal,ITabletModeChangeListener>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CMultitaskingViewHostBase<IAllUpViewHost>,IXamlViewHost,IAllUpViewHostInternal,ITabletModeChangeListener>((__int64)Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
