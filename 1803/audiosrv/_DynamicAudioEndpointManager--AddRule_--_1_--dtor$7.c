/*
 * XREFs of _DynamicAudioEndpointManager::AddRule_::_1_::dtor$7 @ 0x1800FC121
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall DynamicAudioEndpointManager::AddRule_::_1_::dtor_7(__int64 a1, __int64 a2)
{
  return ATL::CAutoPtr<AvoidEndpointPolicyRule>::~CAutoPtr<AvoidEndpointPolicyRule>((__int64 *)(a2 + 136));
}
