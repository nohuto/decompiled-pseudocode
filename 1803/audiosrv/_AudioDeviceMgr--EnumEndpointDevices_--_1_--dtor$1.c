/*
 * XREFs of _AudioDeviceMgr::EnumEndpointDevices_::_1_::dtor$1 @ 0x18006880A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall AudioDeviceMgr::EnumEndpointDevices_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(a2 + 104);
}
