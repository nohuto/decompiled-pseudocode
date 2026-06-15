/*
 * XREFs of _CPipeInstance::AddConnectionsAndActivateAPOs_::_1_::dtor$4 @ 0x14001FDA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::AddConnectionsAndActivateAPOs_::_1_::dtor_4(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 160);
}
