/*
 * XREFs of _CEndpointCharacteristics::InitializeAPOInfo_::_1_::dtor$1 @ 0x1800EC528
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CEndpointCharacteristics::InitializeAPOInfo_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 64));
}
