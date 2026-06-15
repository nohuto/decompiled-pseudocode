/*
 * XREFs of _CDeviceGraphStore::GetDeviceGraphStoreForEndpoint_::_1_::dtor$2 @ 0x18006902C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CDeviceGraphStore::GetDeviceGraphStoreForEndpoint_::_1_::dtor_2(__int64 a1, const unsigned __int16 *a2)
{
  CBaseStreamGroupProxy::OnEndpointUnavailableForUse((CBaseStreamGroupProxy *)(a2 + 48), a2);
}
