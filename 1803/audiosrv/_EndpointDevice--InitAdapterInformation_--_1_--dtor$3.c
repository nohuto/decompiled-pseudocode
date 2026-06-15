/*
 * XREFs of _EndpointDevice::InitAdapterInformation_::_1_::dtor$3 @ 0x180068C42
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::InitAdapterInformation_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(a2 + 64);
}
