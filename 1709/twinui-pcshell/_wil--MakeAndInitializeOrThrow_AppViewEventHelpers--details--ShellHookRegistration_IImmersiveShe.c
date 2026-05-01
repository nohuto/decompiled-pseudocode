/*
 * XREFs of _wil::MakeAndInitializeOrThrow_AppViewEventHelpers::details::ShellHookRegistration_IImmersiveShellHookNotification_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x1801F5E67
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180005860 (--1-$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@.c)
 */

void __fastcall wil::MakeAndInitializeOrThrow_AppViewEventHelpers::details::ShellHookRegistration_IImmersiveShellHookNotification_____ptr64_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>::~ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>(*(__int64 **)(a2 + 64));
  }
}
