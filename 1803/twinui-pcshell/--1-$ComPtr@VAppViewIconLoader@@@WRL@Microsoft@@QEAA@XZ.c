/*
 * XREFs of ??1?$ComPtr@VAppViewIconLoader@@@WRL@Microsoft@@QEAA@XZ @ 0x18015AF98
 * Callers:
 *     _Microsoft::WRL::Details::MakeAndInitialize_Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler_Windows::Internal::Shell::IImmersiveWindowMessageNotificationHandler_CortanaSharedExperienceManager_____ptr64_long_(__cdecl_CortanaSharedExperienceManager::_)(unsigned_int_unsigned___int64___int64)___ptr64__::_1_::dtor$1 @ 0x18015A6D4 (_Microsoft--WRL--Details--MakeAndInitialize_Windows--Internal--Shell--IImmersiveWin_ea_18015A6D4.c)
 *     _CortanaSharedExperienceManager::_RegisterMessages_::_1_::dtor$1 @ 0x18015EA2B (_CortanaSharedExperienceManager--_RegisterMessages_--_1_--dtor$1.c)
 *     _Microsoft::WRL::Details::MakeAndInitialize_AppViewIconLoader_AppViewIconLoader_Windows::Internal::ComposableShell::Multitasking::IconProperties_&___ptr64_IApplicationView_____ptr64_Windows::UI::Xaml::Media::Imaging::IWriteableBitmap_____ptr64_IApplicationViewIconLoader_____ptr64__::_1_::dtor$1 @ 0x1802337C1 (_Microsoft--WRL--Details--MakeAndInitialize_AppViewIconLoader_AppViewIconLoader_Win_ea_1802337C1.c)
 *     _wil::MakeAndInitializeOrThrow_AppViewIconLoader_Windows::Internal::ComposableShell::Multitasking::IconProperties_&___ptr64_IApplicationView_____ptr64_Windows::UI::Xaml::Media::Imaging::IWriteableBitmap_____ptr64_IApplicationViewIconLoader_____ptr64__::_1_::dtor$0 @ 0x180233B08 (_wil--MakeAndInitializeOrThrow_AppViewIconLoader_Windows--Internal--ComposableShell--Multitaskin.c)
 *     _AppViewIconFactory::CreateImageSource_::_1_::dtor$3 @ 0x180235A12 (_AppViewIconFactory--CreateImageSource_--_1_--dtor$3.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AppViewIconLoader>::~ComPtr<AppViewIconLoader>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<AppViewIconLoader>::InternalRelease(a1);
}
