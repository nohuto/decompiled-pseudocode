/*
 * XREFs of _EndpointDevice::InitAdapterInformation_::_1_::dtor$2 @ 0x180068C36
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointDevice::InitAdapterInformation_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(a2 + 72);
}
