/*
 * XREFs of _CApplicationManager::HandleInitialPosition_::_1_::dtor$4 @ 0x1801E6744
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180005860 (--1-$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@.c)
 */

void __fastcall CApplicationManager::HandleInitialPosition_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 136) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 136) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>::~ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>((__int64 *)(a2 + 40));
  }
}
