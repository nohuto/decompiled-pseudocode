/*
 * XREFs of _DynamicAudioEndpointManager::CreateInstance_::_1_::dtor$1 @ 0x180069C02
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DynamicAudioEndpointManager::CreateInstance_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<AvoidEndpointPolicyRule>::~CAutoPtr<AvoidEndpointPolicyRule>(a2 + 64);
}
