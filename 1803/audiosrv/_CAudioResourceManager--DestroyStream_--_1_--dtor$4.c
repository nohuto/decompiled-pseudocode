/*
 * XREFs of _CAudioResourceManager::DestroyStream_::_1_::dtor$4 @ 0x180068CC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::DestroyStream_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return Microsoft::WRL::ComPtr<CAudioSessionManagerProvider>::~ComPtr<CAudioSessionManagerProvider>(a2 + 104);
}
