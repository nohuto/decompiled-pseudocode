/*
 * XREFs of _DynamicAudioEndpointManager::RemoveRule_::_1_::dtor$1 @ 0x1800FCF2A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DynamicAudioEndpointManager::RemoveRule_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IPolicyRule>::~CComPtr<IPolicyRule>((PersistedEndpointPolicyRule **)(a2 + 32));
}
