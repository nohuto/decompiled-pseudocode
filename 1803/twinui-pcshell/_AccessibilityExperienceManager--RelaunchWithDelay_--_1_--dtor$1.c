/*
 * XREFs of _AccessibilityExperienceManager::RelaunchWithDelay_::_1_::dtor$1 @ 0x1802595EB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AccessibilityExperienceManager::RelaunchWithDelay_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>::~ComPtr<Windows::Internal::ComTaskPool::CDelayedTask>(a2 + 64);
}
