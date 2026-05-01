/*
 * XREFs of _CApplicationManager::_CreateImmersiveApp_::_1_::dtor$3 @ 0x1800B3AB4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::_CreateImmersiveApp_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>::~ComPtr<CRefCountedObject<PER_APPLICATION_DATA>>(a2 + 296);
}
