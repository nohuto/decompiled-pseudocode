/*
 * XREFs of _CAudioSrv::ProcessDeviceInternal_::_1_::dtor$8 @ 0x18009DF0B
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CAudioSrv::ProcessDeviceInternal_::_1_::dtor_8(__int64 a1, __int64 a2)
{
  ATL::CComPtr<CEndpointCharacteristics>::~CComPtr<CEndpointCharacteristics>((__int64 *)(a2 + 64));
}
