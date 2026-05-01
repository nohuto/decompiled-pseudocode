/*
 * XREFs of _CRealmActivationHistory::SetActiveApp_::_1_::dtor$2 @ 0x1801E8915
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180005860 (--1-$ComPtr@UIShellExperienceDispatcher@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@.c)
 */

void __fastcall CRealmActivationHistory::SetActiveApp_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  if ( (*(_DWORD *)(a2 + 32) & 1) != 0 )
  {
    *(_DWORD *)(a2 + 32) &= ~1u;
    Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>::~ComPtr<Windows::Internal::Shell::Experience::IShellExperienceDispatcher>((__int64 *)(a2 + 56));
  }
}
