/*
 * XREFs of _Microsoft::WRL::Details::Make_MonitorFrame_IImmersiveMonitor_____ptr64_&___ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView_____ptr64_&___ptr64_IXamlMultitaskingViewController_____ptr64_&___ptr64_IXamlSwitcherWindowInteractionEvents_____ptr64__::_1_::dtor$0 @ 0x1801A14E2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180005560 (--1-$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@.c)
 */

void __fastcall Microsoft::WRL::Details::Make_MonitorFrame_IImmersiveMonitor_____ptr64_____ptr64_WindowsInternal::ComposableShell::Experiences::Multitasking::Common::ISwitchItemDataView_____ptr64_____ptr64_IXamlMultitaskingViewController_____ptr64_____ptr64_IXamlSwitcherWindowInteractionEvents_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>::~ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>(*(__int64 **)(a2 + 112));
  }
}
