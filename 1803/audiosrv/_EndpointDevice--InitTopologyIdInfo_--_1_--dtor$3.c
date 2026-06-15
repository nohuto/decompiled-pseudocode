/*
 * XREFs of _EndpointDevice::InitTopologyIdInfo_::_1_::dtor$3 @ 0x180068BFA
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::InitTopologyIdInfo_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(a2 + 64);
}
