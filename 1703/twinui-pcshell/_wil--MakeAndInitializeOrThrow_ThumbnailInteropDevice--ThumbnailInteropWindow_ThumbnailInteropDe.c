/*
 * XREFs of _wil::MakeAndInitializeOrThrow_ThumbnailInteropDevice::ThumbnailInteropWindow_ThumbnailInteropDevice_____ptr64_const__::_1_::dtor$0 @ 0x18019FB61
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180005560 (--1-$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@.c)
 */

void __fastcall wil::MakeAndInitializeOrThrow_ThumbnailInteropDevice::ThumbnailInteropWindow_ThumbnailInteropDevice_____ptr64_const__::_1_::dtor_0(
        __int64 a1,
        __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>::~ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>(*(__int64 **)(a2 + 64));
  }
}
