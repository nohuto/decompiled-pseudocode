/*
 * XREFs of _wil::MakeAndInitializeOrThrow_AppViewDataSourceAdapter_IApplicationViewCollection_____ptr64_&___ptr64_IApplicationViewIconLoader_____ptr64_&___ptr64_IImmersiveShellHookService_____ptr64_&___ptr64_Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice_____ptr64_IInspectable_____ptr64_&___ptr64_IInspectable_____ptr64_&___ptr64_IInspectable_____ptr64_&___ptr64__::_1_::dtor$0 @ 0x1802339AB
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAA@XZ @ 0x180234BC0 (--1-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAA@XZ.c)
 */

__int64 __fastcall wil::MakeAndInitializeOrThrow_AppViewDataSourceAdapter_IApplicationViewCollection_____ptr64_____ptr64_IApplicationViewIconLoader_____ptr64_____ptr64_IImmersiveShellHookService_____ptr64_____ptr64_Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice_____ptr64_IInspectable_____ptr64_____ptr64_IInspectable_____ptr64_____ptr64_IInspectable_____ptr64_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  __int64 result; // rax

  result = *(_DWORD *)(a2 + 64) & 1;
  if ( (_DWORD)result )
  {
    *(_DWORD *)(a2 + 64) &= ~1u;
    return Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::~ComPtr<AppViewDataSourceAdapter>(*(_QWORD *)(a2 + 96));
  }
  return result;
}
