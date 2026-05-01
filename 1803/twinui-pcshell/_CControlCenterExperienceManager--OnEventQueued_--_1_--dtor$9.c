/*
 * XREFs of _CControlCenterExperienceManager::OnEventQueued_::_1_::dtor$9 @ 0x180157C77
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CControlCenterExperienceManager::OnEventQueued_::_1_::dtor_9(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>((__int64 *)(a2 + 56));
}
