/*
 * XREFs of _CPipeInstance::InitializeAPOInterfaces_::_1_::dtor$3 @ 0x140020EA4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CPipeInstance::InitializeAPOInterfaces_::_1_::dtor_3(__int64 a1, __int64 a2)
{
  return ATL::CComPtr<IAudioMediaType>::~CComPtr<IAudioMediaType>(a2 + 32);
}
