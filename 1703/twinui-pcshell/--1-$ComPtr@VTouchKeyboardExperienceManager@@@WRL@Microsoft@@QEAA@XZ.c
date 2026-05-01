/*
 * XREFs of ??1?$ComPtr@VTouchKeyboardExperienceManager@@@WRL@Microsoft@@QEAA@XZ @ 0x18016D160
 * Callers:
 *     _TouchKeyboardExperienceManagerCF::CreateInstance_::_1_::dtor$0 @ 0x1801A4F42 (_TouchKeyboardExperienceManagerCF--CreateInstance_--_1_--dtor$0.c)
 *     _TouchKeyboardExperienceManagerCF::CreateInstance_::_1_::dtor$1 @ 0x1801A4F4E (_TouchKeyboardExperienceManagerCF--CreateInstance_--_1_--dtor$1.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VCImmersiveShellComponentWithGITSite@@U?$InterfaceList@UIApplicationFrameEventHandler@@U?$InterfaceList@UIImmersiveLayoutChanges@@U?$InterfaceList@UITabTipAdapterOwner@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18016D3C0 (-Release@-$RuntimeClass@U-$InterfaceList@VCImmersiveShellComponentWithGITSite@@U-$I_ea_18016D3C0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<TouchKeyboardExperienceManager>::~ComPtr<TouchKeyboardExperienceManager>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<CImmersiveShellComponentWithGITSite,Microsoft::WRL::Details::InterfaceList<IApplicationFrameEventHandler,Microsoft::WRL::Details::InterfaceList<IImmersiveLayoutChanges,Microsoft::WRL::Details::InterfaceList<ITabTipAdapterOwner,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
