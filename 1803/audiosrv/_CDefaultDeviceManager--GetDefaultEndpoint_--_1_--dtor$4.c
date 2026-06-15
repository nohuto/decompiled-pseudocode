/*
 * XREFs of _CDefaultDeviceManager::GetDefaultEndpoint_::_1_::dtor$4 @ 0x18006AA90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CDefaultDeviceManager::GetDefaultEndpoint_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(a2 + 64);
}
