/*
 * XREFs of _EndpointCollection::GetDeviceByInterfacePath_::_1_::dtor$2 @ 0x180117BE6
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall EndpointCollection::GetDeviceByInterfacePath_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 32));
}
