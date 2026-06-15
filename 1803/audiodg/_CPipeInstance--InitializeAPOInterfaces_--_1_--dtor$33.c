/*
 * XREFs of _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$33 @ 0x14001FCB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::InitializeAPOInterfaces_::_1_::dtor_33(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 40);
}
