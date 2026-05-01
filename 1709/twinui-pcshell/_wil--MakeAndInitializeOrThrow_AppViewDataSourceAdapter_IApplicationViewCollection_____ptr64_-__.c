/*
 * XREFs of _wil::MakeAndInitializeOrThrow_AppViewDataSourceAdapter_IApplicationViewCollection_____ptr64_&___ptr64_IApplicationViewIconLoader_____ptr64_&___ptr64_IImmersiveShellHookService_____ptr64_&___ptr64_Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice_____ptr64__::_1_::dtor$0 @ 0x1801F5E16
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAA@XZ @ 0x1800B939C (--1-$ComPtr@VAppViewDataSourceAdapter@@@WRL@Microsoft@@QEAA@XZ.c)
 */

int __fastcall wil::MakeAndInitializeOrThrow_AppViewDataSourceAdapter_IApplicationViewCollection_____ptr64_____ptr64_IApplicationViewIconLoader_____ptr64_____ptr64_IImmersiveShellHookService_____ptr64_____ptr64_Windows::Internal::Shell::Multitasking::Desktop::IDesktopThumbnailDevice_____ptr64__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  int result; // eax

  result = *(_DWORD *)(a2 + 48) & 1;
  if ( result )
  {
    *(_DWORD *)(a2 + 48) &= ~1u;
    return Microsoft::WRL::ComPtr<AppViewDataSourceAdapter>::~ComPtr<AppViewDataSourceAdapter>(*(CStartExperienceManager ***)(a2 + 128));
  }
  return result;
}
