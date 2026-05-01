/*
 * XREFs of _wil::MakeOrThrow_MonitorFrame_IImmersiveMonitor_____ptr64_&___ptr64_Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl_____ptr64_&___ptr64_IXamlMultitaskingViewController_____ptr64_&___ptr64_IXamlSwitcherWindowInteractionEvents_____ptr64__::_1_::dtor$1 @ 0x1801F1B0B
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180005860 (--1-$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@.c)
 */

void __fastcall wil::MakeOrThrow_MonitorFrame_IImmersiveMonitor_____ptr64_____ptr64_Windows::Internal::ComposableShell::Multitasking::SwitchItemDataViewImpl_____ptr64_____ptr64_IXamlMultitaskingViewController_____ptr64_____ptr64_IXamlSwitcherWindowInteractionEvents_____ptr64__::_1_::dtor_1(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 48) & 2) != 0 )
  {
    *(_DWORD *)(a2 + 48) &= ~2u;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>::~ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>(*(__int64 **)(a2 + 112));
  }
}
