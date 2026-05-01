/*
 * XREFs of ??_E?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@WRL@Microsoft@@UEAAPEAXI@Z @ 0x180083F50
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCApplicationViewBase@@UIWinRTApplicationView@@VFtmBase@23@@Details@WRL@Microsoft@@MEAA@XZ @ 0x1800844C0 (--1-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@VCApplicat_ea_1800844C0.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1801E3060 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void *__fastcall Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::`vector deleting destructor'(
        void *Block,
        char a2)
{
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,CApplicationViewBase,IWinRTApplicationView,Microsoft::WRL::FtmBase>(Block);
  if ( (a2 & 1) != 0 )
    operator delete(Block);
  return Block;
}
