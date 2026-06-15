/*
 * XREFs of _EndpointDevice::InitAdapterInformation_::_1_::dtor$1 @ 0x180068C2A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::InitAdapterInformation_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(a2 + 80);
}
