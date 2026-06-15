/*
 * XREFs of _DynamicAudioEndpointManager::AddRule_::_1_::dtor$2 @ 0x1800FC0F1
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall DynamicAudioEndpointManager::AddRule_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CComPtr<IPolicyRule>::~CComPtr<IPolicyRule>((PersistedEndpointPolicyRule **)(a2 + 56));
}
