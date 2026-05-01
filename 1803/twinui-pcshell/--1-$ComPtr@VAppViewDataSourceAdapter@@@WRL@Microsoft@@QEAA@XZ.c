/*
 * XREFs of ??1?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAA@XZ @ 0x180234BC0
 * Callers:
 *     _wil::MakeAndInitializeOrThrow_AppViewDataSourceAdapter_IApplicationViewCollection_____ptr64_&___ptr64_IApplicationViewIconLoader_____ptr64_&___ptr64_IImmersiveShellHookService_____ptr64_&___ptr64_Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice_____ptr64_IInspectable_____ptr64_&___ptr64_IInspectable_____ptr64_&___ptr64_IInspectable_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x1802339AB (_wil--MakeAndInitializeOrThrow_AppViewDataSourceAdapter_IApplicationViewCollection_____ptr64_-__.c)
 *     _AppViewDataSourceAdapter_CreateInstance_::_1_::dtor$1 @ 0x1802354D7 (_AppViewDataSourceAdapter_CreateInstance_--_1_--dtor$1.c)
 *     _AppViewDataSourceAdapter_CreateInstance_::_1_::dtor$1_0 @ 0x180235663 (_AppViewDataSourceAdapter_CreateInstance_--_1_--dtor$1_0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::~ComPtr<AppViewDataSourceAdapter>(__int64 a1)
{
  return Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::InternalRelease(a1);
}
