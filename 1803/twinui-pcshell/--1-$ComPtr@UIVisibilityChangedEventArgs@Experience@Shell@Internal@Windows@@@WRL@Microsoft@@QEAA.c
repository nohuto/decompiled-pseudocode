/*
 * XREFs of ??1?$ComPtr@UIVisibilityChangedEventArgs@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1800F9F68
 * Callers:
 *     _CActionCenterExperienceManager::OnVisibilityChanged_::_1_::dtor$0 @ 0x1800B5A5A (_CActionCenterExperienceManager--OnVisibilityChanged_--_1_--dtor$0.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs>::~ComPtr<Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs>(
        CVisibilityChangedEventArgs **a1)
{
  return Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs>::InternalRelease(a1);
}
