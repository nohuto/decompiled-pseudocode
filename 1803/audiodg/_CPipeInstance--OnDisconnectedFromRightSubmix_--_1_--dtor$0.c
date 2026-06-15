/*
 * XREFs of _CPipeInstance::OnDisconnectedFromRightSubmix_::_1_::dtor$0 @ 0x14001FBC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::OnDisconnectedFromRightSubmix_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 80);
}
