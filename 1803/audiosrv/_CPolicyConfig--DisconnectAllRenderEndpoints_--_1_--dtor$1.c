/*
 * XREFs of _CPolicyConfig::DisconnectAllRenderEndpoints_::_1_::dtor$1 @ 0x1800BB66D
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPolicyConfig::DisconnectAllRenderEndpoints_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 96));
}
