/*
 * XREFs of _CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor$15 @ 0x1800D1476
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPVOID *__fastcall CAudioResourceManager::CreateInternalLoopbackStream_::_1_::dtor_15(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>((LPVOID **)(a2 + 168));
}
