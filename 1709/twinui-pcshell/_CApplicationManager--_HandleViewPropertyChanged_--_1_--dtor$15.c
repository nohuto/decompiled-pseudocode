/*
 * XREFs of _CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor$15 @ 0x1801E6ED2
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180005860 (--1-$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@.c)
 */

void __fastcall CApplicationManager::_HandleViewPropertyChanged_::_1_::dtor_15(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 128) & 4) != 0 )
  {
    *(_DWORD *)(a2 + 128) &= ~4u;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>::~ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>((__int64 *)(a2 + 88));
  }
}
