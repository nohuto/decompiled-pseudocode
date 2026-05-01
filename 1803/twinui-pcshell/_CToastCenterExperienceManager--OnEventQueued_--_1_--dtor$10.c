/*
 * XREFs of _CToastCenterExperienceManager::OnEventQueued_::_1_::dtor$10 @ 0x18016461F
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CToastCenterExperienceManager::OnEventQueued_::_1_::dtor_10(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IOSTaskCompletion>::~ComPtr<IOSTaskCompletion>((__int64 *)(a2 + 64));
}
