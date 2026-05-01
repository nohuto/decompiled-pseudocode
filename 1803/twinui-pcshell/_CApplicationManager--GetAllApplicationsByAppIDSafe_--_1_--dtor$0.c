/*
 * XREFs of _CApplicationManager::GetAllApplicationsByAppIDSafe_::_1_::dtor$0 @ 0x1801071BC
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CApplicationManager::GetAllApplicationsByAppIDSafe_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IImmersiveApplicationArray>::~ComPtr<IImmersiveApplicationArray>((__int64 *)(a2 + 64));
}
