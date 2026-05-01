/*
 * XREFs of ??1?$ComPtr@UIShellExperiencePositioner@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800FA128
 * Callers:
 *     _CortanaSharedExperienceManager::GetDesktopView_::_1_::dtor$1 @ 0x1800B50F0 (_CortanaSharedExperienceManager--GetDesktopView_--_1_--dtor$1.c)
 *     _CortanaSharedExperienceManager::TryGetDesktopViewIfActive_::_1_::dtor$1 @ 0x1800B5122 (_CortanaSharedExperienceManager--TryGetDesktopViewIfActive_--_1_--dtor$1.c)
 *     _TwinUI::Cortana::CortanaPositionerSelector::SetActivePositioner_::_1_::dtor$0 @ 0x1800B5EA4 (_TwinUI--Cortana--CortanaPositionerSelector--SetActivePositioner_--_1_--dtor$0.c)
 *     _TwinUI::Cortana::CortanaPositionerSelector::SetActivePositioner_::_1_::dtor$2 @ 0x1800B5EBC (_TwinUI--Cortana--CortanaPositionerSelector--SetActivePositioner_--_1_--dtor$2.c)
 *     _CortanaSharedExperienceManager::RuntimeClassInitialize_::_1_::dtor$1 @ 0x18015DAB2 (_CortanaSharedExperienceManager--RuntimeClassInitialize_--_1_--dtor$1.c)
 *     _TwinUI::Cortana::CortanaPositionerSelector::ActivateView_::_1_::dtor$0 @ 0x180183E77 (_TwinUI--Cortana--CortanaPositionerSelector--ActivateView_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::~ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>(
        __int64 *a1)
{
  return Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IShellExperiencePositioner>::InternalRelease(a1);
}
