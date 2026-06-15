/*
 * XREFs of _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$6 @ 0x14001FC20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::InitializeAPOInterfaces_::_1_::dtor_6(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioEndpoint>::~CComPtr<IAudioEndpoint>(a2 + 40);
}
