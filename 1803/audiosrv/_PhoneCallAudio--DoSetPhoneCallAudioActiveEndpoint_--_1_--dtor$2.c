/*
 * XREFs of _PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint_::_1_::dtor$2 @ 0x1800FA49A
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall PhoneCallAudio::DoSetPhoneCallAudioActiveEndpoint_::_1_::dtor_2(__int64 a1, __int64 a2)
{
  ATL::CComPtr<EndpointDevice>::~CComPtr<EndpointDevice>((EndpointDevice **)(a2 + 112));
}
