/*
 * XREFs of _CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor$10 @ 0x1801E6CEE
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180005860 (--1-$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@.c)
 */

void __fastcall CApplicationManager::_HandleViewNavigationRequested_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 184) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 184) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>::~ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>((__int64 *)(a2 + 32));
  }
}
