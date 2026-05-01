/*
 * XREFs of ?InternalRelease@?$ComPtr@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180084DBC
 * Callers:
 *     ?GetDesktopView@CortanaSharedExperienceManager@@AEAA?AV?$ComPtr@VICortanaExperienceView@Cortana@TwinUI@@@WRL@Microsoft@@XZ @ 0x18006743C (-GetDesktopView@CortanaSharedExperienceManager@@AEAA-AV-$ComPtr@VICortanaExperienceView@Cortana@.c)
 *     ?Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@Shell@Internal@Windows@@@Z @ 0x180067BE0 (-Show@CortanaSharedExperienceManager@@UEAAJPEAUHSTRING__@@W4CortanaAppTransitionType@Experience@.c)
 *     ?GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAPEAUIShellExperiencePositioner@5678@@Z @ 0x180084E50 (-GetPositionerByType@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 *     ?SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerType@Experience@Shell@Internal@Windows@@PEAUIShellExperienceView@5678@@Z @ 0x180085020 (-SetActivePositioner@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJW4ShellExperiencePositionerT.c)
 *     ??1?$ComPtr@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FA128 (--1-$ComPtr@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@.c)
 *     ?RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaExperienceManagerNotification@Cortana@TwinUI@@V?$unique_ptr@VIPositionerSelector@Cortana@TwinUI@@U?$default_delete@VIPositionerSelector@Cortana@TwinUI@@@wistd@@@wistd@@@Z @ 0x18015D8DC (-RuntimeClassInitialize@CortanaSharedExperienceManager@@QEAAJPEAUIServiceProvider@@PEAVICortanaE.c)
 *     ?ActivateView@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView@Experience@Shell@Internal@Windows@@PEAUHSTRING__@@PEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@8@@Z @ 0x180183DC0 (-ActivateView@CortanaPositionerSelector@Cortana@TwinUI@@UEAAJPEAUIShellExperienceView@Experience.c)
 *     ?_GetHoloExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@Z @ 0x180183E84 (-_GetHoloExperiencePositioner@CortanaPositionerSelector@Cortana@TwinUI@@AEAAJPEAPEAUIShellExperi.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@VICortanaDesktopNotifications@Cortana@TwinUI@@VICortanaExperienceView@Cortana@TwinUI@@UILightDismissNotification@@UIImmersiveWindowMessageNotification@@U?$ChainInterfaces@UIShellTargetingBackContractNotification@@UIShellTargetingContractNotification@@VNil@Details@WRL@Microsoft@@V3456@V3456@V3456@V3456@V3456@V3456@V3456@@23@UIInputHostLayoutChanges@@UIImmersiveSessionIdleNotification@@VICortanaWNFNotification@Cortana@TwinUI@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800852D0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIShellExperienceP.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::InternalRelease(
        __int64 *a1)
{
  __int64 result; // rax
  __int64 v3; // rcx
  __int64 (*v4)(void); // rax

  result = 0LL;
  v3 = *a1;
  if ( v3 )
  {
    *a1 = 0LL;
    v4 = *(__int64 (**)(void))(*(_QWORD *)v3 + 16LL);
    if ( (char *)v4 == (char *)Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ICortanaDesktopNotifications,TwinUI::Cortana::ICortanaExperienceView,ILightDismissNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>::Release )
      return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ICortanaDesktopNotifications,TwinUI::Cortana::ICortanaExperienceView,ILightDismissNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>::Release(
               v3,
               Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,Windows::Internal::Shell::Experience::IShellExperiencePositioner,TwinUI::Cortana::ICortanaDesktopNotifications,TwinUI::Cortana::ICortanaExperienceView,ILightDismissNotification,IImmersiveWindowMessageNotification,Microsoft::WRL::ChainInterfaces<IShellTargetingBackContractNotification,IShellTargetingContractNotification,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil,Microsoft::WRL::Details::Nil>,IInputHostLayoutChanges,IImmersiveSessionIdleNotification,TwinUI::Cortana::ICortanaWNFNotification>::Release);
    else
      return v4();
  }
  return result;
}
