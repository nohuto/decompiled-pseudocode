/*
 * XREFs of _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$3 @ 0x18005997B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<IProcessSubmixProxy>::~ComPtr<IProcessSubmixProxy>(a2 + 88);
}
