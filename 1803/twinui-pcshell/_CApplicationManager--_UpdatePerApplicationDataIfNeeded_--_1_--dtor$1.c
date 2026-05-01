/*
 * XREFs of _CApplicationManager::_UpdatePerApplicationDataIfNeeded_::_1_::dtor$1 @ 0x1800F12CB
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::_UpdatePerApplicationDataIfNeeded_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::~ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>(a2 + 40);
}
