/*
 * XREFs of _PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint_::_1_::dtor$1 @ 0x1800FA48E
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint_::_1_::dtor_1(__int64 a1, __int64 a2)
{
  ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>((EndpointDevice **)(a2 + 128));
}
