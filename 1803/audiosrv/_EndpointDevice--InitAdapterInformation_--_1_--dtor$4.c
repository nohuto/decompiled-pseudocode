/*
 * XREFs of _EndpointDevice::InitAdapterInformation_::_1_::dtor$4 @ 0x180068C4E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::InitAdapterInformation_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(a2 + 56);
}
