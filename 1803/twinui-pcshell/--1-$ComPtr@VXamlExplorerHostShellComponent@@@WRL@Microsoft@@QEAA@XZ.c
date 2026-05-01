/*
 * XREFs of ??1?$ComPtr@VXamlExplorerHostShellComponent@@@WRL@Microsoft@@QEAA@XZ @ 0x18009F9FC
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_HolographicForegroundAssistant_IUnknown__::_1_::dtor$1 @ 0x18009F875 (_Microsoft--WRL--Details--MakeAndInitialize_HolographicForegroundAssistant_IUnknown_ea_18009F875.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_XamlExplorerHostShellComponent_IUnknown__::_1_::dtor$1 @ 0x1801F71F2 (_Microsoft--WRL--Details--MakeAndInitialize_XamlExplorerHostShellComponent_IUnknown_ea_1801F71F2.c)
 *     _XamlExplorerHostShellComponent::InitializeWindows_::_1_::dtor$5 @ 0x1801F8D91 (_XamlExplorerHostShellComponent--InitializeWindows_--_1_--dtor$5.c)
 *     _XamlExplorerHostShellComponent::PerformDelayedInitialization_::_1_::dtor$0 @ 0x1801F8F21 (_XamlExplorerHostShellComponent--PerformDelayedInitialization_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImmersiveShellComponentWithGITSite@@UIPrivilegedOperationsConsumer@@UIXamlExplorerHost@@VFtmBase@23@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18009FFC0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@VCImm_ea_18009FFC0.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<XamlExplorerHostShellComponent>::~ComPtr<XamlExplorerHostShellComponent>(
        __int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,CImmersiveShellComponentWithGITSite,IPrivilegedOperationsConsumer,IXamlExplorerHost,Microsoft::WRL::FtmBase>::Release(result);
  }
  return result;
}
