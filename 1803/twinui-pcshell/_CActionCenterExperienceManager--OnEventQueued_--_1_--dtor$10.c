/*
 * XREFs of _CActionCenterExperienceManager::OnEventQueued_::_1_::dtor$10 @ 0x1800B5AC6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CActionCenterExperienceManager::OnEventQueued_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>(a2 + 56);
}
