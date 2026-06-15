/*
 * XREFs of _CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor$4 @ 0x180059987
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAudioResourceManager::GetSaDeviceForSharedStream_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>(a2 + 120);
}
