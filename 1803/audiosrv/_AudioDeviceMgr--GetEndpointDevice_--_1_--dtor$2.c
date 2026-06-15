/*
 * XREFs of _AudioDeviceMgr::GetEndpointDevice_::_1_::dtor$2 @ 0x180116CB2
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::GetEndpointDevice_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>((__int64 *)(a2 + 120));
}
