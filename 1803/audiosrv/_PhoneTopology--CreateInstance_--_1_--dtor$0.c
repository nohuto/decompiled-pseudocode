/*
 * XREFs of _PhoneTopology::CreateInstance_::_1_::dtor$0 @ 0x1800689BF
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PhoneTopology::CreateInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>((void *)(a2 + 96));
}
