/*
 * XREFs of _CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor$8 @ 0x1800D24BF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

LPVOID *__fastcall CAudioResourceManager::ReevaluateSaDeviceSettings_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<SaDeviceParams>::~CAutoPtr<SaDeviceParams>((LPVOID **)(a2 + 96));
}
