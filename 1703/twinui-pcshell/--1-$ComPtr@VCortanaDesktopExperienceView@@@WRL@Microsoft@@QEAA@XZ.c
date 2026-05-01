/*
 * XREFs of ??1?$ComPtr@VCortanaDesktopExperienceView@@@WRL@Microsoft@@QEAA@XZ @ 0x1800C9144
 * Callers:
 *     _TwinUI::Cortana::CortanaPositionerSelector::_GetDesktopExperiencePositioner_::_1_::dtor$0 @ 0x18019CC61 (_TwinUI--Cortana--CortanaPositionerSelector--_GetDesktopExperiencePositioner_--_1_--dtor$0.c)
 * Callees:
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@U?$InterfaceList@VICortanaDesktopNotifications@Cortana@TwinUI@@U?$InterfaceList@VICortanaExperienceView@Cortana@TwinUI@@U?$InterfaceList@UILightDismissNotification@@U?$InterfaceList@UIImmersiveWindowMessageNotification@@U?$InterfaceList@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@WRL@Microsoft@@U?$InterfaceList@UIInputHostLayoutChanges@@U?$InterfaceList@UIImmersiveSessionIdleNotification@@U?$InterfaceList@VICortanaWNFNotification@Cortana@TwinUI@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800C8C30 (-Release@-$RuntimeClass@U-$InterfaceList@UIShellExperiencePositioner@Experience@Shell@Internal@W.c)
 */

volatile signed __int64 *__fastcall Microsoft::WRL::ComPtr<CortanaDesktopExperienceView>::~ComPtr<CortanaDesktopExperienceView>(
        volatile signed __int64 **a1)
{
  volatile signed __int64 *result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return (volatile signed __int64 *)Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Internal::Shell::Experience::IShellExperiencePositioner,Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::ICortanaDesktopNotifications,Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::ICortanaExperienceView,Microsoft::WRL::Details::InterfaceList<ILightDismissNotification,Microsoft::WRL::Details::InterfaceList<IImmersiveWindowMessageNotification,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,Microsoft::WRL::Details::InterfaceList<IInputHostLayoutChanges,Microsoft::WRL::Details::InterfaceList<IImmersiveSessionIdleNotification,Microsoft::WRL::Details::InterfaceList<TwinUI::Cortana::ICortanaWNFNotification,Microsoft::WRL::Details::Nil>>>>>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(result);
  }
  return result;
}
