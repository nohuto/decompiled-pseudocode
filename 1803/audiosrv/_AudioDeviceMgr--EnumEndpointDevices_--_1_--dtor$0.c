/*
 * XREFs of _AudioDeviceMgr::EnumEndpointDevices_::_1_::dtor$0 @ 0x1800687FE
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::EnumEndpointDevices_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(a2 + 112);
}
