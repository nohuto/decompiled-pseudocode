/*
 * XREFs of _CApplicationManager::GetAllApplicationsByHostIDSafe_::_1_::dtor$0 @ 0x1800F1661
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::GetAllApplicationsByHostIDSafe_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IImmersiveApplicationArray>::~ComPtr<IImmersiveApplicationArray>(a2 + 80);
}
